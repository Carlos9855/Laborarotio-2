#include <iostream>
#include <string>
#include<sstream>
using namespace std;



template <typename T>

string to_string(T value)
{
    ostringstream os ;
    os << value ;
    return os.str() ;
}



void assertEquals(double a, double b)
{
    double error = 0.002;
    double difference = a-b;
    if(difference<0) difference=difference*-1;
    if(difference<0.002)
    {
        cout<<"TEST PASS :)"<<endl;
    }
    else
    {
        cout<<"TEST FAILS: "<<a<<" != "<<b<<endl;
    }
}

template <class T>
void assertEquals(T a,T b)
{
    if(a == b)
    {
        cout<<"ASSERT PASS :)"<<endl;
    }
    else
    {
        cout<<"ASSERT FAILS: "<<a<<" != "<<b<<endl;
    }
}

void assertTrue(bool value)
{
    if(value)
    {
        cout<<"ASSERT PASS :)"<<endl;
    }
    else
    {
        cout<<"ASSERT FAILS: "<<value<<" should be true"<<endl;
    }
}

void assertFalse(bool value)
{
    if(!value)
    {
        cout<<"ASSERT PASS :)"<<endl;
    }
    else
    {
        cout<<"ASSERT FAILS: "<<value<<" should be false"<<endl;
    }
}
