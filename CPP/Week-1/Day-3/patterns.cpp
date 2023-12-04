#include <iostream>

void printPattern(int n){
   
   for(int i=0; i<n; i++){
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
    printPattern(3);
}