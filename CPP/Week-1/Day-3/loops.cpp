#include<iostream>

int main(){

   /*
    int n;
    std::cin>>n;

    while(n != 0){
        std::cout<<"enter\n";
        std::cin>>n;
    }


   
    int n;
    

    do{
        std::cout<<"enter value \n";
        std::cin>> n;

    }while(n != 0);

    */
  // skip 6
   for(int i=0; i<10; i++){
        

      

        if(i == 6){


            continue;
            std::cout<<"\nsay hi\n";
        }

        if(i == 7 ){
            break;
        }

        std::cout<<"\nsay hi\n";
        std::cout<<i<<"\n";

   }
}