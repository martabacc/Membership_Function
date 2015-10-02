/*
 * Trapesoidal.cpp
 *
 *  Created on: 30 Sep 2015
 *      Author: rona
 */

#include "Trapesoidal.h"

Trapesoidal::Trapesoidal() {
	// TODO Auto-generated constructor stub

	this->setCount(4);
	cout << "Enter alpha,beta,gamma,theta -> (Double) ";

	for(int x = this->getCount();x>0;x--)
	{
		double y;
		cin>>y;
		this->pushVariabel(y);
	}

	this->menu();

}

void Trapesoidal::menu() {

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


void Trapesoidal::checkFuzzyValue(double Value) {
	double alpha, beta, gamma, teta;

		priority_queue<double> copy = this->getVariabel();

		teta = copy.top(); copy.pop();
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
			cout << "Fuzzy Value = 1\n";
		}
		else if(Value>gamma && Value<=teta)
		{
			cout << "Fuzzy Value = " << (gamma-Value)/(teta-gamma)<< endl;
		}
		else if(Value>=teta) cout<< "Fuzzy Value = 0\n";

}

void Trapesoidal::getMembershipFn()
{
	double alpha, beta, gamma,teta;
		priority_queue<double> copy = this->getVariabel();
		teta = copy.top();copy.pop();
		gamma = copy.top(); copy.pop();
		beta = copy.top(); copy.pop();
		alpha = copy.top(); copy.pop();

		cout << "Membership Functionnya adalah : "<<endl;

		cout << "MF(x) = 0 jika x < " << alpha <<endl;
		cout << "MF(x) = (x-"<<alpha<<")/("<< beta - alpha <<") jika "<<alpha<<" < x <= "<<beta<<endl;
		cout << "MF(x) = 1 jika "<<beta<<" x <= "<<gamma<<endl;
		cout << "MF(x) = (" << gamma << "-x)/("<< teta - gamma << ") jika "<<gamma<<"<  x <= "<<teta<<"\n";
		cout << "MF(x) = 0 jika x > " << teta <<"\n";

}

Trapesoidal::~Trapesoidal() {
	// TODO Auto-generated destructor stub
}

