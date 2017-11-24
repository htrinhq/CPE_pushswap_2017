/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** main
*/

#include <stdlib.h>
#include "swap.h"

int main(int ac, char **av)
{
	long *src = malloc(sizeof(long) * ac - 1);
	long *lb = malloc(sizeof(long) * ac - 1);
	int b = 0;
	int size = ac - 1;

	if (ac < 2)
		return (84);
	else if (ac > 1001) {
		write(1, "\n", 1);
		return (0);
	} else {
		src = fillsrc(src, ac, av);
		pushswap(src, lb, &b, size);
		return (0);
	}
}
