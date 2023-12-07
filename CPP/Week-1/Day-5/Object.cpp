#include<iostream>

class Box{
   private:
     double length,breadth,height;
   public:
  
    void setData(double length,double breadth,double x){
        length = length;
        this->breadth = breadth;
        this->height = x;
    }

   void showData(){
       std::cout << "Length : " << length<<"\n";
       std::cout << "Breadth : " << breadth<<"\n";
       std::cout << "Height : " << height<<"\n";
   }
};

int main(){
    Box b;
    double xy,yz,za;
    std::cin>>xy>>yz>>za;
    b.setData(xy,yz,za);
    b.showData();
}