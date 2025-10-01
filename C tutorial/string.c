/*string is a group of characters
"double quotes" are used to represent string literals
'single quotes' are used to represent character literals
string is represented as an array of characters
string is terminated by a null character '\0' which indicates the end of the string
string is widely used datatypes in all types of programming languages or software development
%s is the format specifier used to print string values "whole string"
%c is the format specifier used to print character values 'each character of the string'
FUNDAMENTAL OPERATIONS ON STRING
Converts lower case to upper case and vice versa
Concatenation of two strings
Comparison of two strings
Finding length of the string
There is no separate library for string in c language but we use char array to represent string
There is a library called string.h which contains functions to perform operations on strings
*/
#include<stdio.h>
int main()
{
    int i;
    char name[10]="dinga";
    char name1[10]="ding!";
    char name2[]={'m','a','n','g','a'};
    printf("hi all\n");
    printf("%s",name);
    printf(" name is %s \n",name1);
    printf("name is %s ",name2);
    for(i=0;i<10;i++)
    {
        printf("%c",name2[i]);
    }
    return 0;


}
