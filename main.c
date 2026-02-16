#include <stdio.h>
#include <stdlib.h>
#include "array.h"

#define MAX_COUNT 10

int main(int argc, char *argv[])
{

	int count = 10;
	int arr[100] = {1, 6, 8, 9, 4, 5, 7, 2, 3, 10};

	printf("Main array: ");
	display(arr, count);
	printf("\n");

	printf("\nInserting 10 at beginning: ");
	insertBeginning(arr, &count, 10);
	display(arr, count);
	printf("\n");

	printf("\nInserting 69 at end: ");
	insertEnd(arr, &count, 69);
	display(arr, count);
	printf("\n");

	printf("\nInserting 420 at position 2 (index 1): ");
	insertAtPosition(arr, &count, 2, 420);
	display(arr, count);
	printf("\n");

	printf("\nInserting 123 at after 6: ");
	insertAfterValue(arr, &count, 6, 123);
	display(arr, count);
	printf("\n");

	printf("\nDeleting at Pos 7 (index 6): ");
	deleteAtPosition(arr, &count, 7);
	display(arr, count);
	printf("\n");

	printf("\nDeleting at first 10: ");
	deleteByValue(arr, &count, 10);
	display(arr, count);
	printf("\n");

	printf("\nDeleting all occurences of 420: ");
	deleteAllOccurrences(arr, &count, 420);
	display(arr, count);
	printf("\n");

	return 0;
}

// printf("\nDeleting at Pos 7 (index 6): ");
//
// display(arr, count);
// printf("\n");