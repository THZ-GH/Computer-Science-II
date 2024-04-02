// Evan Walpole
// This program 
#include <iostream>
#include <iomanip>
using namespace std;

void getTemps(int &, int &, int &, int &);
void calculateTotalAve(int, int, int, int, int &, double &);
int calculateLowTemp(int, int, int, int, int);
void display(int, int, int, int, int, double, int);

int main()
{
	int temp1, temp2, temp3, temp4, totalTemp, lowTemp;
	double averageTemp;

	getTemps(temp1, temp2, temp3, temp4);
	calculateTotalAve(temp1, temp2, temp3, temp4, totalTemp, averageTemp);
	lowTemp = calculateLowTemp(temp1, temp2, temp3, temp4, lowTemp);
	display(temp1, temp2, temp3, temp4, totalTemp, averageTemp, lowTemp);

	return 0;
}

void getTemps(int & temp1, int & temp2, int & temp3, int & temp4){

	cout << "Enter the first temperature  : ";
	cin >> temp1;
	cout << "Enter the second temperature : ";
	cin >> temp2;
	cout << "Enter the third temperature : ";
	cin >> temp3;
	cout << "Enter the fourth temperature : ";
	cin >> temp4;
	
}

void calculateTotalAve(int temp1, int temp2, int temp3, int temp4, int & totalTemp, double & averageTemp){

	totalTemp = temp1 + temp2 + temp3 + temp4;
	averageTemp = totalTemp / 4.0;

}

int calculateLowTemp(int temp1, int temp2, int temp3, int temp4, int lowTemp){

	if (temp1 <= temp2  && temp1 <= temp3 && temp1 <= temp4)
		lowTemp = temp1;
	else if (temp2 <= temp1  && temp2 <= temp3 && temp2 <= temp4)
		lowTemp = temp2;
	else if (temp3 <= temp1  && temp3 <= temp2 && temp3 <= temp4)
		lowTemp = temp3;
	else
		lowTemp = temp4;

	return lowTemp;

}

void display(int temp1, int temp2, int temp3, int temp4, int totalTemp, double averageTemp, int lowTemp){
	cout << fixed << setprecision(1);
	cout << endl << "Temperatures:" << endl;
	cout << temp1 << endl << temp2 << endl << temp3 << endl << temp4 << endl;
	cout << "Temperature total   : " << totalTemp << endl
	     << "Temperature average : " << averageTemp << endl
	     << "Lowest temperature  : " << lowTemp << endl;
}

