// calculator with headers.cpp : Defines the entry point for the console application.
//This is a calculator
//This allows the user to add,subtract, multiply, and divide 2 numbers
//Now you can have decimal numbers when you add, subtract, multiply and divide.
//And the program allows for negative numbers



#include "stdafx.h"
#include <iostream>
#include "Calculation.h"

using std::cout;
using std::cin;


int main()
{
	// Initializes a variable that will control the loop
	char again = 'n';

	do
	{
		//initalize variables
		int numofProblems;

		cout << "Welcome to Calculator with headers\n\n";
		cout << "you'll be asked for\n\t-How many problems you want to solve\n\t-What type of problem\n\t-The first number\n\t-And the second number.\nThen the answer will be shown after each problem.\n\n";
		cout << "How many problems would you like me to solve?: ";
		cin >> numofProblems;
		system("cls");

		//this variable keeps track of the problem the program is on
		int problemNum = 1;

		if (numofProblems != 0)
		{

			for (int i = 0; i < numofProblems; ++i)
			{
				//initalize more variables
				char typeOfProblem;
				double firstNumber = 0.0f;
				double secondNumber = 0.0f;
				float divFirstNum;
				float divSecondNum;
				double summ = 0.0f;
				double diff = 0.0f;
				double product = 0.0f;
				float quotient;

				//Display the problem number they are on
				cout << "Problem #" << problemNum << "\n\n\n";

				//ask what type of problem they want the program to solve and makes sure the input is lower case by lowering it
				cout << "What type of problem do you want me to solve?\n+ = add,  - = Subtract,  * = Multiply,  / = Divide:   ";
				cin >> typeOfProblem;
				typeOfProblem = tolower(typeOfProblem);
				system("cls");

				//These if and else statements executes certain functions based on what type of problem the user wants the program to solve.
				//Adds
				if (typeOfProblem == '+')
				{
					cout << "Input First Number: ";
					cin >> firstNumber;
					system("cls");

					cout << "\n\nInput Second Number: ";
					cin >> secondNumber;
					system("cls");
					addNumbers(firstNumber, secondNumber, summ);
					++problemNum;

				}
				//Subtract
				else if (typeOfProblem == '-')
				{
					cout << "Input First Number: ";
					cin >> firstNumber;

					cout << "\n\nInput Second Number: ";
					cin >> secondNumber;
					system("cls");
					subNumbers(firstNumber, secondNumber, diff);
					++problemNum;
				}
				//Multiply
				else if (typeOfProblem == '*')
				{
					cout << "Input First Number: ";
					cin >> firstNumber;

					cout << "\n\nInput Second Number: ";
					cin >> secondNumber;
					system("cls");
					multNumbers(firstNumber, secondNumber, product);
					++problemNum;
				}
				//Divide
				else if (typeOfProblem == '/')
				{
					cout << "Input First Number: ";
					cin >> divFirstNum;

					cout << "\n\nInput Second Number: ";
					cin >> divSecondNum;
					system("cls");
					divNumbers(&divFirstNum, &divSecondNum, &quotient);
					++problemNum;
				}
			}

			//Asks the player if they would like to play again
			cout << "Would you like to play again?: ";
			cin >> again;
			again = tolower(again);
			system("cls");
		}

		//if the user wants the program to solve no problems then it quits the program
		else if (numofProblems == 0)
		{
			cout << "GoodBye.\n";
			system("pause");
			return 0;
		}
	} while (again == 'y');

	cout << "GoodBye.\n";
	system("pause");
	return 0;
}



