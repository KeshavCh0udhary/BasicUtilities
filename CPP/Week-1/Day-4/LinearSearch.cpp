#include <iostream>
using namespace std;

// Given an array of size n elements, from 1 to n; your task is to find the element which is equal to target;

int linearSearch(int arr[], int n, int target){
    int index = -1;
    for(int i=0; i<n; i++){
        if(arr[i] == target){
            index = i;
            break;
        }
    }
    return index;
}

int main(){
    int i;
    int n = 51;
    int arr[n];
    for( i=0; i<n; i++){
        arr[i]=i+1;
    }
    int target;
    cin >> target;
    int index = linearSearch(arr,n,target);

    if(index != -1){
       std::cout<<arr[index]<<" is available at index "<<index;
    }else{
        std::cout<<"Element "<<target<<" is not available"<<index;
    }
 }