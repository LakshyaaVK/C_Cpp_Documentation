/*#include<stdio.h>
void change(int mb){
     mb=34;
}
int main(){
    int mb=45;
    change(mb);
    printf("%d",mb);


}the output was 45 because the program failed to understand the mb as one 
that is why we use the use of pointers here to tell the program that
mb is the same mb using its address */
#include<stdio.h>
void change(int *mb){//Call by reference using pointers
     *mb=34;
}
int main(){
    int mb=45;
    change(&mb);
    printf("%d",mb);


}// Now prints 
/* If you don’t use pointers, the function receives a copy 
of the variable, not the original.
Any changes made inside the function affect 
only the copy, not the variable in main.*/