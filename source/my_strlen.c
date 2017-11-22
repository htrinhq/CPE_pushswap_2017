/*
** EPITECH PROJECT, 2017
** my_strlen
** File description:
** counts and returns the number of characters found in the string as parameter.
*/

#include "swap.h"

int my_strlen(int const *str)
{
	int i = 0;

	while (str[i] != '\0') {
		i = i + 1;
	}
	return (i);
}
