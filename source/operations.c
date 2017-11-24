/*
** EPITECH PROJECT, 2017
** operations.c
** File description:
** operations needed to pushswap
*/

#include <stdlib.h>
#include "swap.h"

void rotate_left(long *array, int size)
{
	int i = 0;

	while (i < size - 1) {
		swap_elem(array, i, i + 1);
		i = i + 1;
	}
}

void rotate_right(long *array, int size)
{
	int i = size - 1;

	while (i > 0) {
		swap_elem(array, i, i - 1);
		i = i - 1;
	}
}

void putminfirstleft(long *array, int size, long min)
{
	while (array[0] != min) {
		if (array[0] > array[1] && array[1] != min)
			swap(array);
		rotate_left(array, size);
		write(1, "ra \n", 3);
	}
}

void putminfirstright(long *array, int size, long min)
{
	while (array[0] != min) {
		if (array[0] > array[1] && array[1] != min)
			swap(array);
		rotate_right(array, size);
		write(1, "rra ", 4);
	}
}
