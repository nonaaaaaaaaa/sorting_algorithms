#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * print_array - Print the elements of an array.
 * @array: The array to print.
 * @size: The size of the array.
 */
void print_array(const int *array, size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
	printf("%d ", array[i]);
	}
	printf("\n");
}

/**
 * bubble_sort - Sort an array of integers in ascending order using Bubble Sort
 * @array: An array of integers to sort.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
	return;

	while (!bubbly)
	{
	bubbly = true;

	for (i = 0; i < len - 1; i++)
	{
	if (array[i] > array[i + 1])
	{
	swap_ints(&array[i], &array[i + 1]);
	print_array(array, size);
	bubbly = false;
	}
	}

	len--;
	}
}
