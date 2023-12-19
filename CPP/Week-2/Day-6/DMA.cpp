#include<iostream>
class DMA{
    std::string info;
    int data, size;
    public:
    DMA(){
        data = 0;
        size = 0;
        info = "";
    }

    DMA(int data,int size ,std::string info){
        this->data = data;
        this->size = size;
        this->info = info;
    }
    
    void print_details(){
        std::cout<<"Data is: "<<data<<std::endl;
        std::cout<<"Size is: "<<size<<std::endl;
        std::cout<<"Info is: "<<info<<std::endl;
    }
    
};

int main(){
    DMA tcs(123,5,"Developer");
    tcs.print_details();
    //new (allows memory allocation)
    //delete (allows to deallocte memory)
    DMA *apple = new DMA(256,8,"App developer");
    apple->print_details();
    
    delete apple;
    return 0;
}