#include<iostream>
class Circle{
    static const double PI;
    double radius;
    public:

    Circle(double radius){
        this->radius = radius;
    }
    double Circumference(){
        return 2*PI*radius;
    }
    
    double Area() const{
        return PI*radius*radius;
    }

    static double getPI(){
        return PI;
    }

};

const double Circle::PI = 3.14159265;


class Sphere{
    double radius;
    public:
    Sphere(double radius){
        this->radius = radius;
    }
    double area() const{
        return 4*Circle::getPI()*radius*radius;
    }
};

int main(){
    // Circle c1(14.5);
    // std::cout<<c1.Circumference()<<std::endl;
    // std::cout<<c1.Area()<<std::endl;
    // Circle c2(14.5);
    // std::cout<<c2.Circumference()<<std::endl;
    Sphere s1(15);
    std::cout<<s1.area()<<std::endl;
    return 0;
}