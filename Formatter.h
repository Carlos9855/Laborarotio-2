#pragma once
#include <iostream>
#include <string>
#include "Email.h"
using namespace std; 

class Formatter
{
protected:
    Email* email; 
public:
    Formatter()
    {
    }
    virtual string format(Email* email)=0;
};