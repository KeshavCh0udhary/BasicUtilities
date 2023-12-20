#include<iostream>

class Circle{

    const double PI = 3.141592653589793;
    double radius;
    public:
    Circle(double radius){
        this->radius = radius;
    }
    double Circumference() const{
        return 2*PI*radius;
    }

    double Area() const{
        return PI*radius*radius;
    }

};

int main(){
    Circle c1(14.5);
    std::cout<<c1.Area()<<std::endl;
    std::cout<<c1.Circumference()<<std::endl;
    return 0;
}