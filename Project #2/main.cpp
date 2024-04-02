/* Evan Walpole
 This program reads a text file with a list of up to 12 price changes and displays the 
 product number, number of changes, and the highest, lowest, and average prices. 
*/
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>

using namespace std;


void openFile(ifstream &);
void readFile(ifstream &, int, double [], int &, int &);
double lowestPrice(double, double [], int);
double highestPrice(double, double [], int);
double avgPrice(double, double [], int);
void display(int, int, double, double, double);


int main(){

	const int MAX_ARRAY_SIZE = 12;
	double prices[MAX_ARRAY_SIZE];
	
	int arraySize = 0, count = 0;

	int prodNum;
	double lowest, highest, average;

	ifstream inputFile;

	openFile(inputFile);
	readFile(inputFile, MAX_ARRAY_SIZE, prices, arraySize, prodNum);
	lowest = lowestPrice(lowest, prices, arraySize);
	highest = highestPrice(highest, prices, arraySize);
	average = avgPrice(average, prices, arraySize);
	display(prodNum, arraySize, lowest, highest, average);

	inputFile.close();
	
	return 0;
}

// This function opens the file.
void openFile(ifstream & inputFile){

	inputFile.open("prices.txt");

	if(inputFile.fail()){
		cout << "There was an error opening the file.";
		exit(0);
	}
}

// This function reads the file and puts it into an array.
void readFile(ifstream & inputFile, int MAX_ARRAY_SIZE, double prices[], int & arraySize, int & prodNum){

	inputFile >> prodNum;

	
		arraySize++;
}

// This function reads through the array and calculates the lowest of the input.
double lowestPrice(double lowest, double prices[], int arraySize){

	lowest = prices[0];

	for (int count = 1; count < arraySize; count++)
	{
		if (prices[count] < lowest)
		lowest = prices[count];
	}

	return lowest;
}

// This function reads through the array and calculates the highest of the input.
double highestPrice(double highest, double prices[], int arraySize){
	
	highest = prices[0];

	for (int count = 1; count < arraySize; count++)
	{
		if (prices[count] > highest)
			highest = prices[count];
	}

	return highest;
}

// This function reads through the array and calculates the average of the input.
double avgPrice(double average, double prices[], int arraySize){
	
	double total = 0;
	average = 0;

	for (int count = 0; count < arraySize; count++)
		total += prices[count];

	average = total / arraySize;

	return average;
}

// This function displays the calculated results.
void display(int prodNum, int arraySize, double lowest, double highest, double average){

	cout << setprecision(2) << fixed;

	cout << "Product # " << prodNum << endl;
	cout << "Price Changes : " << arraySize << endl;
	cout << "Lowest Price  : " << lowest << endl;
	cout << "Highest Price : " << highest << endl;
	cout << "Average Price : " << average << endl;

}