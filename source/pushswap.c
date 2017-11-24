/*
** EPITECH PROJECT, 2017
** pushswap.c
** File description:
** pushswap
*/

#include "swap.h"
#include <unistd.h>
#include <stdio.h>

long *fillsrc(long *src, int ac, char **av)
{
        int a = 1;

        while (a < ac) {
                src[a - 1] = my_getnbr(av[a]);
                a = a + 1;
        }
        return (src);
}

int isarraysorted(long *array, int size)
{
	int x = 0;

	while (array[x] <= array[x + 1] && x + 1 != size) {
		x = x + 1;
	}
	if (x == size - 1) {
		return (1);
	} else {
		return (0);
        }
}

void putinb(long *la, long *lb, int *b, int size)
{
        int s = size;
        int smin;
        long min;

        while (*b < size - 1) {
                smin = returnmin(la, s);
                min = la[smin];
                if (smin < size / 2)
                        putminfirstleft(la, s, min);
                else
                        putminfirstright(la, s, min);
                lb[size - *b] = la[0];
                *b = *b + 1;
                s = s - 1;
                rotate_left(la, size);
                write(1, "pb ", 3);
        }
}

void swap(long *array)
{
	swap_elem(array, 0, 1);
	write(1, "sa ", 3);
}

void pushswap(long *la, long *lb, int *b, int size)
{
        int i = 0;

        if (isarraysorted(la, size) || size == 1) {
                write(1, "\n", 1);
                return;
        } else {
                putinb(la, lb, b, size);
                while (i < *b - 1) {
                        write(1, "pa ", 3);
                        i = i + 1;
                }
                write(1, "pa\n", 3);
                free(la);
                free(lb);
        }
}
