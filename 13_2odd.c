#include<stdio.h>
int odd(int);
int main()
{
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    printf("\n%d",odd(n));
    return 0;
}
int odd(n)
{   int s=0,sum=1;
    if(n==0)
    return n;
   s= (2*n)-1;
  sum= s+odd(n-1);

   
    printf("\n%d",sum);
    return sum; 
}