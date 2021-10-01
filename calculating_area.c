#include<stdio.h>
int main()
{
	int r,a,bs,ht;
	float circle,squar,triangle;
	
	printf("\n enter a value");
	scanf("%d",&r);
	circle=3.14*r*r;
	printf("area of circle=%.2f\n",circle);
	
	printf("\n enter a value");
	scanf("%d",&a);
	squar=a*a;
	printf("area of squar=%.2f\n",squar);
	
	printf("\n enter two values");
	scanf("%d %d",&bs,&ht);
	triangle=0.5*bs*ht;
	printf("area of triangle=%.2f",triangle);
	
	return 0;
}
