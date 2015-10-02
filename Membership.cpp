/*
 * Membership.cpp
 *
 *  Created on: 30 Sep 2015
 *      Author: rona
 */

#include "Membership.h"

Membership::Membership() {

	//this->setLinguisticVars();
}

Membership::~Membership() {
	// TODO Auto-generated destructor stub
}

const priority_queue<double>& Membership::getVariabel() const {
	return variabel;
}

void Membership::setVariabel(const priority_queue<double>& variabel) {
	this->variabel = variabel;
}

void Membership::pushVariabel(double newVariabel) {
	this->variabel.push(newVariabel);
}

int Membership::getCount() const {
	return count;
}

void Membership::setCount(int count) {
	this->count = count;
}

void Membership::checkFuzzyValue(double Value)
{
}

void Membership::getMembershipFn() {
}

void Membership::setLinguisticVars()
{
	cout << "Enter variabel linguistik untuk 0 : " ; cin >> this->LinguisticVars[0];
	cout << "Enter variabel linguistik untuk 1 : " ; cin >> this->LinguisticVars[1];
}
void Membership::menu() {
}
