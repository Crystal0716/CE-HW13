#include<stdio.h>
#include<iomanip>
#include<iostream>
using namespace std ;
int main()
{
	int a ;
	cout << "Enter an integer :" ;
	cin >> a ;
	int b[32] ;
	int c = 1 ;
	for ( int i = 0 ; i < 32 ; i++ )
	{
		b[i] = c & a ;
		c = c * 2 ;
		if ( b[i] < 0)
			b [i] = 1 ;
		else
		{
			if ( b[i] > 0 )
				b[i] = 1 ;
		}
	}
	for (int k = 31 ; k >= 0 ; k--)
	{
		if ( k > 0 )
			cout << b[k] << "," ;
		else
			cout << b[k] ;
	}
return 0;
}