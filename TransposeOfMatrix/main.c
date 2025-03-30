//
//  main.c
//  TransposeOfMatrix
//
//  Created by SHIVAM SINGH on 25/02/22.
//

#include <stdio.h>

int main()
{
    int arr[3][3];
    printf("Input array Values :");
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]); 
        }
    }
    printf("Input Matrix : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("Transpose :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    // insert code here...
    printf("\n");
    return 0;
}
