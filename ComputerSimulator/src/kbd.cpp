#include <iostream>
#include "kbd.h"

void KBD::input(int* data){
    std::cout<<"Введите 8 чисел: ";
    for(int i=0;i<8;++i){
      std::cin>>data[i];
    }
}