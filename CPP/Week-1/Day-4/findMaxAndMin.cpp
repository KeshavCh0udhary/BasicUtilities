#include <iostream>

//Find minimum and maximum in given array

int findMin(int arr[],int n){
    
    int min = arr[0];

    for(int i=0; i<n; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }

    return min;
   
}

int findMax(int arr[],int n){
    
    int max = arr[0];

    for(int i=0; i<n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    
    return max;
   
}

int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        std::cin>>arr[i];
    }

    std::cout<<findMax(arr,n)<<"\n";
    std::cout<<findMin(arr,n);
 }