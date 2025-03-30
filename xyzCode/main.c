//
//  main.c
//  xyzCode
//
//  Created by SHIVAM SINGH on 11/03/22.
//

#include <stdio.h>

int main()
{
        while(true)
        {
            int i,j;
            for(j=39;j>=-39;j--)
            {
                for(i=-35;i<=35;i++)
                {
                    if(((abs(j-25)<14&&abs(i)<6)||(abs(j-25)==13&&abs(i)<10))||(pow(abs(i)-9,2)+2*pow(j,2)<=100)||(9*abs(i)-14*j-210<=0&&j<=-3)||(pow(i,2)+2*pow(j+30,2)<=225&&pow(i,2)+2*pow(j+30,2)>=64&&j<-29)||(abs(abs(i)-11.5)<3.5&&abs(j+23)<7))
                    {
                        printf("*");
                        
                    }
                    else
                    {
                        printf(" ");
                    }
                    
                }
                printf("\n");
                for(int i = 0; i<9999999;i++)
                {
                    i-=1;
                    i+=1;
                }
            }
            printf("\n\n");
        }
    
    // insert code here...
    return 0;
}

