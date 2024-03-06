// /Write a C++ code to swap values of two variables using pointers.

#include<iostream>
using namespace std;

void reverse(int *p1, int *p2){
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main(){
    int num1, num2;
    cout << "Enter number 1: " << endl;
    cin >> num1;
    cout << "Enter number 2: " << endl;
    cin >> num2;

    cout << "The numbers before swapping: " << endl;
    cout << "num1 = " << num1 << " " << "num2 = " << num2 << endl;

    int *p1 = &num1;
    int *p2 = &num2;
    
    reverse(p1, p2);

    cout << "The numbers after swapping: " << endl;
    cout << "num1 = " << num1 << " " << "num2 = " << num2 << endl;
}