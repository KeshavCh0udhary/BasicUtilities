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
    void makeSound(){
       std::cout<<"poo poo\n";
    }

    void test(){
        d = c;
    }
};

class Bus : public Vechicle{

};


class Omni : public Bus, public Car{
    
};

class SchoolBus : public Bus{

};

class BMW : protected Car{
    public:
    
};




int main(){
  Vechicle* v1 = new Car(); 
  v1->makeSound();
}

/*
Type of inheritance :-
  i) Single inheritance
 ii) Multiple inheritance
iii) Multilevel inheritance
 iv) Hierarchical inheritance
  v) Hybrid inheritance
*/