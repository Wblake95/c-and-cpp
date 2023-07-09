#include <stdio.h> // This is the standard input and output module(?)

int main(){
	char firstName[10], lastName[10]; // This is creater an array of 10 characters in the variable name.
	printf("Hello, World!\n");
	printf("What is your name? ");
	scanf("%s %s", firstName, lastName);
	printf("\nHello %s %s, I hope you are having a great day!", firstName, lastName);
	printf("\n");
	return 0;
}
