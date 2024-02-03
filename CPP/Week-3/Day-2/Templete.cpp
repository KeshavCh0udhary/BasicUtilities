#include <iostream>

template <typename T>
void sort(T* arr, int size) {
       for (int i = 0; i < size - 1; i++) {
        int swapped = 0;
      
        for (int j = 0; j < size - i - 1; j++) {
    
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
      
        if (swapped == 0) {
            break;
        }
    }
}

int main(){
   double arr[] = {0.7,1.3,5.89,3.98,8.6,5.77,6.87};
   sort(arr, 7);
   for(double e : arr) {
       std::cout<<e<<" ";
   }
}