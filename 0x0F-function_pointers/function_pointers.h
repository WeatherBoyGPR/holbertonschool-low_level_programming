#ifndef THEDOG_H
#define THEDOG_H

/**
*struct size_t - is the structure to be used for array_iterator
*@size: represents size
*/
struct size_t
{
int size;
};

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int(*cmp)(int));

#endif
