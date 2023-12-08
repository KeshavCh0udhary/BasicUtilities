#include<iostream>

class Cuboid{
    double length,breadth,height;
public:
    void setDimensions(double length,double b,double h){
        this->length = length;
        breadth = b;
        height = h;
    }

    void showDimensions(){
        std::cout<<"Length: "<<this->length<<"\n";
        std::cout<<"Breadth: "<<breadth<<"\n";
        std::cout<<"Height: "<<height<<"\n";
    }

    double volume(){
        return length*breadth*height;
    }

    double TSA(){
        return 2*(length*breadth+breadth*height+height*length);
    }

    void printTsaAndVolume(){
        std::cout<<"Volume is: "<<volume()<<std::endl;
        std::cout<<"Total Surface Area is: "<<TSA()<<std::endl;
    }
};

int main(){
    Cuboid box[10];
    
    double maxVolume = 0.00;
    int index = 0;
    for(int i=0; i<10; i++){
    
        box[i].setDimensions(i+65.87,i+54.87,i+66.87);
        box[i].printTsaAndVolume();
        if(maxVolume < box[i].volume()){
            maxVolume = box[i].volume();
            index = i;
        }
    }
    std::cout<<"Objects having maximum volume is: "<<maxVolume<<std::endl;
    box[index].showDimensions();


}