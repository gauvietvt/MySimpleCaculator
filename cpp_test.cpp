#include <iostream>
using namespace std;

int add(float a, float b)
{
	return a + b;
}

float divide(float a, float b)
{
	return a / b;
}

float sub(float a, float b)
{
	return a - b;
}

float multi(float a, float b)
{
	return a * b;
}

int input(float a, char b, float c)
{
	cin >> a >> b >> c;
	return 0;
}

void xu_ly(float a, char b, float c)
{
	if (b == '+')
	{
		cout << add(a, c) << endl;
	}

	if (b == '-')
	{
		cout << sub(a, c) << endl;
	}

	if (b == '*')
	{
		cout << multi(a, c) << endl;
	}

	if (b == '/')
	{
		cout << divide(a, c) << endl;
	}
}

int main()
{
	
	while (true)
	{
		cout << "\n-------------Caculator-----------\n";

		float a, b;
		char c;
		cin >> a >> c >> b;
		xu_ly(a, c, b);
		system("pause");
		system("cls");
	}
}