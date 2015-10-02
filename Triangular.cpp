/*
 * Triangular.cpp
 *
 *  Created on: 30 Sep 2015
 *      Author: rona
 */

#include "Triangular.h"

Triangular::Triangular() {
	// TODO Auto-generated constructor stub
	this->setCount(3);

	cout << "Enter alpha,beta,gamma -> (Double) ";

	for(int x = this->getCount();x>0;x--)
	{
		double y;
		cin>>y;
		this->pushVariabel(y);
	}
	this->menu();
}

void Triangular::menu()
{

	this->getMembershipFn();
		double test;
		do
		{
			cout << "Masukkan nilai yang mau dicek : (-99 untuk keluar)" ;
			cin >> test;
			this->checkFuzzyValue(test);
		}
		while(test!=-99);
}

void Triangular::checkFuzzyValue(double Value)
{
	double alpha, beta, gamma;

	priority_queue<double> copy = this->getVariabel();

	gamma = copy.top(); copy.pop();
	beta = copy.top(); copy.pop();
	alpha = copy.top(); copy.pop();

	if(Value<=alpha) cout<< "Fuzzy Value = 0\n";
	else if(Value>alpha && Value<=beta)
	{
		cout << "Fuzzy Value = " << (Value-alpha)/(beta-alpha)<< endl;
	}
	else if(Value>beta && Value<=gamma)
	{
		cout << "Fuzzy Value = " << (gamma-Value)/(beta-alpha)<< endl;
	}
	else if(Value>=gamma) cout<< "Fuzzy Value = 0\n";


}

void Triangular::getMembershipFn()
{
	double alpha, beta, gamma;
	priority_queue<double> copy = this->getVariabel();

	gamma = copy.top(); copy.pop();
	beta = copy.top(); copy.pop();
	alpha = copy.top(); copy.pop();

	cout << "Membership Functionnya adalah : "<<endl;

	cout << "MF(x) = 0 jika x < " << alpha <<endl;
	cout << "MF(x) = (x-"<<alpha<<")/("<< beta - alpha <<") jika "<<alpha<<"< x <= "<<beta<<endl;
	cout << "MF(x) = (" << gamma << "-x)/("<< beta - alpha << ") jika "<<beta<<"< x <= "<<gamma<<endl;
	cout << "MF(x) = 0 jika x > " << gamma <<endl;


}
Triangular::~Triangular() {
	// TODO Auto-generated destructor stub
}


