#include <iostream>
#include "gpu.h"

void GPU::display(const int* data)    {
    std::cout<<"Данные из RAM: ";
    for (int i = 0; i<8;++i)    {
      std::cout<<data[i]<<" ";
    }
    std::cout<<std::endl;
}