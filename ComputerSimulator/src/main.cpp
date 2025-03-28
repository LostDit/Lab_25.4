#include <iostream>
#include <ram.h>
#include <cpu.h>
#include <disk.h>
#include <gpu.h>
#include <kbd.h>

RAM ram;
CPU cpu;
Disk disk;
GPU gpu;
KBD kbd;

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int data[8] = {0};
    std::string command;

    while (true)    {
      std::cout<<"Введите команду (sum, save,load,input,display,exit): ";
      std::cin>>command;

      if (command == "sum"){

        CPU::compute();

      }else if (command == "save"){

        Disk::save(ram.read());

      }else if (command == "load"){

        Disk::load(data);
        ram.write(data);

      }else if (command == "input"){

        KBD::input(data);
        ram.write(data);

      }else if (command == "display"){

        GPU::display(ram.read());

      }else if (command == "exit"){

        break; //Фулл выход из программы

      }else{

        std::cout<<"Неизвестная команда. Пожалуйста, попробуйте снова."<<std::endl;
        system("pause"); //Для удобства добавил 2 комманды (понимаю что на разных OC работает по разному)
        system("cls");

      }
    }

    return 0;
}