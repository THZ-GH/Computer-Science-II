/*
Evan Walpole

This program reads a file into two parallel arrays, one for zip codes
and one for town names. It then sorts the arrays, displays them, and
asks the user to select a zip code. If the user enters a valid ZIP
Code, the corresponding town name will be displayed. Otherwise, an
error is shown.
*/

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

void openFile(ifstream &);
void readFile(ifstream &, int, string [], string [], int &);
void displayZipTown(const string [], const string [], int);
void sortArray(string [], string [], int);
void swap(string &, string &);
int searchArray(const string [], int, string);


int main(){

	const int MAX_ARRAY_SIZE = 50;

	string zipCode[MAX_ARRAY_SIZE], townName[MAX_ARRAY_SIZE];
	string a, b;

	int arraySize = 0;

	ifstream inputFile;

	openFile(inputFile);
	readFile(inputFile, MAX_ARRAY_SIZE, zipCode, townName, arraySize);
	sortArray(zipCode, townName, arraySize);
	displayZipTown(zipCode, townName, arraySize);

	string userInput;
	cout << "Enter a ZIP Code." << endl;
	cin >> userInput;

	int value = searchArray(zipCode, arraySize, userInput);

	if (value == -1)
	cout << "The ZIP Code you searched for could not be found." << endl;
	else
	cout << "The town name is " << townName[value] << "." << endl;

}

// This function opens the file.
void openFile(ifstream & inputFile){

	inputFile.open("zipInfo.txt");

	if(inputFile.fail()){
		cout << "There was an error opening the file.";
		exit(0);
	}
}

// This function reads the file into the two arrays.
void readFile(ifstream & inputFile, int MAX_ARRAY_SIZE, string zipCode[], string townName[], int & arraySize){

	int count = 0;

	while (count < MAX_ARRAY_SIZE && inputFile >> zipCode[count]){

		inputFile.get();
		getline(inputFile, townName[count]);
		count++;
		arraySize = count;
	}
}

// This function displays the contents of each array.
void displayZipTown(const string zipCode[], const string townName[], int arraySize)
{
	cout << "Zip Code      Town Name\n\n";

	for (int count = 0; count < arraySize; count++)
	{
		cout << zipCode[count] << "         " << townName[count] << endl;
	}
}

// This function sorts the arrays by ZIP Code.
void sortArray(string zipCode[], string townName[], int arraySize)
{
	//bubble sort for one array
	int maxElement, count;

	for (maxElement = arraySize - 1; maxElement > 0; maxElement--)
	{
		for (count = 0; count < maxElement; count++)
		{
			if (zipCode[count] > zipCode[count + 1])
			{
				swap(zipCode[count], zipCode[count + 1]);
				swap(townName[count],townName[count + 1]);
			}
		}
	}
}

// This function swaps the two values as needed by the sortArray function.
void swap(string & a, string & b)
{
	string temp = a;
	a = b;
	b = temp;
}

// This function asks the user to enter a value, then returns it if valid.
int searchArray(const string zipCode[], int arraySize, string userInput)
{
	int first = 0,                     // First array element
		last = arraySize - 1,               // Last array element
		middle,                        // Midpoint of search
		position = -1;                 // Position of search value
	bool found = false;                 // Flag

	while (!found && first <= last)
	{
		middle = (first + last) / 2;    // Calculate midpoint
		if (zipCode[middle] == userInput)     // If value is found at mid
		{
			found = true;
			position = middle;
		}
		else if (zipCode[middle] > userInput) // If value is in lower half
			last = middle - 1;
		else
			first = middle + 1;         // If value is in upper half
	}
	return position;

}
