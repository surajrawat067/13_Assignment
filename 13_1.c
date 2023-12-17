#include<conio.h>
int even(int n);
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
     printf("%d\n",even (n));
    return 0;

}
int even (n)
{
int sum=0;
    if(n==0)
        return n;
   sum=n+even (n-1);
return sum;
   

}