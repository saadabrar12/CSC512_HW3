#include <stdio.h>
#define read(x) scanf("%d",&x)
#define write(x) printf("%d\n",x)
#define print(x) printf(x)

int cs512square(int cs512x)
{
    return (cs512x*cs512x+500)/1000;
}

int cs512complex_abs_squared(int cs512real, int cs512imag)
{
    return cs512square(cs512real)+cs512square(cs512imag);
}

int cs512check_for_bail(int cs512real, int cs512imag)
{
    if (cs512real > 4000 || cs512imag > 4000)
    {
	return 0;
    }
    if (1600 > cs512complex_abs_squared(cs512real, cs512imag))
    {
	return 0;
    }
    return 1;
}

int cs512absval(int cs512x)
{
    if (cs512x < 0)
    {
	return -1 * cs512x;
    }
    return cs512x;
}

int cs512checkpixel(int cs512x, int cs512y)
{
    int cs512real, cs512imag, cs512temp, cs512iter, cs512bail;
    cs512real = 0;
    cs512imag = 0;
    cs512iter = 0;
    cs512bail = 16000;
    while (cs512iter < 255)
    {
	cs512temp = cs512square(cs512real) - cs512square(cs512imag) + cs512x;
	cs512imag = ((2 * cs512real * cs512imag + 500) / 1000) + cs512y;
	cs512real = cs512temp;

	if (cs512absval(cs512real) + cs512absval(cs512imag) > 5000)
	{
	    return 0;
	}
	cs512iter = cs512iter + 1;
    }

    return 1;
}

int main() 
{
    int cs512x, cs512y, cs512on;
    cs512y = 950;

    while (cs512y > -950)
    {
	cs512x = -2100;
	while (cs512x < 1000)
	{
	    cs512on = cs512checkpixel(cs512x, cs512y);
	    if (1 == cs512on)
	    {
		print("X");
	    }
	    if (0 == cs512on)
	    {
		print(" ");
	    }
	    cs512x = cs512x + 40;
	}
	print("\n");

	cs512y = cs512y - 50;
    }
}

