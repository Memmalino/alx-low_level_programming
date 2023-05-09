#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <string.h>
#include <errno.h>

/**
 * Read the ELF header from the specified file.
 * 
 * @param fd The file descriptor for the ELF file.
 * @param elf_header A pointer to an Elf64_Ehdr struct where the ELF header will be stored.
 * @return 0 on success, -1 on failure.
 */
int read_elf_header(int fd, Elf64_Ehdr *elf_header);

/**
 * Print the ELF header information to stdout.
 * 
 * @param elf_header A pointer to the Elf64_Ehdr struct containing the ELF header information.
 */
void print_elf_header_info(Elf64_Ehdr *elf_header);

int main(int argc, char *argv[]) {
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

    printf("ELF Header:\n");
    print_elf_header_info(&elf_header);

    close(fd);
    return 0;
}

int read_elf_header(int fd, Elf64_Ehdr *elf_header) {
    if (read(fd, elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr)) {
        return -1;
    }
    return 0;
}

void print_elf_header_info(Elf64_Ehdr *elf_header) {
   int i;
      	printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", elf_header->e_ident[i]);
    }
    printf("\n");
    printf("  Class:                             %s\n", elf_header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
    printf("  Data:                              %s\n", elf_header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
    printf("  Version:                           %d\n", elf_header->e_ident[EI_VERSION]);
    printf("  OS/ABI:                            %d\n", elf_header->e_ident[EI_OSABI]);
    printf("  ABI Version:                       %d\n", elf_header->e_ident[EI_ABIVERSION]);
    printf("  Type:                              %d\n", elf_header->e_type);
    printf("  Entry point address:               0x%lx\n", elf_header->e_entry);
}

