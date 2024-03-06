#include <iostream>
using namespace std;

int findmax(int arr[], int size)
{
	int max = arr[0];
	for(int i=0; i<size; i++)
	{
		if(arr[i] > max){
			max = arr[i];
		}
	}
	return max;
}

int main(){
	int arr[] = {1,2,3,4,5};
	int size = sizeof(arr)/sizeof(arr[0]);

	int maxnum = findmax(arr, size);
	cout << "The Max num is: " << maxnum <<endl;

	return 0;
}