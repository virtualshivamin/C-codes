//
//  main.c
//  SecondLargestAndSmallest
//
//  Created by SHIVAM SINGH on 25/02/22.
//

#include <stdio.h>

int main() {
    printf("Input the size of array ");
    int n,i,j,t=0;
    scanf("%d",&n);
    int arr[n];
    for ( i=0;i<n;i++ )
    {
        printf("Input a number :");
        scanf("%d",&arr[i]);
    }
    for (i=0; i<n; i++) {
        for (j=0; j<n ; j++)
        {
            if (arr[i] < arr[j]) {
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
    printf("Smallest no in an array : %d \n",arr[0]);
    printf("Second Largest number in an Array : %d \n",arr[n-2]);
    // insert code here...
    return 0;
}

