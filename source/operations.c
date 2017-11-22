/*
** EPITECH PROJECT, 2017
** operations.c
** File description:
** operations needed to pushswap
*/

#include <stdlib.h>
#include "swap.h"

int returnmin(int *array, int size)
{
	int x = 0;
	int min = array[0];
	int smin = size;

	while (x != size) {
		if (array[x] < min) {
			min = array[x];
			smin = x;
		}
		x = x + 1;
	}
	if (array[0] == min)
		smin = 0;
	return (smin);
}

int returnminafter(int *array, int size, int ref)
{
	int x = 0;
	int min = array[0];
	int smin = 0;

	while (x != size) {
		if (array[x] < min && array[x] > ref) {
			min = array[x];
			smin = x;
		}
		x = x + 1;
	}
	if (array[0] == min)
		smin = 0;
	return (smin);
}

void rotate_left(int *array, int size)
{
	int i = 0;

	while (i < size - 1) {
		swap_elem(array, i, i + 1);
		i = i + 1;
	}
}

void putminfirstleft(int *array, int size, int min)
{
	while (array[0] != min) {
		if (array[0] > array[1] && array[1] != min)
			swap(array);
		rotate_left(array, size);
		write(1, "ra \n", 3);
	}
}

void swap_elem(int *array, int index1, int index2)
{
	int x;

	x = array[index1];
	array[index1] = array[index2];
	array[index2] = x;
}

void swap(int *array)
{
	swap_elem(array, 0, 1);
	write(1, "sa ", 3);
}
