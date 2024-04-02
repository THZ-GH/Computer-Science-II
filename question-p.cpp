#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main(){

	vector<int> vNumbers(0);

	vNumbers[0] = 1;
	vNumbers[1] = 2;
	vNumbers[2] = 3;
	vNumbers[3] = 4;
	vNumbers[4] = 5;

	for (int val : vNumbers)
		cout << val << endl;

}