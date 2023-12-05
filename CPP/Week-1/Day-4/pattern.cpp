#include<iostream>

void printRightAngleTriangle(int n){

for(int i=0; i<n; i++){
    for(int j=0; j<=i; j++){
        std::cout<<"*";
    }
    std::cout<<"\n";
}

}

void printInvertedPyramid(int n){

for(int i=n-1; i>=0; i--){
      for(int j=1; j<n*2; j++){
        if(j<n-i || j>n+i){
            std::cout<<" ";
        }else{
            std::cout<<"*";
        }
      }
      std::cout<<"\n";
   }

}

int main(){

    int* a = new int[10];
    std::cout<<"Enter number\n";
    std::cin>>a[0];
    int max = a[0];

      for(int i=1; i<10; i++){
        std::cout<<"Enter number\n";
        
        if(max < a[i]) max = a[i];
      }
    std::cout<<max;
//printRightAngleTriangle(5);
//printInvertedPyramid(3);

}