#include<iostream>

class Math{
private:
    double PI = 3.141592653589793;
public:
int findMin(int arr[],int n){
    
    int min = arr[0];

    for(int i=0; i<n; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }

    return min;
   
}

int findMax(int arr[],int n){
    
    int max = arr[0];

    for(int i=0; i<n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    
    return max;
   
}

int findSecondMax(int arr[],int n){
    
    int max = arr[0];
    int sMax = max; 
    for(int i=0; i<n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
        if(sMax < arr[i] && arr[i] < max){
            sMax = arr[i];
        }
    }
    
    return sMax;
   
}
int countMax(){
   int arr[] = {3,-2,-1,-4,6};
   int max = 0, el = arr[0];
   for(int i=0; i<5; i++){
      int count = 1;
      for(int j=0; j<5; j++){
          if(i !=j && arr[i] == arr[j]){
            count++;
          }
      }
     if(max<count){
        max = count;
        el = arr[i];
     }
   }

   std::cout<<max<<" "<<el<<std::endl;
}
void areaOfCircle(){
    std::cout<<PI;
}
};


int main(){
   
   int arr[5];
   arr[0] = 1;
   float ar[6];
   ar[0] = 45.0f;
   double a[6];
   a[1] = 456.920;
   char ch[7];
   ch[0] = 'r';
   
   Math m[5];//Array of object
   for(int i=0; i<5; i++){
      Math m1;
      m[i] = m1;
   }
   
  
   m[1].areaOfCircle();


}