#pragma once
#include <iostream>
#include <string>
using namespace std; 

class Filter
{
private:
public:
    virtual int getYear()=0;
    virtual string getSender()=0;
};