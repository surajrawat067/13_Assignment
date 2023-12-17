#include<conio.h>
int digit_sum(int a);
int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
     printf("\n%d\n",digit_sum (a));
    return 0;

}
int digit_sum (a)
{
int sum=0,b,c;
    if(a==0)
        return a;
        b=a%10;
      c=digit_sum (a/10);  
        
        b=c+b;
        printf("\nb is %d\n",b);  
        
        return b;
   
}