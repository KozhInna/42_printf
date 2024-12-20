#include<stdio.h>
#include "ft_printf.h"
#include<limits.h>

int	ft_printf(const char *str, ...);

int main(void)
{
	int size_or = 0, size_ft = 0;

    printf("-----------No specifier-----------\n");
	size_or = printf("or-normalcase-without-parameter\n");
	size_ft = ft_printf("ft-normalcase-without-parameter\n");
	printf("or - %d\nft - %d\n\n", size_or, size_ft);

    printf("-----------specifier X and x-----------\n");
	size_or = printf("or-lowercase-hex %x\n", 255);
    size_ft = ft_printf("ft-lowercase-hex %x\n", 255);
	printf("or size - %d\n", size_or);
    printf("ft size - %d\n\n", size_ft);

	size_or = printf("or-uppercase-hex %x\n", 255);
    size_ft = ft_printf("ft-uppercase-hex %x\n", 255);
	printf("or size - %d\n", size_or);
    printf("ft size - %d\n\n", size_ft);

	size_or = printf("or-zero %x\n", 0);
    size_ft = ft_printf("ft-zero %x\n", 0);
	printf("or size - %d\n", size_or);
    printf("ft size - %d\n\n", size_ft);

	printf("-----------specifier u-----------\n");
	size_or = printf("or-positive %u\n", 255);
    size_ft = ft_printf("ft-positive %u\n", 255);
	printf("or size - %d\n", size_or);
    printf("ft size - %d\n\n", size_ft);

	size_or = printf("or-zero %u\n", 0);
    size_ft = ft_printf("ft-zero %u\n", 0);
	printf("or size - %d\n", size_or);
    printf("ft size - %d\n\n", size_ft);

	size_or = printf("or-maximum-value-unsigned-int %u\n", UINT_MAX);
    size_ft = ft_printf("ft-maximum-value-unsigned-int %u\n", UINT_MAX);
	printf("or size - %d\n", size_or);
    printf("ft size - %d\n\n", size_ft);

    printf("-----------specifier d and i-----------\n");
	size_or = printf("or-positive-int %d\n", 42);
    size_ft = ft_printf("ft-positive-int %d\n", 42);
	printf("or size - %d\n", size_or);
	printf("ft size - %d\n\n", size_ft);

	size_or = printf("or-negative-int %d\n", -42);
    size_ft = ft_printf("ft-negative-int %d\n", -42);
	printf("or size - %d\n", size_or);
	printf("ft size - %d\n\n", size_ft);

	size_or = printf("or-zero-int %d\n", 0);
    size_ft = ft_printf("ft-zero-int %d\n", 0);
	printf("or size - %d\n", size_or);
	printf("ft size - %d\n\n", size_ft);

	size_or = printf("or-minimum-value-signed-int %d\n", INT_MIN);
    size_ft = ft_printf("ft-minimum-value-signed-int %d\n", INT_MIN);
	printf("or size - %d\n", size_or);
    printf("ft size - %d\n\n", size_ft);

	size_or = printf("or-maximum-value-signed-int %d\n", INT_MAX);
    size_ft = ft_printf("ft-maximum-value-signed-int %d\n", INT_MAX);
	printf("or size - %d\n", size_or);
	printf("ft size - %d\n\n", size_ft);

    printf("-----------specifiers s-----------\n");
	size_or = printf("or- normal-string %s\n", "Hello");
    size_ft = ft_printf("ft- normal-string %s\n", "Hello");
	printf("or size - %d\n", size_or);
	printf("ft size - %d\n\n", size_ft);

	size_or = printf("or- empty-string %s\n", "");
    size_ft = ft_printf("ft- empty-string %s\n", "");
	printf("or size - %d\n", size_or);
	printf("ft size - %d\n\n", size_ft);

	// size_or = printf("or- NULL-string %s\n", NULL);
    // size_ft = ft_printf("ft- NULL-string %s\n", NULL);
	// printf("or size - %d\n", size_or);
	// printf("ft size - %d\n\n", size_ft);

    printf("-----------specifiers mix-----------\n");
	size_or = printf("or-mix-c-s %c and %s\n", 'A', "Anna");
    size_ft = ft_printf("ft-mix-c-s %c and %s\n", 'A', "Anna");
	printf("or size - %d\n", size_or);
	printf("ft size - %d\n\n", size_ft);

	printf("-----------specifier p-----------\n");
	size_or = printf("or - %p\n", NULL);
    size_ft = ft_printf("ft - %p\n", NULL);
	printf("orsize - %d\n", size_or);
	printf("ft size - %d\n\n", size_ft);

	printf("-----------invalid specifier-----------\n");
	size_or = printf("%z\n");
    // size_ft = ft_printf("ft-mix-c-s %z  dd\n");
	printf("or size - %d\n", size_or);
	// printf("ft size - %d\n\n", size_ft);

}
