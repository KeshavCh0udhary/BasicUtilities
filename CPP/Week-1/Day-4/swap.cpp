#include <iostream>
using namespace std;

// Given an array of size n elements, from 1 to n; your task is reverse the array without using any extra space;

int main(){
    int i;
    int n = 51;
    int arr[n];
    for( i=0; i<n; i++){
        arr[i]=i+1;
    }

    for(int i=0; i<n/2; i++){
       
       int temp = arr[i];
       arr[i] = arr[n-1-i];
       arr[n-1-i] = temp;

    }

    for(int i=0; i<n; i++){
        std::cout << arr[i] <<" ";
    }
    
 }