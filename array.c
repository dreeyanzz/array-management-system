#include "array.h"
#include <stdio.h>

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
        if (arr[index] == value)
        {
            deleteByValue(arr, count, value);
            index--;
        }
}

void deleteSecondSmallest(int arr[], int *count)
{
    int cpyIndex;
    int cpyArr[*count];
    for (cpyIndex = 0; cpyIndex < *count; cpyIndex++)
        cpyArr[cpyIndex] = arr[cpyIndex];

    int sortIndex;
    int isSwapped = 1;
    while (isSwapped)
    {
        isSwapped = 0;
        for (sortIndex = 0; sortIndex < *count - 1; sortIndex++)
            if (cpyArr[sortIndex] > cpyArr[sortIndex + 1])
            {
                isSwapped = 1;

                int temp = cpyArr[sortIndex + 1];
                cpyArr[sortIndex + 1] = cpyArr[sortIndex];
                cpyArr[sortIndex] = temp;
            }
    }

    int secondSmall = cpyArr[1];

    printf("Second Smallest: %d\n", secondSmall);
    deleteByValue(arr, count, secondSmall);
}

void deleteSecondLargest(int arr[], int *count)
{
    int cpyIndex;
    int cpyArr[*count];
    for (cpyIndex = 0; cpyIndex < *count; cpyIndex++)
        cpyArr[cpyIndex] = arr[cpyIndex];

    int sortIndex;
    int isSwapped = 1;
    while (isSwapped)
    {
        isSwapped = 0;
        for (sortIndex = 0; sortIndex < *count - 1; sortIndex++)
            if (cpyArr[sortIndex] > cpyArr[sortIndex + 1])
            {
                isSwapped = 1;

                int temp = cpyArr[sortIndex + 1];
                cpyArr[sortIndex + 1] = cpyArr[sortIndex];
                cpyArr[sortIndex] = temp;
            }
    }

    int secondLarge = cpyArr[*count - 2];

    printf("Second Largest: %d\n", secondLarge);
    deleteByValue(arr, count, secondLarge);
}

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

int search(int arr[], int count, int value)
{
    int index;
    for (index = 0; index < count; index++)
        if (arr[index] == value)
            return index + 1;

    return -1;
}