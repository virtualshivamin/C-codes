//
//  main.c
//  IdentityMatrix
//
//  Created by SHIVAM SINGH on 25/02/22.
//

#include <stdio.h>

int main() {
    int arr[3][3];
    printf("Input array Values :");
    int i,j,t=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);  
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if (i==j)
            {
                if (arr[i][j] != 1)
                    t=1;
            }
            else if (arr[i][j] != 0)
                t=1;
        }
    }
    if (t==0) {
        printf("Identity Matrix \n");
    }
    else
    {
        printf("Not identity matrix \n");
    }
    // insert code here...
    return 0;
}
