#include<stdio.h>
void Lcm(int a, int b, int n);
int main ()
{
    int a,b,n;
    printf("enter a number a,b\n");
    scanf("%d %d",&a,&b);
    n=a>b?b:a;
    Lcm(a,b,n);
    return 0;
}
void Lcm(int a, int b, int n)
{
    int c,d;
    if(a%n==0 && b%n==0)
  {  printf("%d",n);
        return;
   }
      Lcm(a,b,n-1);
    
}