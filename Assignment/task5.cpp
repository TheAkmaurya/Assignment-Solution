// Q.5 Write a program that reverses a list/array.
// I used two pointer approach .

#include<iostream>
using namespace std;

void reverse(int *arr, int n){
    int s = 0, e = n-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++; e--;
    }
} 
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);             // size of array

    reverse(arr,n);                                 // this func reverse an array
    for (int i = 0; i < n; i++)             
    {
        cout << arr[i] << " ";                      // print
    }
    
    return 0;
}