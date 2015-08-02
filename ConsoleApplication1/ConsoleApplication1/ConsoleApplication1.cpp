// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>

using namespace std;
int main()
{
	long t, n,m,r1,r2,r3;
	cin >> t;
	for (; t > 0; t--)
	{
		cin >> n;
		cin >> m;
		if(m>n)
		{ 
			r1 = m / n;
			m = m % n;
		}
		else
		{ 
			r1 = 0;
		}
		if (n % 2 == 0)
		{
			if (m % 2 == 0)
			{
				r2 = m / 2;
				r2 = n - r2 + 1;
			}
			else
			{
				r2 = m / 2;
				r2++;
			}
		}
		else
		{
			if (m % 2 == 0)
			{
				r2 = m / 2;
				r2++;
				
			}
			else
			{
				r2 = m / 2;
				r2 = n - r2;
			}

		}
		cout << r2 << " " << r1 << endl;

	}

    return 0;
}

