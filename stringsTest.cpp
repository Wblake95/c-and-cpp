#include <iostream>
#include <string>
using namespace std;

int main()
{
	string test = "Hellow world! This is a library for strings";
	cout << test << endl;

	string otherTest = "hello";
	cout << test << endl;
	otherTest = "Will this give an error like c would?";
	cout << otherTest << endl;

	return 0;
}

