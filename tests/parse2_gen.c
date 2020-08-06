#include <stdio.h>
#define read(x) scanf("%d",&x)
#define write(x) printf("%d\n",x)
#define print(x) printf(x)

void cs512bar@(void)
{
    int cs512x, cs512y;
    if (cs512x > cs512y)
    {
	return;
    }

    cs512x = cs512y;
    return;
}

void cs512foo(void)
{
    cs512bar@();
}

int main(void)
{
    cs512foo();
}
Invalid input : Not a valid token - @(void)
Invalid input : Not a valid token - @();
