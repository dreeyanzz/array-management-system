#include <stdio.h>
#include <stdlib.h>
#include "array.h"

void printCurrentArr(int arr[], int count);
void printBorderLine();

#define MAX_COUNT 10

int main(int argc, char *argv[])
{

	// int count = 10;
	// int arr[100] = {1, 6, 8, 9, 4, 5, 7, 2, 3, 10};

	// printf("Main array: ");
	// display(arr, count);
	// printf("\n");

	// printf("\nInserting 10 at beginning:\n");
	// display(arr, count);
	// printf("\n");
	// display(arr, count);
	// insertBeginning(arr, &count, 10);
	// display(arr, count);
	// printf("\n");

	// printf("\nInserting 69 at end:\n");
	// display(arr, count);
	// printf("\n");
	// insertEnd(arr, &count, 69);
	// display(arr, count);
	// printf("\n");

	// printf("\nInserting 420 at position 2 (index 1):\n");
	// display(arr, count);
	// printf("\n");
	// insertAtPosition(arr, &count, 2, 420);
	// display(arr, count);
	// printf("\n");

	// printf("\nInserting 123 at after 6:\n");
	// display(arr, count);
	// printf("\n");
	// insertAfterValue(arr, &count, 6, 123);
	// display(arr, count);
	// printf("\n");

	// printf("\nDeleting at Pos 7 (index 6):\n");
	// display(arr, count);
	// printf("\n");
	// deleteAtPosition(arr, &count, 7);
	// display(arr, count);
	// printf("\n");

	// printf("\nDeleting at first 10:\n");
	// display(arr, count);
	// printf("\n");
	// deleteByValue(arr, &count, 10);
	// display(arr, count);
	// printf("\n");

	// printf("\nDeleting all occurences of 420:\n");
	// display(arr, count);
	// printf("\n");
	// deleteAllOccurrences(arr, &count, 420);
	// display(arr, count);
	// printf("\n");

	// printf("\nDeleting the second smallest:\n");
	// display(arr, count);
	// printf("\n");
	// deleteSecondSmallest(arr, &count);
	// display(arr, count);
	// printf("\n");

	// printf("\nDeleting the second smallest:\n");
	// display(arr, count);
	// printf("\n");
	// deleteSecondLargest(arr, &count);
	// display(arr, count);
	// printf("\n");

	int count = 0;
	int arr[MAX_COUNT];
	int choice;

	do
	{
		printBorderLine();

		printCurrentArr(arr, count);
		printf("\n");

		printf("1. Insert an element at the beginning\n");
		printf("2. Insert an element at the end\n");
		printf("3. Insert an element at a specific position\n");
		printf("4. Insert an element after a given value\n");
		printf("5. Delete an element at a specific position\n");
		printf("6. Delete the first occurrence of a value\n");
		printf("7. Delete all occurrences of a value\n");
		printf("8. Delete the second smallest element\n");
		printf("9. Delete the second largest element\n");
		printf("10. Search for an element\n");
		printf("11.Display all elements\n");
		printf("12. Exit\n");
		printf("\n\n");

		do
		{
			printf("Choice: ");
			scanf(" %d", &choice);

			if (choice < 1 || choice > 12)
				printf("\nPlease input a valid choice. ");

		} while (choice < 1 || choice > 12);

		switch (choice)
		{
		case 1:
		{
			int val;

			printf("Input value to insert: ");
			scanf(" %d", &val);

			insertBeginning(arr, &count, val);
		}
		break;

		case 2:
		{

			int val;

			printf("Input value to insert: ");
			scanf(" %d", &val);

			insertEnd(arr, &count, val);
		}
		break;

		case 3:
		{
			int pos, val;

			printf("Enter position to insert to (1 - %d): ", count);
			scanf(" %d", &pos);

			if (pos < 1 || pos > 12)
			{
				printf("Invalid input.");
				break;
			}

			printf("Enter value to insert: ");
			scanf(" %d", val);

			insertAtPosition(arr, &count, pos, val);
		}
		break;

		case 12:
			exit(0);
			break;

		default:
			printf("%d is a good value\n", choice);
			break;
		}

	} while (1);

	return 0;
}

// printf("\nDeleting at Pos 7 (index 6): ");
//
// display(arr, count);
// printf("\n");

void printCurrentArr(int arr[], int count)
{
	printf("Current array: ");
	display(arr, count);
	printf("\n");
}

void printBorderLine()
{
	int i;
	for (i = 0; i < 50; i++)
		printf("-");

	printf("\n");
}