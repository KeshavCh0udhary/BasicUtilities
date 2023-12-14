#include<iostream>

class DefaultUser{
    std::string username;
    int age;// - + both 
    long long mob_number;
    public:
    DefaultUser(std::string username="", int age=0,long long mob_number=0){
        this->username = username;
        this->age = age;
        this->mob_number = mob_number;
    }

    void print(){
        std::cout <<"User Name is : " << username << std::endl;
        std::cout <<"Age is : " << age << std::endl;
        std::cout <<"Mobile is: " <<mob_number << std::endl;
    }

};

int main(){
    DefaultUser Pulkit_Joshi("Pulkit Joshi",19,9024751640),Bhajanlal_Joshi("Bhajanlal Joshi"),Vijay_Vansh;
    // Pulkit_Joshi.set_user("Pulkit Joshi",19,9024751640);
    Pulkit_Joshi.print();
    // Bhajanlal_Joshi.set_user("Bhajanlal Joshi",65);
    Bhajanlal_Joshi.print();
    // Vijay_Vansh.set_user();
    Vijay_Vansh.print();
}