#include <iostream>
int add(int a,int b);

void Days(int day){
    
    enum Days
    {
        MONDAY,
        TUESDAY,
        WEDNESDAY,
        THURSDAY,
        FRIDAY,
        SATURDAY,
        SUNDAY
    };

    int day;
    std::cout << "Enter days\n";
    std::cin >> day;

    switch (day)
    {
    case MONDAY:
        std::cout << "today is monday\n";
        break;
    case TUESDAY:
        std::cout << "today is tuesday\n";
        break;
    case WEDNESDAY:
        std::cout << "today is wednesday\n";
        break;
    case THURSDAY:
        std::cout << "today is thursday\n";
        break;
    case FRIDAY:
        std::cout << "today is friday\n";
        break;
    case SATURDAY:
        std::cout << "today is saturday\n";
        break;
    case SUNDAY:
        std::cout << "today is sunday\n";
        break;
    default:
        std::cout << "Invalid day";
    }

    return;
}
 
int main(){
    
    int a = 10;
    int b = 11;
   
    std::cout<<  add(a,b);
}