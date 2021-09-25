#pragma once
#include <iostream>
#include <string>
#include "Formatter.h"
using namespace std; 

class GmailFormatter: public Formatter
{
private:
public:
  GmailFormatter(){
  }
  virtual string format(Email* email)
  {
    if(email->isSpam())
      return "GAMIL( SPAM: " + email->toString() +" )";
    return "GMAIL( " + email->toString() +" )";
  }
};