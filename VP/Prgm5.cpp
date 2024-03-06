//Write C++ program to find length of string using pointers.

// #include <iostream>
// using namespace std;

// int main()
// {
//     char *str;
//     cout << "Enter the string: " << endl;
//     cin >> str;

//     int count = 0;
//     while(*str != '\0')
//     {
//         count++;
//         str++;
//     }

//     cout << "The length of the string is: " << count << endl;

//     return 0;
// }

#include <iostream>

int stringLength(const char* str) {
	int length = 0;
	while (*str != '\0') {
    	length++;
    	str++;
	}
	return length;
}

int main() {
	const char* str = "Hello, World!";
	int length = stringLength(str);
	std::cout << "Length of the string \"" << str << "\" is: " << length << std::endl;
	return 0;
}