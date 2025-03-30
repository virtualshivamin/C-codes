//
//  main.c
//  GrossSalary
//
//  Created by SHIVAM SINGH on 25/02/22.
//

#include <stdio.h>

int main()
{
    printf("Input basic salary : ");
    float bs;
    scanf("%f",&bs);
    float hra =0 , da = 0 ;
    if(bs<=10000)
    {
        hra = 0.2 * bs ;
        da = 0.8 * bs ;
    }
    else if(bs > 10000 && bs <= 20000)
    {
        hra = 0.25 * bs;
        da = 0.9 * bs;
    }
    else if (bs > 20000)
    {
        hra = 0.3 * bs ;
        da = 0.95 * bs ;
    }
    float gs = bs + hra + da ;
    printf("Gross Salary = %0.2f \n" , gs );
    // insert code here...
    return 0;
}
