#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "main.h"

/**
 * displayElfHeader -  Function to read and display the ELF header
 * @filename: name of file to be accessed
 * return: nothing
 */
void displayElfHeader(const char *filename)
{
	FILE *file = fopen(filename, "rb");

	if (file == NULL)
	{
		printf("Error opening file.\n");
		return;
	}

	ElfHeader header;

	fread(&header, sizeof(ElfHeader), 1, file);

/* Display the information*/

	printf("Magic: %02X %02X %02X %02X\n", header.e_ident[0],
		header.e_ident[1], header.e_ident[2], header.e_ident[3]);
	printf("Class: %u-bit\n", (header.e_ident[4] == 1) ? 32 : 64);
	printf("Data: %s\n", (header.e_ident[5] == 1) ?
			"little-endian" : "big-endian");
	printf("Version: %u\n", header.e_ident[6]);
	printf("OS/ABI: %u\n", header.e_ident[7]);
	printf("ABI Version: %u\n", header.e_ident[8]);
	printf("Type: %u\n", header.e_type);
	printf("Entry point address: 0x%lX\n", header.e_entry);

	fclose(file);
}

/**
 * main - main funct
 * @argc: count
 * @argv: command
 * Return: always return 0
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Usage: elf_header elf_filename\n");
		return (1);
	}

	char *filename = argv[1];

	displayElfHeader(filename);

	return (0);
}
