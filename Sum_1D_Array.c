#include<stdio.h>

int main()
{
    int arr[7];     //declaring array name & size
    int i, s = 0;  //declare variable i & s.s for summation

    for(i = 0; i < 7; i++)   //As I want to sum 7 numbers,so am using for loop.Array index starts from 0.so initialize i=0
    {
        printf("Enter a[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 7; i++)
    {
        s += arr[i];   //sum
    }

    printf("\nSum of elements = %d ", s);

    // printing the sum of the elements
    return 0;
}
