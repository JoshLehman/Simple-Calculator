#include<iostream>
#include<string>

double num1, num2;
void Choose(double num1, double num2, char choice);
void Log(std::string str);
void Log(double r);
double LogIn(double &r);
char LogIn(char &c);
void DisplayMenu();
void Addition();
void Subtraction();
void Division();
void Multiplication();
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
		LogIn(choice);

		if (choice == '+')
		{
			Addition();
		}
		else if (choice == '-')
		{
			Subtraction();
		}
		else if (choice == '/')
		{
			Division();
		}
		else if (choice == '*')
		{
			Multiplication();
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

void DisplayMenu()
{
	Log("Choose what arithmetic operation you want to use and then pick two numbers.");
	Log("1. + for Addition");
	Log("2. - for Subtraction");
	Log("3. / for Division");
	Log("4. * for Multiplication");
}

void Addition()
{
	Log("First number");
	LogIn(num1);
	Log("Second number");
	LogIn(num2);
	double result = num1 + num2;
	Log(result);
	Log("Press y to continue or q to quite.");
}

void Subtraction()
{
	Log("First number");
	LogIn(num1);
	Log("Second number");
	LogIn(num2);
	double result = num1 - num2;
	Log(result);
	Log("Press y to continue or q to quite.");
}

void Division()
{
	Log("First number");
	LogIn(num1);
	Log("Second number");
	LogIn(num2);
	double result = num1 / num2;
	Log(result);
	Log("Press y to continue or q to quite.");
}

void Multiplication()
{
	Log("First number");
	LogIn(num1);
	Log("Second number");
	LogIn(num2);
	double result = num1 * num2;
	Log(result);
	Log("Press y to continue or q to quite.");
}

double LogIn(double &r)
{
	std::cin >> r;
	return r;
}

char LogIn(char &c)
{
	std::cin >> c;
	return c;
}

void Log(std::string str)
{
	std::cout << str << std::endl;
}

void Log(double r)
{
	std::cout << r << std::endl;
}
