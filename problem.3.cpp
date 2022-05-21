#include<stdio.h>
#include<conio.h>

main()
{
	float fr,cent;
	
	
	printf("Enter The temp (F):");
	scanf("%f",&fr);
	
	
	
cent = 5.0/9.0*(fr-32);
	
	
	printf("The temp in cent: %.2f",cent);
	
	
	getch();

}
