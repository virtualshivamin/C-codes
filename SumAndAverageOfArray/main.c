//
//  main.c
//  SumAndAverageOfArray
//
//  Created by SHIVAM SINGH on 22/02/22.
//

#include <stdio.h>

int main() {
    printf("Input the size of array ");
    int n,i,sum=0;
    float average;
    scanf("%d",&n);
    int a[n];
    for ( i=0;i<n;i++ )
    {
        printf("Input a number :");
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        sum += a[i];
    }
    average = sum / n;
    printf("Sum of Array : %d \n",sum);
    printf("Average of array : %f",average);
    // insert code here...
    printf("\n");
    return 0;
}
