/*
 * File: CrazyRandomSword.cpp
 * Author: Brandon <blh16b@my.fsu.edu>
 *
 * Created on February 2, 2019
 */

#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor){
	srand(time(NULL));
	double armorNegation = rand() % ((armor / 3)-2) + 2;
	double damage = (rand() % 94) + 7 - (armor - armorNegation);
	if(damage < 0){
		return 0;
	}
	return damage;
}
