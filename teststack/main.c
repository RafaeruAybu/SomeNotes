#include <stdio.h>
#include <stdlib.h>

int *foo2(void)
{
	int *ptr;
	return (ptr);
}

int *foo(int nbr)
{
	int *ptr;
	ptr = malloc(sizeof(int));
	*ptr = nbr;
	return (ptr);
}

int main(void) {
	int *p;
	p = foo(4);
	printf("%i\n", *p);
	p = foo2();
	printf("%i\n", *p);
	return (0);
}