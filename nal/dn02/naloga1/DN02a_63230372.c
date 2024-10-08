#include <stdio.h>
#include <stdbool.h>

#define defaultState 0
#define stateA 1
#define stateB 2
#define stateC 3
#define stateF 4

int stateOf(char input);
int state_B(char input);
int state_C(char input);

int stateOf(char input)
{
	if (input == '0')
	{
		return stateA;
	}
	else if ((input >= '1') && (input <= '9'))
	{
		return stateB;
	}
	else if ((input == '+') || (input == '-'))
	{	
		return stateC;
	}
	return stateF;
}

int state_B(char input)
{
	if ((input < '0') || (input > '9'))
	{
		return stateF;
	}
	return stateB;
}

int state_C(char input)
{
	if (input == '0')
	{
		return stateA;
	}
	if (input >= '1' && input <= '9')
	{
		return stateB;
	}
	return stateF;
}

int state_A(char input)
{
	return stateF;
} 

void printState(int state)
{
	if ((state == stateF) || (state == stateC))
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
			if (state == stateA)
			{
				state = state_A(input);
			}
			else if (state == stateB)
			{
				state = state_B(input);
			}
			else if (state == stateC)
			{
				state = state_C(input);
			}
		}
		input = getchar();
	}
	printState(state);
	putchar('\n');
	return 0;
}


