#include<conio.h>
int odd(int n);
int i=0;
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
   printf("%d",odd (n));
     return 0;

} 
int odd (n)
{ 
    if(n>0)
    odd (n/10);
   return  i++;
}    