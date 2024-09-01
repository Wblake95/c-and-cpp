#include <iostream>
using namespace std;

int main()
{
	int i = 0;
	while ( 5 > i ) {
		cout << i << endl;
		i++;
	}

	i = 0;
	do {
		cout << i << endl;
		i++;
	} while ( 5 > i );

	for ( i = 0; 5 > i; i++ ) {
		cout << i << endl;
	}


	int myNums[5] = {0,1,2,3,4};
	for ( int i : myNums ) {
		cout << i << endl;
	}

	return 0;
}
