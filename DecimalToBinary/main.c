//
//  main.c
//  DecimalToBinary
//
//  Created by SHIVAM SINGH on 25/02/22.
//

#include <stdio.h>

int main() {
    int a[10],n,i;
    printf("Enter the number to convert: ");
    scanf("%d",&n);
    for(i=0;n>0;i++)
    {
    a[i]=n%2;
    n=n/2;
    }
    printf("\nBinary of Given Number is = ");
    for(i=i-1;i>=0;i--)
    {
    printf("%d",a[i]);
    }
    // insert code here...
    printf("\n");
    return 0;
}
