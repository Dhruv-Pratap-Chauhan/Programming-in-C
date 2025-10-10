//wap to read a list of integers and store them in single dimensional array. write a program to print the second largest integer from the list of integers.


#include <stdio.h> 
int main() 
{ 
    int n, i, j, t; 
    printf("Enter number of elements: "); 
    scanf("%d", &n); 
    int arr[n]; 
    printf("Enter %d integers: ", n); 
    for(i = 0; i < n; i++) 
    { 
        scanf("%d", &arr[i]); 
    } 
    for(i = 0; i < n-1; i++) 
    { 
        for(j = 0; j < n-i-1; j++) 
        { 
            if(arr[j] > arr[j+1]) 
            { 
                t = arr[j]; 
                arr[j] = arr[j+1]; 
                arr[j+1] = t; 
            } 
        } 
    } 
    printf("The second largest integer is: %d\n", arr[n-2]); 
    return 0; 
}
