/*
 * Membership.h
 *
 *  Created on: 30 Sep 2015
 *      Author: rona
 */

#ifndef MEMBERSHIP_H_
#define MEMBERSHIP_H_

#include <cstdio>
#include <iostream>
#include <vector>
#include <utility>
#include <queue>
#include <cmath>
#include <string>
using namespace std;

class Membership
{
private:
	priority_queue<double> variabel;
	string LinguisticVars[2];

	int count;


public:
	Membership();
	virtual ~Membership();
	const priority_queue<double>& getVariabel() const;
	void setVariabel(const priority_queue<double>& variabel);
	void pushVariabel(double newVariabel);
	void checkFuzzyValue(double Value);
	void getMembershipFn();
	void setLinguisticVars();
	int getCount() const;
	void setCount(int);

	void menu();
	const string*& getLinguisticVars() const;
};

#endif /* MEMBERSHIP_H_ */
