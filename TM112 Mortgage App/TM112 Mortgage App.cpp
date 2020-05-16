// TM112 Mortgage App.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "TM112Mortgage.h"
using namespace TM112Mortgage;



int main()
{
    TM112Mortgage::getValues();                                 // Get the Values we need from the user
    TM112Mortgage::getPayments(mMortgage, mRate, mPayment);     // Show the results to the user
    
}


