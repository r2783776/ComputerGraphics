#include <iostream>
#include <cmath>
using namespace std;

double len(double x1, double y1, double x2, double y2)
{
    return hypot(x2 - x1, y2 - y1);
}
    
int main()
{
    int n;
    cin >> n;
    
    const int VERTS = 4;
    int verts[VERTS][2];
    double sides[VERTS];
    
    for (int shape = 1; shape <= n; shape++)
    {
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

        double a = sides[0], b = sides[1], c = sides[2], d = sides[3];
        double d1 = len(verts[0][0], verts[0][1], verts[2][0], verts[2][1]);
        double d2 = len(verts[1][0], verts[1][1], verts[3][0], verts[3][1]);
        
        printf("Case %d: ", shape);
        
        if ((a == b) && (b == c) && (c == d))
        {
            printf((d1 == d2) ? "Square\n" : "Rhombus\n");
        }
        else
        {
            printf(((a == c) && (b == d)) ? "Rectangle\n" : "Other\n");
        }
    }
}#include <iostream>
#include <cmath>
using namespace std;

double len(double x1, double y1, double x2, double y2)
{
    return hypot(x2 - x1, y2 - y1);
}
    
int main()
{
    int n;
    cin >> n;
    
    const int VERTS = 4;
    int verts[VERTS][2];
    double sides[VERTS];
    
    for (int shape = 1; shape <= n; shape++)
    {
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

        double a = sides[0], b = sides[1], c = sides[2], d = sides[3];
        double d1 = len(verts[0][0], verts[0][1], verts[2][0], verts[2][1]);
        double d2 = len(verts[1][0], verts[1][1], verts[3][0], verts[3][1]);
        
        printf("Case %d: ", shape);
        
        if ((a == b) && (b == c) && (c == d))
        {
            printf((d1 == d2) ? "Square\n" : "Rhombus\n");
        }
        else
        {
            printf(((a == c) && (b == d)) ? "Rectangle\n" : "Other\n");
        }
    }

    return 0;
}