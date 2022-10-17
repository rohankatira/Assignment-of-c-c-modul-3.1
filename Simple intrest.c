#include<stdio.h>
int main()
{
	//printing the principle, time and rate.
	float Principal,Time,Rate,SI;
	printf("Enter the Pricipal (Amount):-");
	scanf("%f", &Principal);
	printf("Enter Time:-");
	scanf("%f", &Time);
	printf("Enter the Rate:-");
	scanf("%f", &Rate);
	//calculate the rate of intrest.
	 SI = (Principal * Time * Rate) / 100;
	//printing  The value of SI
	printf("Simple Intrest=%f" , SI);
}
