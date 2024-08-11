#include <stdio.h>
#include <stdbool.h>

#define defaultState 0
#define binary 1
#define decimal 2
#define decimal0 3
#define hexa 4
#define false 5

int stateOf(char input);
int binaryFun(char input);
int decimalFun(char input);
int hexaFun(char input);

int stateOf(char input)
{
	if ((input >= '1') && (input <= '9'))
	{
		return decimal;
	}

	if (input == '0')
	{
		input = getchar();
		if (input == 'x')
		{
			return hexa;
		}
		else if (input == 'b')
		{
			return binary;
		}
		else if ((input >= '0') && (input <= '7'))
		{
			return decimal0;
		}
	}
	return false;
}

int binaryFun(char input)
{
	if ((input < '0') || (input > '1'))
	{
		return false;
	}
	return binary;
}

int hexaFun(char input)
{
	if ((input >= '0' && input <= '9') || (input >= 'A' && input <= 'F'))
	{
		return hexa;
	}
	else
	{
		return false;
	}
}

int decimalFun(char input)
{
	if ((input < '0') || (input > '9'))
	{
		return false;
	}
	return decimal;
}

int decimal0Fun(char input)
{
	if ((input < '0') || (input > '7'))
	{
		return false;
	}
	return decimal0;
}

void printState(int state)
{
	if ((state == false))
	{
		putchar('0');
	}
	else
	{
		putchar('1');
	}
}

int main()
{
	char input = 0;
	int state = defaultState;
	int n;

	scanf("%d", &n);
	input = getchar();

	while (input != '\n')
	{

		if (input == ' ')
		{
			printState(state);
			state = defaultState;
			input = getchar();
		}

		if (state == defaultState)
		{
			state = stateOf(input);
		}
		else
		{
			if (state == binary)
			{
				state = binaryFun(input);
			}
			else if (state == hexa)
			{
				state = hexaFun(input);
			}
			else if (state == decimal)
			{
				state = decimalFun(input);
			}
			else if (state == decimal0)
			{
				state = decimal0Fun(input);
			}
		}
		input = getchar();
	}
	printState(state);
	putchar('\n');
	return 0;
}
