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
int my_getnbr(char const *str);
void swap(int *array);
void swap_elem(int *array, int index1, int index2);
void rotate_left(int *array, int size);
void rotate_right(int *array, int size);
int returnmin(int *array, int size);
void putminfirstleft(int *array, int size, int min);
void putminfirstright(int *array, int size, int min);
int *fillsrc(int *src, int ac, char **av);
void pushswap(int *la, int *lb, int *b, int ac);
void putinb(int *la, int *lb, int *b, int size);

#endif
