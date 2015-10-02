/*
 * Triangular.h
 *
 *  Created on: 30 Sep 2015
 *      Author: rona
 */

#ifndef TRIANGULAR_H_
#define TRIANGULAR_H_
#include "Membership.h"

class Triangular : protected Membership
{
public:
	Triangular();
	virtual ~Triangular();
	void checkFuzzyValue(double Value);
	void getMembershipFn();
	void menu();



};

#endif /* TRIANGULAR_H_ */
