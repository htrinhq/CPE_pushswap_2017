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
	int *src = malloc(sizeof(int) * ac - 1);
	int *lb = malloc(sizeof(int) * ac - 1);
	int b = 0;

	if (ac < 2)
		return (84);
	else {
		src = fillsrc(src, ac, av);
		pushswap(src, lb, &b, ac);
		return (0);
	}
}
