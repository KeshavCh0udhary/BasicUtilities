#include<iostream>
class Overloading{  
    public:
    int add(int a, int b){
        return a + b;
    }
    double add(double a, double b){
        return a + b;
    }

    int add(int a,int b,int c){
        return a + b + c;
    }
    double add(double a,double b,double c){
        return a + b + c;
    }
};

int main(){
    Overloading over;
    std::cout<<over.add(15.6,1.6)<<"\n";
}

/*
Polymorphism: A methods that has many forms is  called polymorphism.
Two types of polymorphism
i) Compile time polymorphism
   * Method overloading / function overloading
ii) Run Time polymorphism
   * Method overriding 
*/