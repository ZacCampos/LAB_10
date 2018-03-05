/*******************************************************************************
 * AUTHORS		: Zac Campos & Bryce Hunt
 * STUDENT ID	: 1058476 & 1051941
 * LAB #9		: Eclipse Lab
 * CLASS		: CS1A
 * SECTION		: MW 8am
 * DUE DATE		: 3/7/18
 ******************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/*******************************************************************************
 * Intro to Programming
 * -----------------------------------------------------------------------------
 * This program will sum two integers inputted by the user
 * -----------------------------------------------------------------------------
 * INPUT:
 * 		<There are two inputs, they are two integers that will be used to
 * 		 calculate the sum.>
 *
 * OUTPUT:
 * 	<This program will output the equation with the sum of the two integers>
 ******************************************************************************/


int main()
{
	/***************************************************************************
	 * CONSTANTS
	 * -------------------------------------------------------------------------
	 * OUTPUT - USED FOR CLASS HEADING
	 * -------------------------------------------------------------------------
	 * PROGRAMMERS	: Programmers' Names
	 * CLASS		: Students' Course
	 * SECTION		: Class Days and Times
	 * LAB_NUM		: Lab Number (specific to this lab)
	 * LAB_NAME		: Title of the Lab
	 **************************************************************************/

	const char PROGRAMMERS[] = "Zac Campos & Bryce Hunt";
	const char CLASS[]		= "CS1A";
	const char SECTION[]	= "MW: 8am";
	const int  LAB_NUM		= 10;
	const char LAB_NAME[]	= "Intro to Programming";
	// variable declarations go here
	int firstNum;		// IN, CALC & OUT - first value to sum

	int secondNum;		// IN, CALC & OUT - second value to sum

	int sum = 0;		// CALC & OUT	  - sum of 2 integers input

	float average = 0;  // CALC & OUT	  - average of 2 integers input

	// OUTPUT - Class Heading
	cout << left;
	cout << "***************************************************\n";
	cout << "*  PROGRAMMED BY : "	<< PROGRAMMERS 	<< endl;
	cout << "*  "		<< setw(14) << "CLASS"		<< ": " << CLASS	<< endl;
	cout << "*  "		<< setw(14)	<< "SECTION"	<< ": " << SECTION  << endl;
	cout << "*  LAB #"	<< setw(9)	<< LAB_NUM		<< ": "	<< LAB_NAME	<< endl;
	cout << "***************************************************\n\n";
	cout << right;

	/***************************************************************************
	 * INPUT - Reads in two inputs from the user
	 **************************************************************************/
	cout << "Enter the first integer: ";
	cin	 >> firstNum;

	cout << "Enter the second integer: ";
	cin >> secondNum;
	/***************************************************************************
	 * PROCESSING - Calculates the sum & average of the two inputs
	 **************************************************************************/
	sum = firstNum + secondNum;

	average = (firstNum + secondNum) / 2.0;
	/***************************************************************************
	 * OUTPUT - The inputs and the sum in the following format:
	 * 					  firstNum + secondNum = sum
	 * 	For example, if firstNum = 32 & secondNum = 41 output will be:
	 * 		  32 + 41 = 73
	 **************************************************************************/
	cout << endl << firstNum << " + " << secondNum << " = " << sum << endl;
	cout << fixed << setprecision(2);
	cout << "The average is: " << average << endl;
	return 0;
}
