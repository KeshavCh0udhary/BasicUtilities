#include<iostream>

class Math{
    
    int a, b;

    public: 

    Math(){
       a = 0;
       b = 0;
    }

    Math(int a, int b){
        this->a = a;
        this->b = b;
    }

    Math(Math& obj){
        a = obj.a;
        b = obj.b;
    }
    
    int sum(){
        return a+b;
    }

    inline int multiply(){
        return a*b;
    }

    int divide(){//Ternary operator (if else block)
        return b == 0 ? -1 : a/b;
    }

    int abs(int x){//Ternary operator (if else if else block)
        return x < 0 ? x * -1 : x == 0 ? 0 : x;
    }

};

int main(){
    Math m1(5,7);
    int output = m1.multiply();
    std::cout<<output<<std::endl;

}

//Compile time or runtime ?