#include <stdio.h>
int main(){
	float number,i,product;
	do {
		printf("Enter a positive number: ");
		scanf("%f", &number);
	}
	while(number<=0);
	{
		for(i=0;i<=number;i++){
			product=i*number;
			printf("%.0f * %.0f = %.0f\n", i,number,product);
		}
	}
}
