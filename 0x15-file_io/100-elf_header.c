#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <sys/stat.h>
#include <sys/types.h>

void print_error_and_exit(int code, const char *message);
void display_elf_header(const char *filename);

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: arguments
 * Return: 1 on success , exit 98 on error
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		error_exit(98, "Usage: elf_header elf_filename");
	}

	const char *file = argv[1];

	print_header(file);

	return (0);
}

/**
 * error_exit - copies the content of a file to another file
 * @code: inputs argument
 * @message: pointer arguments
 * Return: returns void.
 */

void error_exit(int code, const char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(code);
}

/**
 * print_header - copies the content of a file to another file
 * @file: Elf file to be accessed
 *
 * Return: returns void.
 */

void print_header(const char *file)
{
	int feed = open(file, O_RDONLY);

	if (feed == -1)
	{
		error_exit(98, "Error: Can't open the file");
	}
	Elf64_Ehdr header;

	if (read(feed, &header, sizeof(header)) != sizeof(header))
	{
		error_exit(98, "Error: Unable to read the ELF header");
	}
/* Check if it's a valid ELF file */
	if (header.e_ident[EI_MAG0] != ELFMAG0
	|| header.e_ident[EI_MAG1] != ELFMAG1 ||
	header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
	{
		error_exit(98, "Error: Not an ELF file");
	}
	printf("Magic: %02x %02x %02x %02x\n", header.e_ident[EI_MAG0],
header.e_ident[EI_MAG1], header.e_ident[EI_MAG2], header.e_ident[EI_MAG3]);
	printf("Class: %s\n", header.e_ident[EI_CLASS] == ELFCLASS64 ?
		"ELF64" : "ELF32");
	printf("Data: %s\n", header.e_ident[EI_DATA] == ELFDATA2LSB ?
"2's complement, little-endian" : (header.e_ident[EI_DATA] == ELFDATA2MSB ?
	"2's complement, big-endian" : "Unknown"));
	printf("Version: %d\n", header.e_ident[EI_VERSION]);
	printf("OS/ABI: %d\n", header.e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", header.e_ident[EI_ABIVERSION]);
	printf("Type: %d\n", header.e_type);
	printf("Entry point address: 0x%lx\n", header.e_entry);

	close(feed);
}
