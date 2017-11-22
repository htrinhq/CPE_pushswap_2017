/*
** EPITECH PROJECT, 2017
** pushswap.c
** File description:
** pushswap
*/

#include "swap.h"
#include <unistd.h>
#include <stdio.h>

int *fillsrc(int *src, int ac, char **av)
{
        int a = 1;

        while (a < ac) {
                src[a - 1] = my_getnbr(av[a]);
                a = a + 1;
        }
        return (src);
}

void putinb(int *la, int *lb, int *b, int ac)
{
        int size = ac - 1;
        int s = size;
        int smin = returnmin(la, size);
        int min = la[smin];

        while (*b < size - 1) {
                if (*b != 0) {
                        smin = returnminafter(la, s, min);
                        min = la[smin];
                }
                putminfirstleft(la, s, min);
                lb[size - *b] = la[0];
                *b = *b + 1;
                s = s - 1;
                rotate_left(la, size);
                write(1, "pb ", 3);
        }
}

void pushswap(int *la, int *lb, int *b, int ac)
{
        int i = 0;

        putinb(la, lb, b, ac);
        while (i < *b - 1) {
                write(1, "pa ", 3);
                i = i + 1;
        }
        write(1, "pa\n", 3);
}
