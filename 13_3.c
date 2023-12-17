#include<stdio.h>
int even(int);
int main()
{
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    printf("\n%d",even(n));
    return 0;
}
int even(n)
{   int s=0,sum=1;
    if(n==0)
    return n;
   s= (2*n);
  sum= s+even(n-1);

   
    printf("\n%d",sum);
    return sum; 
}