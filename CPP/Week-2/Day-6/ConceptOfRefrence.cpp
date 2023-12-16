#include<iostream>

class Reference{
    std::string info;
    public:
    int data, size;
    Reference(){
        data = 0;
        size = 0;
        info = "";
    }

    Reference(int data,int size ,std::string info){
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

// Call by reference
void swap(int* a, int* b){
        int helper = *a;
                *a = *b;
                *b = helper;
}

//
void swap1(int &a, int &b){
        int helper = a;
            a = b;
            b = helper;
}

void print_array(Reference array[],int size){
    
    for(int i=0; i<size; i++){
        swap1(array[i].data,array[i].size);
        array[i].print_details();
    }

}

int main(){
    Reference tcs(123,5,"Developer"),wipro(1234,6,"Human Resource"),microsoft(204,7,"Backend Developer"),google(420,8,"Data scientist");
    Reference array[4] = {tcs,wipro,microsoft,google};
    print_array(array,4);
    return 0;
}