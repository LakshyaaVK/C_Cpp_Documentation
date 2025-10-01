#include<stdio.h>
int main(){
    int age;//variable declaration
    printf("Enter your age:");
    scanf("%d",&age);//scanf is used to take input from user and &age is used to store the value in age variable
    printf("Your age is %d\n",age);
    if (age<18)
    {
        printf("You are not eligible to vote");
    }
    else
    {
        printf("You are eligible to vote");
    }
    return 0;
   


}