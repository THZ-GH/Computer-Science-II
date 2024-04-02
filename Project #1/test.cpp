#include <iostream>
#include <iomanip>
using namespace std;

int main(){

int a[10];
int count;

for (count = 0; count < 100; count+=10)
    a[count] = count + 10;


for (count = 0; count < 100; count+=10)
    cout << a[count] << ", ";

}