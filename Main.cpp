/*
 * Main.cpp
 *
 *  Created on: 30 Sep 2015
 *      Author: rona
 */
#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstdlib>
#include "Triangular.h"
#include "Trapesoidal.h"
using namespace std;

int main()
{
	while(1)
	{
		int a;
		cout 	<< "Enter 1 untuk Triangular " << endl
				<< "Enter 2 untuk Trapesoidal " << endl
				<< "Dan sembarang untuk Exit " << endl;
		cout	<< "Enter -> " ;
		cin >> a;

		if(a==1)
		{
			Triangular tri;
		}
		else if(a==2)
		{
			Trapesoidal trap;
		}
		else{
			cout<< "Goodbye!"<<endl; break;
		}

		system("cls");

	}
	return 0;
}



