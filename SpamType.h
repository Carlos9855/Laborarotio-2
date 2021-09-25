#pragma once
#include <iostream>
#include <string>
using namespace std; 

class SpamType
{
private:
  string type;
public:
  SpamType(string t)
  {
    type = t;
  }
  string mostrar_type()
  {
    return type;
  }
};