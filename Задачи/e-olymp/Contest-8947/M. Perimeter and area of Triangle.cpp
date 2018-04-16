#include <iostream>
#include <cmath>
using namespace std;

double len(double x1, double y1, double x2, double y2)
{
    return hypot(x2 - x1, y2 - y1);
}

int main()
{
    const int VERTS = 3;
    double verts[VERTS][2];
    double sides[VERTS];
    
    for (int i = 0; i < VERTS; i++)
	{
        for (int j = 0; j < 2; j++)
            cin >> verts[i][j];
    }
	
    for (int i = 0; i < VERTS; i++)
    {
        sides[i] = len(verts[i][0], verts[i][1],
        verts[(i+1)%VERTS][0], verts[(i+1)%VERTS][1]);
    }

    double a = sides[0], b = sides[1], c = sides[2];
        
    double P = a + b + c;
    double p = P / 2;
    double S = sqrt(p * (p-a) * (p-b) * (p-c));

    printf("%.4f %.4f", P, S);

    return 0;
}
