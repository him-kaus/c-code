#include<stdio.h>
int main()
{
	int n,i,fact;
	printf("Enter a no:");
	scanf("%d",&n);
	if(n!=0){
	if (n==1){
        printf("\none is niether prime nor composite");
    	}
	else{
	for(i=2;i<n-1;i++){
	if(n%i==0)
	{
	printf("No. is not prime.. ");
	}
	else
	{
		printf("No is prime..");
	}
	}
	}
	}
	 return 0;
}
