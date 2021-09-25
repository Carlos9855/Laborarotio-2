#pragma once
#include <iostream>
#include <string>
#include "Date.h"
#include "Email.h"
#include "SpamType.h"
using namespace std; 

class SpamEmail: public Email, public SpamType
{
private:
public:
  SpamEmail(string sender, string subject, string message, Date* date, string tipo): Email(sender,subject,message,date), SpamType(tipo)
  {
  }
  virtual bool isSpam()
  {
    return true; 
  }
};