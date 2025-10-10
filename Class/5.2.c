//wap to read a list of integers and store them in single dimensional array. write a program to print the positive, negative, odd and even integers from the list of integers.

#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers: ", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Positive integers: ");
    for(i = 0; i < n; i++)
    {
        if(arr[i] > 0)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\nNegative integers: ");
    for(i = 0; i < n; i++)
    {
        if(arr[i] < 0)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\nEven integers: ");
    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\nOdd integers: ");
    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 != 0)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}   