#include<iostream>

class Abstract{
   private:
   int a,b;
   protected:
   int c;
   public:
   bool isRunning(){
       return true;
   }
   virtual void makeSound()=0;
   bool isEcoFriendly(){
     return false;
   }
};



class Car : public Abstract{
    int d;
    public:
    void makeSound() override{
       std::cout<<"poo poo\n";
    }

    void test(){
        d = c;
    }
};

int main(){
  Car v1;
  v1.makeSound();
}
