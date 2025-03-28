#pragma once

class RAM  {
private:
  static constexpr int SIZE = 8; // Размер буфера
  int buffer[SIZE] = {0};

public:
  void write(const int* data);
  int* read();
  static int size() { return SIZE; } // Метод для получения размера
};