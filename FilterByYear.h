#pragma once
#include <iostream>
#include <string>
#include "Filter.h"
using namespace std; 

class FilterByYear: public Filter
{
private:
  int year;
public:
  FilterByYear(int year)
  { 
    this->year = year; 
  }
  virtual int getYear()
  {
    return year; 
  }
  virtual string getSender()
  {
    return "";
  }
};