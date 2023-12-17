#include<conio.h>
int fib(int a);
int main()
{
    int a,b;
    printf("enter a number");
    scanf("%d",&a);
    for(b=0;b<a;b++)
     printf("\n%d\n",fib (b));
    return 0;

}
int fib (a)
{
int sum=0,b,c;
    if(a==1 || a==0)
        return a;
     c=  fib(a-1)+fib(a-2);
         return c  ;
}