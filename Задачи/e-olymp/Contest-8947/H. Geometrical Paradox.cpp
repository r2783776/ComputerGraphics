#include <iostream>
#include <cmath>

int n, r1, r2;
char c;
double res;

int main()
{
	scanf("%d", &n);
	
	while (n--)
	{
		scanf("%d", &r1);
		scanf("%c", &c);
		if (c == ' ')
		{
		    scanf("%d\n", &r2);
		    res = 2 * M_PI * r1 * r2;
        }
        else
        {
            res = M_PI * r1 * r1 / 8;
        }
        
		printf("%.4lf\n", res);
	}
	return 0;
}