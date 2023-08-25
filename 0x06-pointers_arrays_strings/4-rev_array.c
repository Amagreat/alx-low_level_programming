#include "main.h"

/**
 * reverse_array - Reserse the content of an array of integers
 * @a: Array of integers
 * @n: Number of elements in array
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;

	while (start < end)
	{

		int temp = a[start];
	a[start] = a[end];
	a[end] = temp;


		start++;
		end--;
	}
}
