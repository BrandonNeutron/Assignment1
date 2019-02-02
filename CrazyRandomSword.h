/*
 * File: CrazyRandomSword.h
 * Author: Brandon <blh16b@my.fsu.edu>
 *
 * Created on February 2, 2019
 */

#include <string>
#include <cstdlib>
#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

/*
 * Defines behavior of Crazy Random sword (hitpoints = random integer 7 < x < 100, ignores 
 * random amount of armor between 2 points to a third of armor points)
 */
class CrazyRandomSword : public Weapon{
	public:
		CrazyRandomSword() : Weapon("Crazy random sword", 0.0){};
// Constructor calls Weapon constructor with the name Crazy random sword, and hitpoints set
// to 0, as the hit is random every time
		virtual ~CrazyRandomSword(){};
		virtual double hit(double armor);
};

#endif
