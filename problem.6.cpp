#include<stdio.h>
#include<conio.h>
int main()
{
	int number,a,n;
	int sum=0;

	printf("Enter the 5 digit number(less than 32767): ");
	scanf("%d",&number);

	a=number%10;
	n=number/10;
	sum = sum + a;
	a=n%10;
	n=a/10;
	sum = sum + a;
	a=n%10;
	n=a/10;
	sum = sum + a;
	a=n%10;
	n=a/10;
	sum = sum + a;
	a=n%10;
	n=a/10;
	sum = sum + a;

	printf("Sum:%d",sum);

	return 0;
}
