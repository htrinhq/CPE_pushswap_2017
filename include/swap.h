/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** my.h
*/

#ifndef SWAP_H_
#define SWAP_H_
#include <unistd.h>
#include <stdlib.h>

int my_strlen(int const *str);
long my_getnbr(char const *str);
void swap(long *array);
void swap_elem(long *array, int index1, int index2);
void rotate_left(long *array, int size);
void rotate_right(long *array, int size);
int returnmin(long *array, int size);
void putminfirstleft(long *array, int size, long min);
void putminfirstright(long *array, int size, long min);
long *fillsrc(long *src, int ac, char **av);
void pushswap(long *la, long *lb, int *b, int size);
void putinb(long *la, long *lb, int *b, int size);

#endif
