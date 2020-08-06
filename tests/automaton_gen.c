#include <stdio.h>
#define read(x) scanf("%d",&x)
#define write(x) printf("%d\n",x)
#define print(x) printf(x)

void cs512state_0(void);
void cs512state_1(void);
void cs512state_2(void);
void cs512state_3(void);

// function to get the next digit
int cs512getnextdigit(void) 
{
    int cs512n;
    while (0 == 0) 
    {
	print("Give me a number (-1 to quit): ");
	read(cs512n);
	if (-1 <= cs512n && 1 >= cs512n) 
	{
	    break;
	}
	print("I need a number that's either 0 or 1.\n");
    }

    return cs512n;
}

// state_0 is the initial state
void cs512state_0(void) 
{
    int cs512a;
    cs512a = cs512getnextdigit();
    if (-1 == cs512a)
    {
	print("You gave me an even number of 0's.\n");
	print("You gave me an even number of 1's.\n");
	print("I therefore accept this input.\n");
	return;
    }
    if (0 == cs512a)
    {
	cs512state_2();
    }
    if (1 == cs512a)
    {
	cs512state_1();
    }
}

void cs512state_1(void) 
{
    int cs512a;
    cs512a = cs512getnextdigit();
    if (-1 == cs512a)
    {
	print("You gave me an even number of 0's.\n");
	print("You gave me an odd number of 1's.\n");
	print("I therefore reject this input.\n");
	return;
    }
    if (0 == cs512a)
    {
	cs512state_3();
    }
    if (1 == cs512a)
    {
	cs512state_0();
    }
}

void cs512state_2(void) 
{
    int cs512a;
    cs512a = cs512getnextdigit();
    if (-1 == cs512a)
    {
	print("You gave me an odd number of 0's.\n");
	print("You gave me an even number of 1's.\n");
	print("I therefore reject this input.\n");
	return;
    }
    if (0 == cs512a)
    {
	cs512state_0();
    }
    if (1 == cs512a)
    {
	cs512state_3();
    }
}

void cs512state_3(void) 
{
    int cs512a;
    cs512a = cs512getnextdigit();
    if (-1 == cs512a)
    {
	print("You gave me an odd number of 0's.\n");
	print("You gave me an odd number of 1's.\n");
	print("I therefore reject this input.\n");
	return;
    }
    if (0 == cs512a)
    {
	cs512state_1();
    }
    if (1 == cs512a)
    {
	cs512state_2();
    }
}

int main() 
{
    cs512state_0();
}
