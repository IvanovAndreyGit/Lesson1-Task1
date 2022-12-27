
#include <iostream>
#include <fstream>
int main() {

    setlocale(LC_ALL, "Russian");

    std::ifstream fin("in1.txt");
    if (fin.is_open())
    {
       
        int i;
        int j;

        fin >> i;
        int* arr1 = new int[i];

        
        for (int s = 0; s < i; s++)
        {
            fin >> arr1[s];
        }
     
        fin >> j;
        int* arr2 = new int[j];

        std::cout << j << std::endl;
        for (int s = 0; s < j; s++)
        {
            fin >> arr2[s];
        }

       //============================

        std::cout << arr2[j-1] << " ";

        for (int s = 0; s < j - 1; s++)
        {
            std::cout << arr2[s] << " ";
        }
        
        std::cout << std::endl;
        //std::cout << arr2[0] << std::endl;

        //============================

        std::cout << i << std::endl;
        for (int s = 1; s < i; s++)
        {
            std::cout << arr1[s] << " ";
        }
        std::cout << arr1[0] << std::endl;

        //============================

        fin.close();
        delete[] arr1;
        delete[] arr2;
        return 0;
    }
    
}
