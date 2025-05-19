01.)
if..... else

if (condition) {
    // Body of if statement
}
else {
    // Body of else statement
}

// Example_01: Enter your age and verify your eligible or not for election voting using if else

#include <stdio.h>

int main() {

    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age <= 0) {
        printf("Invalid input!");
    }
    else if (age < 18) {
        printf("Not eligible for voting.");
    }
    else {
        printf("You are eligible for voting");
    }

    return 0;
}
_______________________________________________________________

02.)
switch operator

swich (variable/Expression){
    case 1:
        // Body of case 1
        break;

    case 2:
        // Body of case 2
        break;

    default:
        // Body of default
        break;
}

// Example_1:
// Enter the value between 1 to 7 and create a programe for the following output:
// Enter the number between 1 to 7: 1
// Today is sunday!

#include <stdio.h>

int main() {

    int num;
    printf("Enter the number between 1 to 7: ");
    scanf("%i", &num);

    switch (num)
    {
    case 1:
        printf("Today is sunday!\n");
        break;
    
    case 2:
        printf("Today is monday!\n");
        break;

    case 3:
        printf("Today is tuesday!\n");
        break;

    case 4:
        printf("Today is wednesday!\n");
        break;

    case 5:
        printf("Today is thursday!\n");
        break;

    case 6:
        printf("Today is friday!\n");
        break;

    case 7:
        printf("Today is saturday!\n");
        break;
    
    default:
        printf("Invalid input!\n");
        break;
    }

    return 0;
}

// Example_2:
// Write a code for small astrology based on your life path number for that get date of birth from the user 
// then calculate life path number.(Use switch case)
//      Example :-
//          Calculation for life path number: 
//              a = date % 10
//              b = date / 10
//              c = a + b

//          if life path number :
//              1. Lucky
//              2. Carefully do your work
//              3. Stronger
//              4. Happy
//              5. Can  get help
//              6. Doubt
//              7. Sad
//              8. Like
//              9. Courage

#include <stdio.h>

int main() {

    int date;
    printf("Enter the date: ");
    scanf("%i", &date);

    if (date < 1 || date > 31) {
        printf("Invalid input....!\n");
        return 0;
    }

    int a = date % 10;
    int b = date / 10;
    int c = a + b;

    if (c > 9) {
        a = c % 10;
        b = c / 10;
        c = a + b;
    }

    switch (c) {
        case 1:
            printf("Lucky\n");
            break;

        case 2:
            printf("Carefuly do your work\n");
            break;
        
        case 3:
            printf("Storger\n");
            break;
        
        case 4:
            printf("Happy\n");
            break;
        
        case 5:
            printf("Can get help\n");
            break;
        
        case 6:
            printf("Doubt\n");
            break;
        
        case 7:
            printf("Sad\n");
            break;
        
        case 8:
            printf("Like\n");
            break;
        
        case 9:
            printf("Courage\n");
            break;
    }

    return 0;
}

// Example 3:
// Give list of numbers then calculate the summation and multiplication using for loop.
//  Example:-
//     1 2 3 4 5                             
// 	summation = 15                         
//     multiplication =120

#include <stdio.h>

int main() {

    int num[5] = {1, 2, 3, 4, 5};
    int sum = 0, mul = 1;

    for (int a = 0; a < 5; a++) {
        sum += num[a];
        mul *= num[a];
    }

    printf("Summation = %i \nMultiplication = %i\n", sum, mul);

    return 0;
}

// Example_4:
// Print the integers from 1 to 10 using while loop.

#include <stdio.h>

int main() {

    int num = 1;

    printf("Numbers from 1 to 10:\n");
    while (num <= 10)
    {
        printf("%i  ", num);
        num++;
    }

    printf("\n");
    

    return 0;
}

// Example_5:
// Write a C program to generate and print the Fibonacci series upto a specified number of terms. The program should take 
// the number pf terms as input from the user and the display the coresponding Fibonacci sequence.

#include <stdio.h>

int main() {

    int term, num1 = 0, num2 = 1, next;
    printf("Enter the number of terms: ");
    scanf("%i", &term);

    printf("Fibonacci series upto %i terms: \n", term);

    for (int a = 1; a <= term; a++) {
        printf("%i  ", num1);
        next = num1 + num2;
        num1 = num2;
        num2 = next;
    }
    
    printf("\n");

    return 0;
}


// Example_6:
// Write a C program to calculate the factorial of a given non-negative number integer

#include <stdio.h>

int main() {

    int num;
    printf("Enter a number: ");
    scanf("%i", &num);

    while (num < 0) {
        printf("The number you entered is negative.\n");
        printf("Enter a positive number: ");
        scanf("%i", &num);
    }

    int fact = 1;
    for (int a = 1; a <= num; a++) {
        fact *= a;
    }

    printf("Factorial of %i: %i", num, fact);

    return 0;
}

// Example_7:
// Write a C program that:
// Accepts two strings as input from the user 
// Concatenates the two strings. Displays the concatenated String.

#include <stdio.h>
#include <string.h>

int main() {

    char str1[100], str2[100];
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);
    
    strcat(str1, str2);

    printf("Concatenated String: %s\n", str1);

    return 0;
}

// Example_8:
// Write a C program that takes a binary number (as an integer) as input and converts it to its decimal equivalent.

#include <stdio.h>

int main() {

    long long bin;
    int dec = 0, base = 1, rem, val;

    printf("Enter your binary number: ");
    scanf("%lli", &bin);

    while (bin > 0) {
        rem = bin % 10;
        val = rem * base;
        dec += val;
        bin /= 10;
        base *= 2;
    }

    printf("Decimal value of %lli is: %i \n", bin, dec);

    return 0;
}

// Example_9:
// Write a C program that:
// Accepts an array of integers from the user.
// Find and display the maximum and minimum values in the array

#include <stdio.h>

int main() {

    int num[5];
    int length = sizeof(num) / 4;
    printf("Enter %i numbers to find the maximum and minimum-->\n", length);
    for (int a = 0; a < length; a++) {
        int temp = a + 1;
        printf("Enter number %i: ", temp);
        scanf("%i", &num[a]);
    }

    int min = num[0], max = num[0];
    for (int a = 1; a < length; a++) {
        if (min > num[a]) {
            min = num[a];
        }
        if (max < num[a]) {
            max = num[a];
        }
    }

    printf("Minimum: %i \n", min);
    printf("Maximum: %i \n", max);

    return 0;
}

// Example_10:
// C program to generate Pascal's Triangle.

#include <stdio.h>

int factorial(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}

int combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) {
        // Print leading spaces
        for (int space = 0; space < rows - i - 1; space++) {
            printf("  ");
        }

        for (int j = 0; j <= i; j++){
            printf("%4d", combination(i, j));
        }

        printf("\n");
    }

    return 0;
}
