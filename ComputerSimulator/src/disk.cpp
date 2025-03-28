#include <fstream>
#include "disk.h"

void Disk::save(const int* data) {
  std::ofstream file("data.txt");
  for (int i = 0; i < 8; ++i) {
    file << data[i] << std::endl;
  }
  file.close();
}

void Disk::load(int* data) {
  std::ifstream file("data.txt");
  for (int i = 0; i < 8; ++i) {
    file >> data[i];
  }
  file.close();
}
