#include<stdio.h>
int square(int);
int main ()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    printf("\n%d",square(a));

}
int square(a)
{
    int n=0,s,sum=0;
    if(a==0)
        return a;
    sum=square(a-1);
    n=a*a+sum;
     return n;



}