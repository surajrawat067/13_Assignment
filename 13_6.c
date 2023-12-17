#include<stdio.h>
int fact(int);
int main ()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    printf("%d",fact(a));
    return 0;
}
int fact(int a)
{
    int b,c,d;
    if(a==1)
        return a;
    b=a*fact(a-1);
      return b;



}