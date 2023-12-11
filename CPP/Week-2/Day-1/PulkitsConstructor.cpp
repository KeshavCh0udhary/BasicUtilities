#include <iostream>
using namespace std;
class rhombus{
    double length;
    double breadth;
    public:
    
    rhombus(){
        length = 0;
        breadth = 0;
        cout<<"this is default constructor\n";
    }
    
    rhombus(int length, int breadth){
        this-> length = length;
        this-> breadth = breadth;
    
    cout<<"this is parameter constructor\n";
    }
    
    rhombus(double length, double breadth){
        this-> length = length;
        this-> breadth = breadth;
        cout<<"this is parameter constructor of double data\n";
    }
    
    double area(){
        return (length*breadth)/2;

    }
    
};
int main(){
    //array of object;
    rhombus arr[5];
    
 
    for(int i=0; i<5; i++){
        double a,b;
        cin>>a>>b;
        arr[i] = rhombus(a,b);
    }
    
    for(int i=0; i<5; i++){
        cout<<arr[i].area()<<"\n";
    }
    return 0;
}