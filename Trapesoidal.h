/*
 * Trapesoidal.h
 *
 *  Created on: 30 Sep 2015
 *      Author: rona
 */

#ifndef TRAPESOIDAL_H_
#define TRAPESOIDAL_H_
#include "Membership.h"

class Trapesoidal : protected Membership
{
public:
	Trapesoidal();
	virtual ~Trapesoidal();

	void checkFuzzyValue(double Value);
	void getMembershipFn();
	void menu();
};

#endif /* TRAPESOIDAL_H_ */
