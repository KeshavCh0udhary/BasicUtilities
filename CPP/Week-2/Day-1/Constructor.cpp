#include<iostream>

class Conctructor{
     
    int a,b;
    double c;
    public: 

    Conctructor(){
        a = 0;
        b = 0;
        std::cout<<"Object is created using default constructor\n";
    }

    Conctructor(int a,int b){
        this->a = a;
        this->b = b;
        std::cout<<"Object is created using default constructor2\n";
    }

     Conctructor(double aa,int bb){
        this->c = aa;
        this->b = bb;
        std::cout<<"Object is created using default constructor3\n";
    }

    void display(){
        std::cout<<a<<" "<<b<<std::endl;
    }


};

int main(){
    Conctructor c(6.8,7),c1(9,7);
    //c.display();
    return 0;
}