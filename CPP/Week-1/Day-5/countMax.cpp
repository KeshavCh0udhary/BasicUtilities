#include<iostream>

int main(){
   int arr[] = {3,-2,-1,-4,6};
   int max = 0, el = arr[0];
   for(int i=0; i<5; i++){
      int count = 1;
      for(int j=0; j<5; j++){
          if(i !=j && arr[i] == arr[j]){
            count++;
          }
      }
     if(max<count){
        max = count;
        el = arr[i];
     }
   }

   std::cout<<max<<" "<<el<<std::endl;
}