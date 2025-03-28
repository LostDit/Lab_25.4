#include "ram.h"

void RAM::write(const int*data)    {
  for(int i=0;i<8;++i){
    buffer[i] = data[i];
  }
}
int* RAM::read() {
  return buffer;
}