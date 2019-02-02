/*
 * File: SimpleHammer.cpp
 * Author: Brandon <blh16b@my.fsu.edu>
 *
 * Created on February 2, 2019
 */

#include "SimpleHammer.h"

double SimpleHammer::hit(double armor){
	double damage;
	if(armor < 30.0){
		damage = hitpoints;
	} else{
		damage = hitpoints - armor;
	}
	return damage;
}
