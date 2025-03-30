//
//  main.c
//  CanRideBikeScooty
//
//  Created by SHIVAM SINGH on 14/10/22.
//

#include <stdio.h>

int main() {
    
    int age,PhysicalHealth;
    printf("Enter your age : ");
    scanf("%d",&age);
    printf("Enter 0 if your physica health is not good & 1 if your physical health is ok : ");
    scanf("%d",&PhysicalHealth);
    
    if(PhysicalHealth==0 || PhysicalHealth == 1)
    {
        if (age >= 18)
        {
            if(PhysicalHealth==0)
            {
                printf("Can ride SCOOTY");
            }
            else
            {
                printf("Can ride BIKE");
            }
        }
        else
        {
            printf("Not Eligible");
        }
    }
    else
    {
        printf("INVALID INPUT");
    }
    
    return 0;
}
