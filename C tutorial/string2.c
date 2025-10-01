
//write a program to make alternative upper case of teh given string
#include<stdio.h>
int main(){
    char word[]="bengaluru";
    int i;
    for(i=0;word[i]!=0;i++)
    {
        if(i%2==0)
        {
            printf("%c",word[i]-32);    
        }
        else
        {
            printf("%c",word[i]);
        }
}
}