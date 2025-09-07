/* C Programming notes */ 
#include <stdio.h>  
//this is a preprocessor directive. tells compilier to include the 
//standard input and output library. neede to display dest on a screen.

#include <stdbool.h>
// this is a header file so that we can utilize boolean values 

//main function needed in order for a program to be used or ran.
int main (){

    printf("I like Pizza!\n");
    printf("Its really good!");
    //^ this function allows you to print script to the screen.
    // \n adds a new line - placed inside of ""

//////////////
    // variable - a reusable container for a value. 
    //            behaves as if it were the vale it contains.  

    // int - whole numbers (4 bytes)
    // float - single-precision decimal numbers (4 bytes)
    // double - double-precision decimal numbers (8 bytes)
    // char - single character (1 byte)
    // char[] - array of characters (size varies)
    // bool - true or false (1 byte and requires <stdbool.h>)

    int age = 25;
    // int are whole numbers
    int year = 2025;

    // age will now behave as 25

    printf("You are %d years old" , age);
    printf("\nThe year is %d" , year);

    float gpa = 2.5;
    float price = 19.99; 
    //^ used for decimal values 
    printf("\nyour gpa is %f\n", gpa);
    //^ then formatting a float use %f 
    //^ when working with floating point numbers C will print out 6 places
    // the decimal so 2.500000 will print in this case. you can alter the amount of 
    //deciaml places being shown by placing a number in front of the formatter like 
    // %.1f
    printf("The price is %.2f\n", price);
    //^ this would be the formatting for displaying a flot with two decimal values.

    double pi = 3.14159265358979;
    // if you need more precision you can utilize a double 
    printf("The value of pi is %.15lf\n", pi);
    // %lf will be the formatter for doubles (lf - long float)
    // the default behavior of c will display this as only 6 characters after
    // the decimal you can use precision in order to calculate the rest of the
    // characters (%.15lf in this case)

    char grade = 'A';
    char symbol = '!';
    // when using char you need to utlize sigle ''
    printf("Your grade is %c\n", grade);
    printf("Your favorite symbol is %c\n", symbol);
    // formatting for character requires the %c (c for character)

    char name[] = "Jesus Gonzalez";
    char food[] = "Pizza";
    char email[] = "jesusgonzalez0516@gmail.com";
    // in C language in order to store a string you need to utilize an array
    // for the characters as shown above. 
    // you can store more than one char but they have to be in "" 

    printf("Hello %s\n", name);
    printf("My favorite food is %s\n", food);
    printf("Your email. is %s\n", email);
    // formatted using the %s (s for string)

    bool isOnline = true;
    // true = 1, false = 0
    // boolean are good for if statements 
    printf("%d\n", isOnline);

    if(isOnline){
        printf("You are online\n");
    } else {
        printf("You are offline\n");
    };

//////////////





    return 0;
    // ^ return 0; is used because the function is expected to return an integer 
    // to the OS. The number indicates a code. 0 means successfull. 
    // not needed but good practice.
}