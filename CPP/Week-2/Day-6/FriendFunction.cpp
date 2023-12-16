#include<iostream>
class Friend_function{
    std::string info;
    int data, size;
    public:
    Friend_function(){
        data = 0;
        size = 0;
        info = "";
    }

    Friend_function(int data,int size ,std::string info){
        this->data = data;
        this->size = size;
        this->info = info;
    }
    
    void print_details(){
        std::cout<<"Data is: "<<data<<std::endl;
        std::cout<<"Size is: "<<size<<std::endl;
        std::cout<<"Info is: "<<info<<std::endl;
    }
    
    friend void stoleDetails();
};

class Ramesh{
    std::string info;
    int data, size;
    public:
    Ramesh(){
        data = 0;
        size = 0;
        info = "";
    }

    Ramesh(int data,int size ,std::string info){
        this->data = data;
        this->size = size;
        this->info = info;
    }
    
    void details(){
        std::cout<<"Data is: "<<data<<std::endl;
        std::cout<<"Size is: "<<size<<std::endl;
        std::cout<<"Info is: "<<info<<std::endl;
    }
    friend void stoleDetails();
};

void stoleDetails(){
   Friend_function *apple = new Friend_function(256,8,"Friend");
   apple->print_details();
   std::cout<<apple->data;
   Ramesh *google = new Ramesh(2612,7,"Ramesh");
   google->details();
   std::cout<<google->data;
   delete apple,google;
}

int main(){

    stoleDetails();
    return 0;
}