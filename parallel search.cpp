// This program uses the bubble sort algorithm to sort an array and binary search to search array
// of integers in ascending order.
#include <iostream>
#include <string>
using namespace std;

// Function prototypes
void sortArray(int array[], string words[], int size);
void showArray(const int array[], const string words[], int size);
int binarySearch(const int array[], int size, int value);

int main()
{
	const int SIZE = 6;

	// Array of unsorted values
	int values[SIZE] = { 7, 2, 3, 8, 9, 1 };
	string words[SIZE] = { "seven", "two", "three", "eight", "nine", "one" };
	int sindex;
	int searchValue;

	// Display the values
	cout << "The unsorted values are:\n";
	showArray(values, words, SIZE);

	// Sort the values
	sortArray(values, words, SIZE);

	// Display them again
	cout << "The sorted values are:\n";
	showArray(values, words, SIZE);

	searchValue = 3;
	sindex = binarySearch(values, SIZE, searchValue);
	if (sindex == -1)
		cout << "Your value was not found" << endl;
	else
		cout << "Your search value is " << words[sindex] << endl;

	system("pause");
	return 0;
}

/************************************************************
*                        sortArray                         *
* This function performs an ascending-order bubble sort on *
* array. The parameter size holds the number of elements   *
* in the array.                                            *
************************************************************/
void sortArray(int array[], string words[], int size)
{
	bool swapped;

	do
	{
		swapped = false;
		for (int count = 0; count < (size - 1); count++)
		{
			if (array[count] > array[count + 1])
			{
				swap(array[count], array[count + 1]);
				swap(words[count], words[count + 1]);
				swapped = true;
			}
		}
	} while (swapped);  // Loop again if a swap occurred on this pass.
}

/*************************************************************
*                        showArray                          *
* This function displays the contents of array. The         *
* parameter size holds the number of elements in the array. *
*************************************************************/
void showArray(const int array[], const string words[], int size)
{
	for (int count = 0; count < size; count++)
		cout << array[count] << " " << words[count] << " ";
	cout << endl;
}

/*****************************************************************
*                         binarySearch                          *
* This function performs a binary search on an integer array    *
* with size elements whose values are stored in ascending       *
* order. The array is searched for the number stored in the     *
* value parameter. If the number is found, its array subscript  *
* is returned. Otherwise, -1 is returned.                       *
*****************************************************************/
int binarySearch(const int array[], int size, int value)
{
	int  first = 0,                     // First array element
		last = size - 1,               // Last array element
		middle,                        // Midpoint of search
		position = -1;                 // Position of search value
	bool found = false;                 // Flag

	while (!found && first <= last)
	{
		middle = (first + last) / 2;    // Calculate midpoint
		if (array[middle] == value)     // If value is found at mid
		{
			found = true;
			position = middle;
		}
		else if (array[middle] > value) // If value is in lower half
			last = middle - 1;
		else
			first = middle + 1;         // If value is in upper half
	}
	return position;
}