//to find factorial using function
#include <stdio.h>
 long int fact(int x){
   long int f=1;
    for( int i=1;i<=x;i++)
    f=f*i;
    return f;
    

}

int main()
{
 int num;
 printf("Enter a number: ");
 
 scanf("%d",&num);
 printf("Factorial of %d is %ld\n", num, fact(num)); 
    
 return 0;
}
