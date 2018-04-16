#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const int VERTS = 4;
    double verts[VERTS][2];
    double vecs[VERTS][2];
    int rightAngles = 0;
    
    for (int i = 0; i < VERTS; i++)
    {
    	for (int j = 0; j < 2; j++)
    	{
    	    cin >> verts[i][j];
    	}
    }
    
    for (int i = 0; i < VERTS - 1; i++)
    {
        vecs[i][0] = verts[i+1][0] - verts[i][0];
        vecs[i][1] = verts[i+1][1] - verts[i][1];
    }
    vecs[VERTS-1][0] = verts[0][0] - verts[VERTS-1][0];
    vecs[VERTS-1][1] = verts[0][1] - verts[VERTS-1][1];
    
    
    for (int i = 0; i < VERTS - 1; i++)
    {
        if (vecs[i][0]*vecs[i+1][0] + vecs[i][1]*vecs[i+1][1] == 0) rightAngles++;
    }

    if (vecs[VERTS-1][0]*vecs[0][0]+vecs[VERTS-1][1]*vecs[0][1] == 0) rightAngles++;
    
    cout << rightAngles;
    
    return 0;
}