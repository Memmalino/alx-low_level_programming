#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <unistd.h>
#define BUFFER_SIZE 1024

void close_fd(int fd);
void copy_file(const char *from_path, const char *to_path);
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void print_elf_header_info(Elf64_Ehdr *elf_header);
int read_elf_header(int fd, Elf64_Ehdr *elf_header);
#endif
