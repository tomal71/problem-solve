#include<stdio.h>
#include<conio.h>

main()
{
	float m1, m2, m3, m4, m5, aggr , per;
	
	
	printf("Enter 5 marks in 5 subject: ");
	scanf("%f %f %f %f %f",&m1 ,&m2 ,&m3 ,&m4 ,&m5);
	
	
	aggr = m1 + m2 + m3 + m4 + m5;
	per = aggr/5;
	
	
	
	printf("Aggregate Marks: %.2f\n",aggr);
	printf("Percentage Marks: %.2f\n",per);
	
	
	getch();

}
