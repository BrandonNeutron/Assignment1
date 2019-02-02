/*
 * File: SimpleHammer.h
 * Author: Brandon <blh16b@my.fsu.edu>
 *
 * Created on February 2, 2019
 */

#include <string>
#include "Weapon.h"

#ifndef SIMPLEHAMMER_H
#define SIMPLEHAMMER_H

/*
 * Defines behavior of simple hammer (hitpoints = 25, if armor < 30, ignores 100% of armor
 */

class SimpleHammer : public Weapon {
	public:
		SimpleHammer() : Weapon("Simple hammer", 25.0){
// Calls Weapon constructor with name value of Simple hammer and hitpoints value of 25
		}
		
		virtual ~SimpleHammer(){};
		virtual double hit(double armor);
};

#endif
