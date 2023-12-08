#include <iostream>

// Define a class called 'Box'
class Box {
public:
    // Data members (properties)
    double length;
    double bredth;
    double height;

    // Member function to display box details
    void displayDetails() {
        std::cout << "Length: " << length << ", Bredth: " << bredth << ", Height: " << height << std::endl;
    }
};

int main() {
    // Create objects of the 'Box' class
    Box box1; // Object 1
    Box box2; // Object 2

    // Assigning values to data members of object 'box1'
    box1.length = 20.46;
    box1.bredth = 15.00;
    box1.height = 25.75;

    // Assigning values to data members of object 'box2'
    box2.length = 50.56;
    box2.bredth = 30.65;
    box2.height = 25.78;

    // Accessing member function to display details of objects
    box1.displayDetails();
    box2.displayDetails();

    return 0;
}
