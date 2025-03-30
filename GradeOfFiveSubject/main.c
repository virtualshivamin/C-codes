//
//  main.c
//  GradeOfFiveSubject
//
//  Created by SHIVAM SINGH on 22/02/22.
//

#include <stdio.h>

int main()
{
    float p,c,b,m,co;
    printf("Input Marks of Physics : ");
    scanf("%f",&p);
    printf("Input Marks of Chemistry : ");
    scanf("%f",&c);
    printf("Input Marks of Biology : ");
    scanf("%f",&b);
    printf("Input Marks of Maths : ");
    scanf("%f",&m);
    printf("Input Marks of Computer : ");
    scanf("%f",&co);
    float sum = p+c+b+m+co;
    float percentage = sum / 5;
    printf("Percentage  = %f \n",percentage);
    
    if (percentage >= 90)
        printf("Grade A");
    else if (percentage >= 80)
        printf("Grade B");
    else if (percentage >= 70)
        printf("Grade C");
    else if (percentage >= 60)
        printf("Grade D");
    else if (percentage >= 40)
        printf("Grade E");
    else if (percentage < 40)
        printf("Grade F");
    // insert code here... 
    printf("\n");
    return 0;
}


