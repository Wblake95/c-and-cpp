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

	return 0;
}
