#include <iostream>

class Pattern
{
public:
    void printPattern(int n)
    {

        int val = 1;

        for (int i = 1; i <= n; i++)
        {

            if (i % 2 == 0)
            {
                for (int j = n; j >= 1; j--)
                { // val = 5+j = 10 // 5 + j = 9
                    std::cout << val - 1 + j << " ";
                }
                val = val + n;
            }
            else
            {
                for (int j = 1; j <= n; j++)
                {
                    std::cout << val++ << " ";
                }
            }
            std::cout << "\n";
        }
    }

    void printP(int n){
        int val = 1, line =1;
        for(int i = 1; i <= n*n; i++){
            
            if(line % 2 == 0){
               std::cout << val - 1 + i << " ";
            }else std::cout<< val++ << " ";

            if(i%n == 0){
                std::cout<<"\n";
                line++;
                val = i;
            }

        }


    }
};

int main()
{
    Pattern p;
    p.printP(7);
    return 0;
}