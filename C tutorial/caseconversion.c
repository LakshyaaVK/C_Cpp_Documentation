//convert to uppercase without pre defined functions
/* #include<stdio.h>
int main(){
int i;
char name[10]="dinga";
for(i='A';i<='Z';i++)
{
    printf("%d",i);

}
printf("\n");
for(i='a';i<='z';i++)
{
    printf("%d",i);

}
printf("\n");
for(i=0;i<5;i++)
{
    printf("%c",(name[i]-32));
}

return 0;

}*/

//convert to uppercase without pre defined functions
#include<stdio.h>
int main(){
int i;
char name[10]="DINGA";
for(i='A';i<='Z';i++)
{
    printf("%d",i);

}
printf("\n");
for(i='a';i<='z';i++)
{
    printf("%d",i);

}
printf("\n");
for(i=0;i<5;i++)
{
    printf("%c",(name[i]+32));
}

return 0;

}
