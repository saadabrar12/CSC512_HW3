#include <stdio.h>
#define read(x) scanf("%d",&x)
#define write(x) printf("%d\n",x)
#define print(x) printf(x)

int cs512array_1[16];
int cs512array_2[16];
int cs512array_3[16];
int cs512array_4[16];

void cs512populate_arrays(void)
{
    cs512array_1[0] = 0; cs512array_2[0] = 15; cs512array_3[0] = 5; cs512array_4[0] = 13;
    cs512array_1[1] = 1; cs512array_2[1] = 14; cs512array_3[1] = 5; cs512array_4[1] = 9;
    cs512array_1[2] = 2; cs512array_2[2] = 13; cs512array_3[2] = 5; cs512array_4[2] = 12;
    cs512array_1[3] = 3; cs512array_2[3] = 12; cs512array_3[3] = 5; cs512array_4[3] = 1;
    cs512array_1[4] = 4; cs512array_2[4] = 11; cs512array_3[4] = 5; cs512array_4[4] = 0;
    cs512array_1[5] = 5; cs512array_2[5] = 10; cs512array_3[5] = 5; cs512array_4[5] = 14;
    cs512array_1[6] = 6; cs512array_2[6] = 9; cs512array_3[6] = 5; cs512array_4[6] = 3;
    cs512array_1[7] = 7; cs512array_2[7] = 8; cs512array_3[7] = 5; cs512array_4[7] = 2;
    cs512array_1[8] = 8; cs512array_2[8] = 7; cs512array_3[8] = 5; cs512array_4[8] = 11;
    cs512array_1[9] = 9; cs512array_2[9] = 6; cs512array_3[9] = 5; cs512array_4[9] = 8;
    cs512array_1[10] = 10; cs512array_2[10] = 5; cs512array_3[10] = 5; cs512array_4[10] = 6;
    cs512array_1[11] = 11; cs512array_2[11] = 4; cs512array_3[11] = 5; cs512array_4[11] = 4;
    cs512array_1[12] = 12; cs512array_2[12] = 3; cs512array_3[12] = 5; cs512array_4[12] = 5;
    cs512array_1[13] = 13; cs512array_2[13] = 2; cs512array_3[13] = 5; cs512array_4[13] = 10;
    cs512array_1[14] = 14; cs512array_2[14] = 1; cs512array_3[14] = 5; cs512array_4[14] = 7;
    cs512array_1[15] = 15; cs512array_2[15] = 0; cs512array_3[15] = 5; cs512array_4[15] = 15;
}

void cs512print_arrays(void)
{
    int cs512idx, cs512bound;
    cs512bound = 16;
    print("Array_1:\n");
    cs512idx = 0;
    while (cs512idx < cs512bound)
    {
	write(cs512array_1[cs512idx]);
	cs512idx = cs512idx + 1;
    }

    print("\nArray_2:\n");
    cs512idx = 0;
    while (cs512idx < cs512bound)
    {
	write(cs512array_2[cs512idx]);
	cs512idx = cs512idx + 1;
    }

    print("\nArray_3:\n");
    cs512idx = 0;
    while (cs512idx < cs512bound)
    {
	write(cs512array_3[cs512idx]);
	cs512idx = cs512idx + 1;
    }

    print("\nArray_4:\n");
    cs512idx = 0;
    while (cs512idx < cs512bound)
    {
	write(cs512array_4[cs512idx]);
	cs512idx = cs512idx + 1;
    }
    print("\n");    
}

int main() 
{
    int cs512idx, cs512bound, cs512temp;
    cs512bound = 16;

    cs512populate_arrays();
    cs512print_arrays();

    cs512bound = 16;

    cs512idx = 0;
    while (cs512idx < cs512bound - 1)
    {
	if (cs512array_1[cs512idx] > cs512array_1[cs512idx + 1])
	{
	    cs512temp = cs512array_1[cs512idx];
	    cs512array_1[cs512idx] = cs512array_1[cs512idx + 1];
	    cs512array_1[cs512idx + 1] = cs512temp;
	    cs512idx = 0;
	    continue;
	}
	
	cs512idx = cs512idx + 1;
    }

    cs512idx = 0;
    while (cs512idx < cs512bound - 1)
    {
	if (cs512array_2[cs512idx] > cs512array_2[cs512idx + 1])
	{
	    cs512temp = cs512array_2[cs512idx];
	    cs512array_2[cs512idx] = cs512array_2[cs512idx + 1];
	    cs512array_2[cs512idx + 1] = cs512temp;
	    cs512idx = 0;
	    continue;
	}
	
	cs512idx = cs512idx + 1;
    }


    cs512idx = 0;
    while (cs512idx < cs512bound - 1)
    {
	if (cs512array_3[cs512idx] > cs512array_3[cs512idx + 1])
	{
	    cs512temp = cs512array_1[cs512idx];
	    cs512array_3[cs512idx] = cs512array_3[cs512idx + 1];
	    cs512array_3[cs512idx + 1] = cs512temp;
	    cs512idx = 0;
	    continue;
	}
	
	cs512idx = cs512idx + 1;
    }

    cs512idx = 0;
    while (cs512idx < cs512bound - 1)
    {
	if (cs512array_4[cs512idx] > cs512array_4[cs512idx + 1])
	{
	    cs512temp = cs512array_4[cs512idx];
	    cs512array_4[cs512idx] = cs512array_4[cs512idx + 1];
	    cs512array_4[cs512idx + 1] = cs512temp;
	    cs512idx = 0;
	    continue;
	}
	
	cs512idx = cs512idx + 1;
    }

    cs512print_arrays();
}

