#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;

	cout << "What is your name? ";
	cin >> name;
	cout << "Did quotes catch everything? " << name << endl;

	cout << "One more time (will getline catch this?): ";
	getline (cin, name);
	cout << "Your name is: " << name << endl;
	/* output
	 * What is your name? Wesley Blake
	 * Did quotes catch everything? Wesley
	 * One more time (will getline catch this?): Your name is:  Blake
	*/
	// I didn't expect that behavior. It didn't prompt me to enter anything, it just took Blake.

	return 0;
}
