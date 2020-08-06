#include <stdio.h>
#define read(x) scanf("%d",&x)
#define write(x) printf("%d\n",x)
#define print(x) printf(x)

int cs512getinput(void)
{
    int cs512a;
    cs512a = 0;
    while (0 >= cs512a)
    {
	read(cs512a);
	if (0 > cs512a)
	{
	    print("I need a positive number: ");
	}
    }

    return cs512a;
}

int main() 
{
    int cs512coneradius, cs512coneheight;
    int cs512circleradius;
    int cs512trianglebase, cs512triangleheight;
    int cs512sphereradius;

    int cs512cone, cs512circle, cs512triangle, cs512sphere;
    int cs512pi;
    cs512pi = 3141;

    print("Give me a radius for the base of a cone: ");
    cs512coneradius = cs512getinput();
    print("Give me a height for a cone: ");
    cs512coneheight = cs512getinput();
    print("Give me a radius for a circle: ");
    cs512circleradius = cs512getinput();
    print("Give me a length for the base of a triangle: ");
    cs512trianglebase = cs512getinput();
    print("Give me a height for a triangle: ");
    cs512triangleheight = cs512getinput();
    print("Give me a radius for a sphere: ");
    cs512sphereradius = cs512getinput();

    cs512cone = (cs512pi*cs512coneradius*cs512coneradius*cs512coneheight + 500) / 3000;
    cs512circle = (cs512pi*cs512circleradius*cs512circleradius + 500) / 1000;
    cs512triangle = (cs512trianglebase*cs512triangleheight) / 2;
    cs512sphere = (4*cs512pi*cs512sphereradius*cs512sphereradius*cs512sphereradius+500) / 3000;

    print("The volume of the cone is: ");
    write(cs512cone);
    print("The area of the circle is: ");
    write(cs512circle);
    print("The area of the triangle is: ");
    write(cs512triangle);
    print("The volume of the sphere is: ");
    write(cs512sphere);
}
