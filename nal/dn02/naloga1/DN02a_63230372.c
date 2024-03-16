// doesnt work
#include <stdio.h>
#include <stdbool.h>

#define defaultState 0
#define stateA 1
#define stateB 2
#define stateC 3
#define stateF 4

int stateOf(char input)
{
    int state = 0;

    if (input == '0')
    {
        state = stateA;
    }
    else if ((input >= '1') && (input <= '9'))
    {
        state = stateB;
    }
    else if ((input == '+') || (input == '-'))
    {
        state = stateC;
    }
    return state;
}

int state_B(char input)
{
    int state = 0;

    if ((input >= '0') && (input <= '9'))
    {
        state = stateB;
    }
    else
    {
        state = stateF;
    }

    return state;
}

int state_C(char input)
{
    int state = 0;

    if ((input >= '0') && (input <= '9'))
    {
        state = stateC;
    }
    else
    {
        state = stateF;
    }
    return state;
}

int main()
{
    //dopisi main, ne dela pravilno, sprinta eno premalo
    int n;
    scanf("%d", &n);

    char input = 0;
    bool first = true;
    int state = 0;

    input = getchar();

    while (input != '\n')
    {
        if (first)
        {
            state = stateOf(input);
        }

        if (!first)
        {

            switch (state)
            {
            case 1:
                state = stateF;
                break;
            case 2:
                state = state_B(input);
                break;
            case 3:
                if (input == '0')
                {
                }
                state = state_C(input);
                break;

            default:
                break;
            }
        }
        first = false;
        input = getchar();

        if (input == ' ')
        {
            if (state == stateF)
            {
                putchar('0');
            }
            else
            {
                putchar('1');
            }

            first = true;
            input = getchar();
        }
        if (input == '\n')
        {
            if (state == stateF)
            {
                putchar('0');
            }
            else
            {
                putchar('1');
            }
            break;
        }
    }

    putchar('\n');
    return 0;
}
