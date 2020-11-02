#include "pch.h"
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{

	double a, b, h, y, s, p;
	int n, i, x;
	
	cin >> a >> b >> n;
	h = (b - a);
	x = a;
	do
	{
		p = s = 1;
		for (i = 1; i <= n; i++)
		{
			p *= pow((-1),i) * pow(x,2)/2*i;
			s += p;
		}
		y = cos(x);
		
		x += h;
	} 
	while (x <= b + h/2);
	cout << endl;
	return 0;
}

