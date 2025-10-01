//factorial--recursion
#include<stdio.h>
int fact(int x)
{
    if(x==0 || x==1)
    return 1;
    return x*fact(x-1);
    return x*fact(x-1);
}
int main()
{
    int num;
    scanf("%d",&num);
    printf("%d",fact(num));
    return 0;
    
}
