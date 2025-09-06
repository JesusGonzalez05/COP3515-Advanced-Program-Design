/* C Programming notes */ 
#include <stdio.h>  
//this is a preprocessor directive. tells compilier to include the 
//standard input and output library. neede to display dest on a screen.

//main function needed in order for a program to be used or ran.
int main (){

    printf("I like Pizza!\n");
    printf("Its really good!");
    //^ this function allows you to print script to the screen.
    // \n adds a new line - placed inside of ""

    // variable - a reusable container for a value. 
    //            behaves as if it were the vale it contains.  

    int age = 25;
    // int are whole numbers
    int year = 2025;

    // age will now behave as 25

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

    printf("You are %d years old" , age);
    printf("\nThe year is %d" , year);

    return 0;
    // ^ return 0; is used because the function is expected to return an integer 
    // to the OS. The number indicates a code. 0 means successfull. 
    // not needed but good practice.
}