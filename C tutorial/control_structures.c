// 1-sequence statement
// 2-selection statement: simple if, if else, switch, nested if
// 3-iteration statement: for, while, do while
//switch statement and program to count the digits of a number
/*#include <stdio.h>

int main() {
    int day;
    printf("Enter a number (1-7) for the day of the week: ");
    scanf("%d", &day);

    switch(day) {
        case 1:
            printf("Sunday\n");
            break;
        case 2:
            printf("Monday\n");
            break;
        case 3:
            printf("Tuesday\n");
            break;
        case 4:
            printf("Wednesday\n");
            break;
        case 5:
            printf("Thursday\n");
            break;
        case 6:
            printf("Friday\n");
            break;
        case 7:
            printf("Saturday\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 7.\n");
    }

    return 0;
}
program to count the digits of a number*/
#include <stdio.h>

// Program to count the digits of a number

int main() {
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    
    if (num == 0) {
        count = 1;
    } else {
        // Make number positive if negative
        if (num < 0) num = -num;
        while (num != 0) {
            num /= 10;
            count++;
        }
    }

    printf("Number of digits: %d\n", count);
    return 0;
}
/* s/* sum of digits of a number 
#include <stdio.h>

int main()   // <- you missed a space in your code ("intmain" → should be "int main")
{
    int num, sum = 0, digit;

    scanf("%d", &num);   // input a number from the user

    while (num != 0)     // loop until the number becomes 0
    {
        digit = num % 10;     // take the last digit of num
        sum = sum + digit;    // add that digit to sum
        num = num / 10;       // remove the last digit
    }

    printf("Sum of digits = %d", sum);

    return 0;
}
*/