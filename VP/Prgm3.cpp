//Write C++ program to print the  reverse of an array.

#include<iostream>
using namespace std;

void reverse(int arr[], int size)
{
    for(int i=size-1; i>=0; --i){
        cout << arr[i] << " ";
    }
    cout << endl;
    
}

int main()
{
	int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "The array before Reverse: " << endl;
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "The array after reverse: " << endl;
    reverse(arr, size);

    return 0;
}