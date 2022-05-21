#include<stdio.h>
#include<conio.h>

main()
{
  double length,breadth,radius,area_rectangle,per_rect,area_circle,circumference_circle;

  printf("enter the length");
  scanf("%lf",&length);

  printf("enter the breadth");
  scanf("%lf",&breadth);

  printf("enter the radius");
  scanf("%lf",&radius);

  area_rectangle = length * breadth ;
  per_rect = 2 * (length+breadth);
  area_circle = per_rect * radius*radius;
  circumference_circle = 2*per_rect*radius;

  printf("area of rectangle = %.2lf\n",area_rectangle);
  printf("perimeter of rectangle = %.2lf\n ",per_rect);
  printf("area of circle = %.2lf\n",area_circle);
  printf("perimeter of rectangle = %.2lf\n",circumference_circle);

  return 0;

}
