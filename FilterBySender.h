#pragma once
#include <iostream>
#include <string>
#include "Filter.h"
using namespace std;

class FilterBySender : public Filter
{
private:
  string sender;
public:
  FilterBySender(string sender)
  {
    this->sender = sender;
  }
  virtual int getYear()
  {
    return NULL;
  }
  virtual string getSender()
  {
    return sender;
  }
};