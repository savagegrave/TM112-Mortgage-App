// TM112 Mortgage App.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include "SavConsoleWindow.h"
#include "TM112Mortgage.h"                                      // Header File
using namespace TM112Mortgage;                                  // Namespace within the header file.



int main()
{
    SavageWindow::setupWindow();                                //Setsup the ConsoleWindow
    TM112Mortgage::getValues();                                 // Get the Values we need from the user
    TM112Mortgage::getPayments(mMortgage, mRate, mPayment);     // Show the results to the user
    
}


