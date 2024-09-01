#include <iostream>
#include <string>
using namespace std;

int main()
{
	int time;
	cout << "What time is it? (do not add : )\n";
	cin >> time;

	if ( 1200 >= time )
	{
		cout << "Good morning\n";
	} else if ( 1700 >= time )
	{
		cout << "Good afternoon\n";
	} else
	{
		cout << "Good evening\n";
	}


	string result = ( 1200 >= time ) ? "Good afternoon" : "Good morning";

	cout << result << endl;

	return 0;

}
