#include <stdio.h>

int main(void)
{
	FILE *fp;
	fp = fopen("test.txt", "w");
	fclose(fp);
	return (0);
}
