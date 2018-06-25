//Additional sources file for function definitions
#include "stdafx.h"
#include <iostream>
#include "Calculation.h"

using std::cout;
using std::cin;

//Adds the numbers inputed
void addNumbers(double& pX, double& pY, double& summ)
{
	summ = pX + pY;
	cout << "\nThe sum is: " << summ << "\n";
}

//Subtracts the Numbers inputed
void subNumbers(double& pX, double& pY, double &diff)
{
		diff = pX - pY;
		cout << "The difference is: " << diff << "\n";
}

//Multiplies the numbers inputed
void multNumbers(double& pX, double& pY, double& product)
{
	product = pX * pY;
	cout << "The Product is : " << product << "\n";
}

//Divides the numbers inputed
void divNumbers(float const* pX, float const* pY, float* quotient)
{
	*quotient = *pX / *pY;
	cout << "The quotient is : " << *quotient << "\n";
}