#include "array.h"
#include <stdio.h>

void display(int arr[], int count)
{
    printf("[ ");
    int i;
    for (i = 0; i < count; i++)
    {
        printf("%d", arr[i]);

        if (i < count - 1)
            printf(", ");
    }
    printf(" ]");
}

void insertBeginning(int arr[], int *count, int value)
{
    int i;
    for (i = *count; i > 0; i--)
        arr[i] = arr[i - 1];

    arr[0] = value;

    (*count)++;
}

void insertEnd(int arr[], int *count, int value)
{
    arr[*count] = value;
    (*count)++;
}

void insertAtPosition(int arr[], int *count, int position, int value)
{
    int i;
    for (i = *count; i >= position; i--)
        arr[i] = arr[i - 1];

    arr[position - 1] = value;

    (*count)++;
}

void insertAfterValue(int arr[], int *count, int target, int value)
{

    int index;
    for (index = 0; index < *count; index++)
        if (arr[index] == target)
            break;

    int targetPos = index + 1;

    insertAtPosition(arr, count, targetPos + 1, value);
}

void deleteAtPosition(int arr[], int *count, int position)
{
    int targetIndex = position - 1;

    int index;
    for (index = targetIndex; index < *count; index++)
        arr[index] = arr[index + 1];

    (*count)--;
}

void deleteByValue(int arr[], int *count, int value)
{
    int index;
    for (index = 0; index < *count; index++)
        if (arr[index] == value)
            break;

    int targetPos = index + 1;

    deleteAtPosition(arr, count, targetPos);
}

void deleteAllOccurrences(int arr[], int *count, int value)
{
    int index;
    for (index = 0; index < *count; index++)
    {
        if (arr[index] == value)
        {
            deleteByValue(arr, count, value);
            index--;
        }
    }
}