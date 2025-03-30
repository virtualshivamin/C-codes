//
//  main.c
//  Calculator
//
//  Created by SHIVAM SINGH on 10/03/22.
//

#include <stdio.h>

int main()
{
    // insert code here...
    printf("Input two numbers \n");
    float number1 , number2 , calculation ;
    int choice ;
    scanf("%f %f" , &number1 , &number2 );
    printf("\nPress 1 for addition \nPress 2 for Subtraction \nPress 3 for Multiplication \nPress 4 for Division \n Input your Choice ");
    scanf("%d" , &choice );
    switch(choice)
    {
        case 1 : 
            calculation = number1 + number2 ;
            printf("Addition is : %f" , &calculation );
            break;
        case 2 :
            calculation = number1 - number2 ;
            printf("Subtraction is : %f" , &calculation );
            break;
        case 3 :
            calculation = number1 * number2 ;
            printf("Multiplication is : %f" , &calculation );
            break;
        case 4 :
            calculation = number1 / number2 ;
            printf("Division is : %f" , &calculation );
            break;
        default:
            printf("Invalid Input");
            break;
    }
    printf("\n");
    return 0;
}
