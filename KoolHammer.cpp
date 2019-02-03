/*
 * File: KoolHammer.cpp
 * Author: Brandon <blh16b@my.fsu.edu>
 *
 * Created February 2, 2019
 */

#include "KoolHammer.h"

double KoolHammer::hit(double armor){
	double damage;
	if(armor < 60){
		damage = hitpoints;
	} else{
		damage = hitpoints - armor;
	}
	if(damage < 0)
		return 0;
	return damage;
}
