#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <string.h>
#include <errno.h>
#include "main.h"

int main(int argc, char **argv) {
    int fd;
    Elf64_Ehdr elf_header;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        exit(98);
    }

    fd = open(argv[1], O_RDONLY);
    if (fd < 0) {
        fprintf(stderr, "Error: Cannot open file %s: %s\n", argv[1], strerror(errno));
        exit(98);
    }

    if (read_elf_header(fd, &elf_header) == -1) {
        fprintf(stderr, "Error: Cannot read ELF header from file %s: %s\n", argv[1], strerror(errno));
        close(fd);
        exit(98);
    }

    print_elf_header_info(&elf_header);

    close(fd);
    exit(0);
}

/**
 * read_elf_header - function that read elf header
 * @fd: an argument
 * @elf_header: the second argument
 * Return: 0 on succes, -1 if failed
 */

int read_elf_header(int fd, Elf64_Ehdr *elf_header) {
    int result;

    result = lseek(fd, 0, SEEK_SET);
    if (result == -1) {
        return -1;
    }

    result = read(fd, elf_header, sizeof(Elf64_Ehdr));
    if (result != sizeof(Elf64_Ehdr)) {
        return -1;
    }

    return 0;
}

void print_elf_header_info(Elf64_Ehdr *elf_header) {
    char* class_str;
    char* data_str;
    char* osabi_str;
    char* type_str;
	int i;

    printf("ELF File Identification:\n");
    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", elf_header->e_ident[i]);
    }
    printf("\n");

    if (elf_header->e_ident[EI_CLASS] == ELFCLASS64) {
        class_str = "ELF64";
    } else if (elf_header->e_ident[EI_CLASS] == ELFCLASS32) {
        class_str = "ELF32";
    } else {
        class_str = "Invalid class";
    }
    printf("ELF File Class:                    %s\n", class_str);

    if (elf_header->e_ident[EI_DATA] == ELFDATA2LSB) {
        data_str = "2's complement, little endian";
    } else if (elf_header->e_ident[EI_DATA] == ELFDATA2MSB) {
        data_str = "2's complement, big endian";
    } else {
        data_str = "Invalid data encoding";
    }
    printf("ELF Data Encoding:                 %s\n", data_str);

    printf("ELF File Version:                  %d\n", elf_header->e_ident[EI_VERSION]);

    switch (elf_header->e_ident[EI_OSABI]) {
        case ELFOSABI_SYSV:
            osabi_str = "UNIX System V";
            break;
        case ELFOSABI_HPUX:
            osabi_str = "HP-UX";
            break;
        case ELFOSABI_NETBSD:
            osabi_str = "NetBSD";
            break;
        case ELFOSABI_LINUX:
            osabi_str = "Linux";
            break;
        case ELFOSABI_SOLARIS:
            osabi_str = "Solaris";
            break;
        case ELFOSABI_AIX:
            osabi_str = "AIX";
            break;
        default:
            osabi_str = "Unknown";
            break;
    }
    printf("ELF OS/ABI:                        %s\n", osabi_str);

    switch (elf_header->e_type) {
        case ET_NONE:
            type_str = "None";
            break;
        case ET_REL:
            type_str = "Relocatable";
            break;
        case ET_EXEC:
            type_str = "Executable";
            break;
        case ET_DYN:
            type_str = "Shared object";
            break;
        case ET_CORE:
            type_str = "Core";
            break;
        default:
            type_str = "Unknown";
            break;
    }
    printf("ELF File Type:                     %s\n", type_str);

    printf("ELF File Architecture:             %s\n", elf_header->e_machine == EM_X86_64 ? "x86-64" : "Unknown");

    printf("ELF Entry point address:           0x%lx\n", elf_header->e_entry);
}
