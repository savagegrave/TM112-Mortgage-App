#pragma once
#include <iostream>
#include <string>

using namespace std;


namespace TM112Mortgage
{
	
#pragma region Declarations:

	// Using Doubles for this as it will make the maths alot easier to do.
	// Otherwise I would have to convert int values to doubles. 

	// the mXXXXX denotes Mortgage, this is incase I ever go back and expand anything here.
	double mRate = 0.05;                // mRate = Mortgage Rate of Interest.
	double mMortgage = 1000;            // mMortgage = Total Value of Mortgage
	double mPayment = 200;              // mPayment = Mortgage Payments
	double mInterest;                   // mInterest = Interest Value used for calulations later in the program.

#pragma endregion

	

	void getValues()
	{
		
		cout << "What is your Total Mortgage Amount? ";
		cin >> mMortgage;

		cout << "What is your Interest Rate? ";
		cin >> mRate;

		cout << "What is your Current Monthly Payments: ";
		cin >> mPayment;

	}

	void getPayments(double Mortgage, double Rate, double Payment)
	{
		cout << "Outstanding Mortgage Payment " << Mortgage << "\n";     // Start by Displaying the Mortgage Total:

		while (!(Mortgage == 0 || Mortgage < 0))
		{
			double Interest = Mortgage * Rate / 12;
			Mortgage = Mortgage + Interest - Payment;
			cout << "Outstanding Mortgage Payment: " << Mortgage << "\n";
		}
	}
}
