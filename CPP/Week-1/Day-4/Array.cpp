#include <iostream>
using namespace std;
 int main(){
    int i;
    int arr[50];
    for( i=49; i>=0; i--){
        arr[i]=2*(i+1);
    }

    float sum = 1;

    for(int i=0; i<10; i++){
        if(arr[i] %2 == 0)
        sum += arr[i]; 
    }

    std::cout<<sum;
    
 }