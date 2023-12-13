#include<iostream>

class Square{
    int side[10];
    int a;
    public:
    
    Square(int side){
       for(int i=0; i<10; i++){
           this->side[i] = side;
       }
       a = 10;
    }

    Square(Square& copy){
       for(int i=0; i<10; i++){
          side[i] = copy.side[i];
       }
       a = copy.a;
    }

    void print();

};

void Square::print(){
    for(int i=0; i<10; i++){
        std::cout<<this->side[i]<<" ";
    }
}

int main(){
    Square s(8);

    Square c(s);

    Square d(c);
    d.print();

    return 0;
}