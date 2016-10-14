// This program is a driver for a testing the showFees function

#include "stdafx.h"
#include <iostream>
using namespace std;

// Prototypes
void showFees(double, int);

int main()
{
	// Constants for memebership rates
	const double ADULT = 40.0;
	const double SENIOR = 30.0;
	const double CHILD = 20.0;

	// Preform a test for adult membership
	cout << "Testing an adult membership...\n"
		<< "Calling the showFees function with arguments "
		<< ADULT << " and 10.\n";
	showFees(ADULT, 10);

	// Preform a test for senior citizen membership
	cout << "\nTesting a senior citizen membership....\n"
		<< "Calling the showFees function with arguments "
		<< SENIOR << " and 10.\n";
	showFees(SENIOR, 10);

	// Perform a test for senior citizen membership
	cout << "\nTesting a child membership...\n"
		<< "\nCalling the showFees function with arguments "
		<< CHILD << " and 10\n";
	showFees(CHILD, 10);
    return 0;
}

//***************************************************************
// Definition of function showFees. The memberRate parameter
// holds the number of months. The function display the total
// charges
//***************************************************************

void showFees(double memberRate, int months)
{
	cout << "The total charges are $"
		<< (memberRate * months) << endl;
}
