#include<stdio.h>
int main()
{
    int n,m,rem,arm=0;
    printf("Enter a value\n");
    scanf("%d",&n);

    m=n;
    while(n!=0)
    {
        rem=n%10;
        arm=arm+rem*rem*rem;
        n=n/10;
    }
    if(arm==m)
        printf("Number is Armstrong");
    else
        printf("Number is not Armstrong");

    return 0;
}
