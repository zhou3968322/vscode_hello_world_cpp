#include "../include/c_father.h"
#include<iostream>

CFATHER::CFATHER()
{
    TestFunc();
}

void CFATHER::TestFunc()
{
    std::cout << "call father func\n";
}

void CFATHER::CallOneFunc()
{
    TestFunc();
}