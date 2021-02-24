//Code by Mark Daniel G. Dacer
//Refer to the slides for more info
/*This // symbol denotes comments, compiler ignores them and you can write anything you want */

//Preproccessor //header file
#include        <stdio.h> //stdio.h header file contains functions like printf,scanf,getchar and etc.


int main() { //start of the main function

    //variable where you store your data and inputs
    /*
    NAME        SYNTAX      FORMAT        SAMPLE
    character   char          %c       char letters = 'Z'
    interger    int           %d       int num1 = 2021;
    float       float         %f       float num1 = 3.14;
    double      double        %lf      double num1 = 1235.3335
    */
    //note variables dont start with number and symbols
    //declared three integer variables
    int num1;
    int num2;
    int sum;
    
    //printf is the standard way to display output
    printf("\tHello");// \t escape sequence creates horizontal space
    printf("\nWelcometo this sample program");// \n escape sequence creates new line after it
    
    printf("\n\nInput Any Number for the 1st adden: ");//prints out instruction for the user
    
    //scanf functions reads the user inputs and store them to a variable
             //don't forget to put ampersand
    scanf("%d", &num1); //we use %d since the variable used int data typle
    
     printf("Input Any Number for the 2nd adden: ");
     scanf("%d", &num2);
     
     //basic math symbols like ÷, x, -, +, are converted to /, *, -, + 
     //the math operations in c programming follows PEMDAS
    
     sum = num1 + num2;// the value of num1 plus num2 is assigned to variable sum
     
     printf("%d PLUS %d IS EQUAL TO %d\n\n", num1, num2, sum); //prints the variable by order
     
     /*logical operators
     < less than
     > greater than
     == equal to
     <= less than or equal
     >= greater than or equal
     != not equal
     */
     //conditional Statement checks whether a condition is met
     //if the condition is true runs the code inside if not, it will be skipped
     if(sum < 100)//checks if the sum variable is less than 100
     {
         printf("TRUE! %d IS LESS THAN 100",sum);
     }
     // else if is used if you have multiple condition that can be true
     else if(sum == 100) //checks if the sum is equals to 100
     {
         printf("TRUE! %d IS EQUAL TO 100",sum);
     }
    // if all the rest of the if statements returns false the code in the else will be executed
    else 
    {
        printf("FALSE! %d IS NOT LESS THAN 100",sum);
    }
    
    return 0; //returns 0 to the OS tells it the operation is success and closes the program
}