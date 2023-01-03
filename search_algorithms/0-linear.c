#include "search_algos.h"

/***/

int linear_search(int *array, size_t size, int value)
{
    size_t i = 0;

    while (i <= size - 1)
    {
        if (value != array[i])
        {
            printf("Value checked array[%ld] = [%d]\n", i, array[i]);
            i++;
        }
        if (value == array[i])
        {
            printf("Value checked array[%ld] = [%d]\n", i, array[i]);
            return (i);
        }
    }
    return (-1);
}