#include <iostream>
#include <string>
using namespace std;

struct {
	string name = "Wesley Blake";
	int age = 29;
} myStructure;


struct car {
	string make;
	string model;
	int year;
};


int main()
{
	cout << myStructure.name << endl;
	cout << myStructure.age << endl;

	cout << "\n";

	car yourCar;
	yourCar.make = "some brand";
	yourCar.model = "some type of car";
	yourCar.year = 2050;

	cout << "Your car is a " << yourCar.make << ", " << yourCar.model << ", from the year: " << yourCar.year << endl;


	return 0;
}
