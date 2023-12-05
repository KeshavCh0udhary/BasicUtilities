#include <iostream>
using namespace std;
 int main(){
    int i;
    int arr[50];
    for( i=49; i>=0; i--){
        arr[i]=2*(i+1);
        cout<<arr[i];
    }
 }