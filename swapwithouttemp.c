//AUTHOR - SATYAM RAMAWAT
#include<stdio.h>

int main()
{
	int firstnumber,secondnumber;
	printf("Enter the first number\n");
	scanf("%d",&firstnumber);
	printf("Enter the second number\n");
	scanf("%d",&secondnumber);
	firstnumber=firstnumber^secondnumber;
	secondnumber=firstnumber^secondnumber;
	firstnumber=firstnumber^secondnumber;
	printf("Now the first number is %d\n",firstnumber);
	printf("Now the second number is %d\n",secondnumber);
	return 0;
}
