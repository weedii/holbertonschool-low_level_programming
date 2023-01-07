#include "search_algos.h"

/***/

int jump_search(int *array, size_t size, int value)
{
    size_t step = sqrt(size), prev = 0, i = 0;

    while (array[step] <= value)
    {
        printf("Value checked array[%ld] = [%d]\n", i, array[i]);
        if (array[step] == value)
            break;
        i = step;
        step += sqrt(size);

        if (step >= size - 1)
            break;
    }

    printf("Value found between indexes [%ld] and [%ld]\n", i, step);

    for (prev = i; prev <= step; prev++)
    {
        printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
        if (array[prev] == value)
            return (prev);
    }

    return (-1);
}
