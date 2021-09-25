#pragma once
#include <iostream>
#include <string>
#include "Email.h"
#include "FilterByYear.h"
#include "Filter.h"
using namespace std; 

class EmailBox
{
private:
  Email** emails;
  FilterByYear* filter; 
  int size;  
public:
  EmailBox()
  {
    emails = new Email*();
    size=0; 
  }
  void add(Email* email)
  {
    emails[size] = email; 
    size++;  
  }
  int count(Filter* filter)
  {
    int yearsCounter=0;
    int sendersCounter=0;
    for(int i=0;i<size;i++)
    {
      if(emails[i]->getDate()->getYear() == filter->getYear())
      {
        yearsCounter++;
      }
       if(emails[i]->getSender() == filter->getSender())
      {
        sendersCounter++; 
      }
    }
    if(yearsCounter>sendersCounter)
    {
      return yearsCounter;
    }
    else
    {
      return sendersCounter;
    } 
  }
};