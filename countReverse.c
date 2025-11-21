#include<stdio.h>

void digitCount(int a){
    int count = 0;
    if(a == 0){
        count = 1;
    }else{
        while(a != 0){
            a = a / 10;
            count++;
        }
    }
    printf("Digit count is %d\n",count);
}

void reverseNum(int a){
    int remainder,reverse = 0;
    while(a != 0){
        remainder = a % 10;
        reverse = reverse * 10 + remainder;
        a = a / 10;
    }
    printf("Reversed number is %d\n",reverse);
}


int main(){


    // Q7. Write a program where the user will provide an integer as input. Create a function digitCount() that:

    // - Counts the total number of digits in the given number and prints the count.
    // -digitCount() Calls another function reverseNumber() that takes the original user input, reverses it, and prints the reversed number.
    // Input : num = 12345    Output: Digit Count : 5 , Reversed Number: 54321

    int num;
    printf("Enter a number : ");
    scanf("%d",&num);


    digitCount(num);
    reverseNum(num);

    return 0;
}