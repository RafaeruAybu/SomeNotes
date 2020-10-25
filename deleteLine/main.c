#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1000

void		deleteLine(FILE *srcFile, FILE *tempFile, const int line);
void		printFile(FILE *fptr);

int			main()
{
	
	return (0);
}

void		printFile(FILE *fptr)
{
	char	ch;
	while((ch = fgetc(fptr)) != EOF)
		putchar(ch);
}

void		deleteLine(FILE *srcFile, FILE *tempFile, const int line)
{
	char 	buffer[BUFFER_SIZE];
	int		count = 1;

	while ((fgets(buffer, BUFFER_SIZE, srcFile)) != NULL)
	{
		if (line != count)
			fputs(buffer, tempFile);

		count++;
	}
}
