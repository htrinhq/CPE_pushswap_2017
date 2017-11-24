/*
** EPITECH PROJECT, 2017
** returnswap.c
** File description:
** returnmin and swap_elem functions
*/

#include "swap.h"

int returnmin(long *array, int size)
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

void swap_elem(long *array, int index1, int index2)
{
	int x;

	x = array[index1];
	array[index1] = array[index2];
	array[index2] = x;
}
