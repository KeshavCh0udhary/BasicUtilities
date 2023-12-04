#include <iostream>

int main()
{
    /*
    {
      int y =10;
      std::cout<<y<<" this y is in block scope\n";
    }

    {
      int y =10;
      std::cout<<y<<" this y is in another block scope\n";
    }

    //std::cout<<y;


    struct Student{
        int age;
        int weight=10;
    };

    Student Ayush;
    Ayush.age =20;
    std::cout<<Ayush.weight<<" "<<Ayush.age;




    int days =1;
    enum Days{
       SUNDAY,MONDAY,TUESDAY
    };

    if(days == MONDAY){
      std::cout<<"MONDAY";
    }


    int number;
    number = 8;
     int reminder = number % 2;
    if(reminder == 1){
      std::cout<<"number is odd";
    }else{
      std::cout<<"number is even";
    }

  // check weather the given number is greater then target or not and less then
  target1; int target1 = 19; int number; number = 199;

    if(!(false) || number < target1){

      std::cout<<"yes";
    }else{
      std::cout<<"no";
    }


    enum Days {
      MONDAY,
      TUESDAY,
      WEDNESDAY,
      THURSDAY,
      FRIDAY,
      SATURDAY,
      SUNDAY
    };

    int day;
    std::cout<<"Enter days\n";
    std::cin >> day;

    switch (day) {
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
  */
    int day;
    std::cout << "Enter days\n";
    std::cin >> day;
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
    return 0;
}