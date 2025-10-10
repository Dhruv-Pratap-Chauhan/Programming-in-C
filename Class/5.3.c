//wap to read a list of integers and store them in single dimensional array. write a program to find the frequency of pqrticular integer from the list of integers.

#include <stdio.h>
int main()
{
    int n, i, num, freq = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n]; 
    printf("Enter %d integers: ", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the integer to find frequency: ");
    scanf("%d", &num);
    for(i = 0; i < n; i++)
    {   
        if(arr[i] == num)
        {
            freq++;
        }
    }   
    printf("Frequency of %d is: %d\n", num, freq);
    return 0;
}   