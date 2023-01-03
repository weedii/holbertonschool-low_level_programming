#include "search_algos.h"

/***/
int binary_search(int *array, size_t size, int value)
{
    return (binarysearch(array, 0, size - 1, value));
}

/***/
int binarysearch(int *array, int start, int size, int value)
{
    int mid = start + (size - start) / 2;

    if (size >= start)
    {
        if (array[mid] == value)
            return (mid);

        if (array[mid] > value)
            return (binarysearch(array, start, mid - 1, value));

        return (binarysearch(array, mid + 1, size, value));
    }
    return (-1);
}