#include <iostream>

struct Student{
  private:
   int a,b;
   public:
   void set(int a,int b){
    this->a = a;
    this->b = b;
   }
   void show(){
    std::cout<<a<<" "<<b<<std::endl;
   }
};

int main() {
 Student keshav;
 keshav.set(1,4);
 keshav.show();
}
