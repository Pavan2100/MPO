//Write a C++ program tofind out the sum of digits of a number.

#include <iostream>
using namespace std;

int sod(int num)
{
	int n, sum = 0;
	while(num != 0){
		n = num%10;
		sum = sum + n;
		num = num/10;
	}
	return sum;
}

int main(){
	int num;
	cout << "Enter the number: " << endl;
	cin >> num;

	int sum = sod(num);
	cout << "The sum of the digits is: " << sum << endl;

	return 0;
}