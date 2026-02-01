/* Insert an Element in an Array

Problem: Write a C program to insert an element x at a given 1-based position pos in an array of n integers. Shift existing elements to the right to make space.

Input:
- First line: integer n
- Second line: n space-separated integers (the array)
- Third line: integer pos (1-based position)
- Fourth line: integer x (element to insert)

Output:
- Print the updated array (n+1 integers) in a single line, space-separated

Example:
Input:
5
1 2 4 5 6
3
3

Output:
1 2 3 4 5 6

Explanation: Insert 3 at position 3, elements [4,5,6] shift right */
#include<stdio.h>
int main(){
    int n;
    printf("Enter No of elements in array:\n");
    scanf("%d",&n);
    int arr[n+1];
    printf("Enter %d elements seperated by space :\n",n);
    for(int i=0;i<n;i++){
        
        scanf("%d",&arr[i]);
    }
    int n_new,position;
    printf("Enter position where new element to be inserted :\n");
    scanf("%d",&position);

    printf("Enter new element to be inserted :\n");
    scanf("%d",&n_new);


    //inserting values in array:
    for(int j=n ;j>(position-1);j--){
       arr[j]=arr[j-1];
       
    }
    arr[position-1]=n_new;
    //printing value
    printf("New updated array:");
    for(int i=0 ;i<n+1;i++){
        printf(" %d",arr[i]);
        }
return 0;
}
