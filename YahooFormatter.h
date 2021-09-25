#pragma once
#include <iostream>
#include <string>
#include "Formatter.h"
using namespace std; 

class YahooFormatter: public Formatter
{
private:
public:
  YahooFormatter()
  {
  }
  virtual string format(Email* email)
  {
    if(email->isSpam())
      return "YAHOO( SPAM: " + email->toString() +" )";
    return "YAHOO( " + email->toString() +" )";
  }
};