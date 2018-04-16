#include <iostream>
#include <cmath>
using namespace std;

double sqr(double x)
{
    return x*x;
}

double len(double x1, double y1, double z1, double x2, double y2, double z2)
{
    return sqrt(sqr(x2-x1) + sqr(y2-y1) + sqr(z2-z1));
}
    
int main()
{
    const int VERTS = 3;
	double verts[VERTS][3];
	double sides[VERTS];
	
	for (int i = 0; i < VERTS; i++)
	{
        for (int j = 0; j < 3; j++)
            cin >> verts[i][j];
	}
	
    for (int i = 0; i < VERTS; i++)
    {
        sides[i] = len(verts[i][0], verts[i][1], verts[i][2],
            verts[(i+1)%VERTS][0], verts[(i+1)%VERTS][1], verts[(i+1)%VERTS][2]);
    }

    double a = sides[0], b = sides[1], c = sides[2];
	
    double p, r, R;
	p = (a+b+c) / 2;
    r = sqrt((-a+b+c)*(a-b+c)*(a+b-c) / (4*(a+b+c)));
    R = (a*b*c) / (4 * sqrt(p*(p-a)*(p-b)*(p-c)));
    
	double res = sqr(r) / sqr(R);
	
	if (res >= 0.001)
	{
        printf("%.3f", res);
	}
	else
	{
	    printf("Zero!");
	}

    return 0;
}