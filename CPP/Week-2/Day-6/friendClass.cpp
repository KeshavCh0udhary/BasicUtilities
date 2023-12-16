#include<iostream>
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
    friend class FriendClass;
};


class FriendClass{
    int a,b;
    public:
    void print_info(int a,int b,std::string info){
        Ramesh *r = new Ramesh(a,b,info);
        std::cout<<r->data<<std::endl;
        std::cout<<r->size<<std::endl;
        std::cout<<r->info<<std::endl;
        delete r;
    }
};

int main(){
    FriendClass *pulkit = new FriendClass;
    pulkit->print_info(256,7,"Keshav");
    return 0;
}