#include<iostream>
using namespace std;
class student{
    private:
    string name;
    int roll_no;
    public:
    void set_data(string n, int r){
        name=n;
        roll_no=r;

    }
    void show_data(){
        cout<<"name is:"<<name<<endl;
        cout<<"roll_no is:"<<roll_no<<endl;
    }
};

/*
try statement is allow us to define to be tested for err*/
int main(){
    string name;
    int roll_no;;
    while (1)
    {
        student s;
        cout<<"Enter name:\n";
        cin>>name;
        cout<<"Enter roll:\n";

        cin>>roll_no;
        s.set_data(name,roll_no);
        s.show_data();
        

    }
    

    return 0;
}

