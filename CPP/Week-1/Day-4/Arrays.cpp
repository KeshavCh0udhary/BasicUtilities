#include <iostream>

int main()
{

    int numbers[5]; // Declares an array of 5 integers named 'numbers'

    numbers[2] = 10; // Assigns the value 10 to the third element of the 'numbers' array

    int arr[5] = {1, 2, 3, 4, 5}; // Declaration and initialization of an array

    // Accessing elements of the array
    std::cout << arr[0]; // Outputs the first element (index 0)

    int arr3D[3][3][3] = {
        {{1, 2, 3},
         {4, 5, 6},
         {7, 8, 9}},
        {{10,11,12},
         {13,14,15},
         {15,16,17}},
        {{18,19,20},
         {21,22,23},
         {24,25,26}}
    };

    // Accessing elements of a 2D array
    std::cout << arr3D[0][1][2]; // Outputs the element in the second row, third column (index 0, 1,2)
}
