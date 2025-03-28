#include <iostream>
#include "ram.h"
#include "cpu.h"

extern RAM ram; //Объявляет что ram будет доступен

void CPU::compute() {
  int sum = 0;
  const int* buffer = ram.read();
  for (int i = 0; i < RAM::size(); i++) {
    sum += buffer[i];
  }
  std::cout<<"Сумма: "<<sum<<std::endl;
}