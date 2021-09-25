#include <iostream>
#include <string>
#include "tests.h"

using namespace std;

void runTestSuite()
{
    TestDate();
    TestEmail();
    TestEmailBox();
    TestEmailBox2();
    TestFormatter();
    TestFormatter2();
    TestFormatter3();
    TestFormatter4();
}
// run test
int main()
{
    runTestSuite();
}
