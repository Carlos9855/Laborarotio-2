#pragma once
#include <iostream>
#include <string>
using namespace std; 

class Date
{
private:
  int day; 
  int month;
  int year;
public:
  Date(int day, int month, int year)
  {
    this->day = day; 
    this->month = month; 
    this->year = year; 
  }
  int getYear()
  {
    return year; 
  }
};