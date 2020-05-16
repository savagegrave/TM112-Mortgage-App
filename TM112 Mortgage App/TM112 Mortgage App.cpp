// TM112 Mortgage App.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std; // Makes my life easier, although I am aware this should not really be declared here.


#pragma region Declarations:
// Using Doubles for this as it will make the maths alot easier to do.
// Otherwise I would have to convert int values to doubles. 

// the mXXXXX denotes Mortgage, this is incase I ever go back and expand anything here.

double mRate = 0.05;                // mRate = Mortgage Rate of Interest.
double mMortgage = 1000;            // mMortgage = Total Value of Mortgage
double mPayment = 200;              // mPayment = Mortgage Payments
double mInterest;                   // mInterest = Interest Value used for calulations later in the program.

#pragma endregion

// Get the Values for the program to handle.



int main()
{
    // We will use this one now, however later we can call sub functions etc.

	cout << "Outstanding Mortgage Payment " << mMortgage << "\n";     // Start by Displaying the Mortgage Total:

	while (!(mMortgage == 0 || mMortgage < 0))
	{
		mInterest = mMortgage * mRate / 12;
		mMortgage = mMortgage + mInterest - mPayment;
		cout << "Outstanding Mortgage Payment: " << mMortgage << "\n";
	}
}


