#pragma once

#include <iostream>

class Automata
{
private: enum STATES { Off, Wait, Accept, Check, Cook };
       int cash;
       std::string menu[10];
       int prices[10];
       STATES state;
       int chosenProduct;

public: Automata();
      int on();
      int off();
      int coin(int);
      int getMenu();
      int getState();
      int choice(int);
      int check();
      int cancel();
      int cook();
      int finish();
};
