/*
Name : Junan Nashit Tias
Student ID : 200424052

JunanTiasAs5Q1.cpp

Write a function that returns the number of digits in an integer using the a header

Step 1: Enter Integer
Step 2: Use the getsize function to count the number of digits in the integer.
Step 3: display the number of digits

Major Variable

int n
int c

Progress limitation: N/A
*/
#include <iostream>

using namespace std;
int GetSize(int);

int main() {
	int n, c;
	cout << "Please Enter an Integer: " << endl;
	cin >> n;

	c = GetSize(n);
	cout << "The number of digits in the integer: " << c << endl;

	return 0;
}

int GetSize(int a)
{
	int k = 0;
	while (a > 0)
	{
		a = a / 10;
		k++;
	}
	return k;
}


