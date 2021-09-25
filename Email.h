#pragma once
#include <iostream>
#include <string>
#include "Date.h"
using namespace std; 

class Email
{
protected:
  string sender; 
  string subject; 
  string message; 
  Date* date; 
public:
  Email(string sender, string subject, string message, Date* date)
  {
    this->sender =  sender; 
    this->subject = subject;
    this->message = message; 
    this->date = date; 
  }
  string getSender()
  {
    return sender; 
  }
  Date *getDate()
  {
    return date; 
  }
  string toString()
  {
    return sender + ": " +subject; 
  }
  virtual bool isSpam()
  {
    return false; 
  }
};