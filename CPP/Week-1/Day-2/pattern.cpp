
#include<iostream>

int main(){
     /* print given pattern without using loops
    *****
    *****
    *****
    *****
    */
   for(int i=1;i<=20;i++){
      std::cout<<"*";
      if(i%5==0){
        std::cout<<"\n";
      }
  }
}