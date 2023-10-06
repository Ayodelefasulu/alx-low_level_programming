#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * print_error - Print an error message to stderr and exit with the given code.
 * @code: The exit code.
 * @message: The error message to print.
 */
void print_error(int code, const char *message)
{
	dprintf(2, "%s\n", message);
	exit(code);
}

/**
 * read_elf_header - Read the ELF header from the given file descriptor.
 * @fd: The file descriptor of the ELF file.
 * @elf_header: A pointer to the ELF header structure to fill.
 */
void read_elf_header(int fd, Elf64_Ehdr *elf_header)
{
	if (lseek(fd, 0, SEEK_SET) == -1)
	{
		print_error(98, "Error: Unable to lseek\n");
	}

	if (read(fd, elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		print_error(98, "Error: Unable to read ELF header\n");
	}
}

/**
 * print_elf_header_info - Print information from the ELF header.
 * @elf_header: A pointer to the ELF header structure.
 */
void print_elf_header_info(Elf64_Ehdr *elf_header)
{
	int i;
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", elf_header->e_ident[i]);
		if (i < EI_NIDENT - 1)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}
	printf("  Class:                             %s\n",
(elf_header->e_ident[EI_CLASS] == ELFCLASS64) ? "ELF64" : "ELF32");
	printf("  Data:                              %s\n",
(elf_header->e_ident[EI_DATA] == ELFDATA2LSB) ?
"2's complement, little-endian" : "2's complement, big-endian");
	printf("  Version:                           %d (current)\n",
elf_header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %d\n",
elf_header->e_ident[EI_OSABI]);
	printf("  ABI Version:                       %d\n",
elf_header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n",
(elf_header->e_type == ET_EXEC) ?
"EXEC (Executable file)" : "OTHER (Unknown file type)");
	printf("  Entry point address:               0x%lx\n",
(unsigned long)elf_header->e_entry);
}
/**
 * main - entry point
 * @argc: count
 * @argv: values
 *
 * Return: Always (0)
 */
int main(int argc, char *argv[])
{
	const char *file_name;
	Elf64_Ehdr elf_header;
	int fd;

	if (argc != 2)
	{
		print_error(98, "Usage: elf_header elf_filename");
	}

	file_name = argv[1];
	fd = open(file_name, O_RDONLY);

	if (fd == -1)
	{
		print_error(98, "Error: Unable to open file");
	}

	read_elf_header(fd, &elf_header);

	if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
elf_header.e_ident[EI_MAG3] != ELFMAG3)
	{
		print_error(98, "Error: Not an ELF file");
	}

	printf("...ELF Header:\n");
	print_elf_header_info(&elf_header);

	close(fd);
	return (0);
}
