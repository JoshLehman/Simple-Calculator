#include<iostream>
#include<string>


double num1, num2;
void Choose(double num1, double num2, char choice);
void Log(std::string str);
void Log(double r);
void DisplayMenu();
char choice;

int main()
{
	Choose(num1, num2, choice);
}

void Choose(double num1, double num2, char choice)
{
	DisplayMenu();

	do
	{
		std::cin >> choice;

		if (choice == '+')
		{
			Log("First number");
			std::cin >> num1;
			Log("Second number");
			std::cin >> num2;
			double result = num1 + num2;
			Log(result);
			Log("Press y to continue or q to quite.");
		}
		else if (choice == '-')
		{
			Log("First number");
			std::cin >> num1;
			Log("Second number");
			std::cin >> num2;
			double result = num1 - num2;
			Log(result);
			Log("Press y to continue or q to quite.");
		}
		else if (choice == '/')
		{
			Log("First number");
			std::cin >> num1;
			Log("Second number");
			std::cin >> num2;
			double result = num1 / num2;
			Log(result);
			Log("Press y to continue or q to quite.");
		}
		else if (choice == '*')
		{
			Log("First number");
			std::cin >> num1;
			Log("Second number");
			std::cin >> num2;
			double result = num1 * num2;
			Log(result);
			Log("Press y to continue or q to quite.");
		}
		else if (choice == 'y')
		{
			system("CLS");
			DisplayMenu();
		}
		else
			Log("Invalid option please try again.");

	} while (choice != 'q' || choice == 'y');
}

void Log(std::string str)
{
	std::cout << str << std::endl;
}

void Log(double r)
{
	std::cout << r << std::endl;
}

void DisplayMenu()
{
	Log("Choose what arithmetic operation you want to use and then pick two numbers.");
	Log("1. + for Addition");
	Log("2. - for Subtraction");
	Log("3. / for Division");
	Log("4. * for Multiplication");
}