//array is a collection of ordered elements of same data type
//array is a form of structured data 
//the elements in the array are arranged sequentlyally
/*
#include<stdio.h>
int main()
{    
    int b = 6;
    int a[7]={1,2,3,4,5,6,7};
    for(int i=0;i<7;i++)
    {
        printf("%i\n",a[i]);
    }

    return 0;
}
 //if a character is stored in an integer array,its ASCII value will be stored ,however adding chatracters in an integer array is not a good practice
 //format specifier %d is used to print integer values,and can only hold a single decimal value 
 //if multiple values must be accessed then a loop must be used
 //%i can also be used to print integer values
 //if no values are assigned by the user , the program by default assigns 0
  */
 /*
 #include<stdio.h>
int main()
{    
    int b = 6;
    int a[10]={1,2,3,4,5,6,7};
    for(int i=0;i<10;i++)
    {
        printf("%d\n",a[i]);
    }

    return 0;
}
  */
 //
//write a program to take n values as input from the user where n is also i/p by the user and display the values
/* #include<stdio.h>
int main(){
    int n;
    printf("enter the size of the array n :");
    scanf("%d",&n);
    int a[n];
    printf("Enter the values :");
    for(int i=0;i<n;i++)
    {

        

        scanf("%d",&a[i]);
    }
    printf("The array consists of: ");
    for(int i =0;i<n;i++)
    printf("%d",a[i]);


    
}*/
//write a program to take n values as input from the user where n is also i/p by the user and print the odd and even values separately and also display max and min values
#include <stdio.h>

int main()  {
    int n;
    printf("Enter the number of values: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d values:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Even values: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Odd values: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0)
            printf("%d ", arr[i]);
    }
    printf("\n");

    int max = arr[0], min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);

    return 0;
}
//while finding max and min values initialize the max and min values with a[0]