#include<iostream>

class Vechicle{
   private:
   int a,b;
   protected:
   int c;
   public:
   bool isRunning(){
       return true;
   }
   virtual void makeSound(){
       std::cout<<"Pee pee\n";
   }
   bool isEcoFriendly(){
     return false;
   }
};



class Car : public Vechicle{
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
