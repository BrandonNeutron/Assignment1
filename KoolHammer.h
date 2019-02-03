/*
 * File: KoolHammer.h
 * Author: Brandon <blh16b@my.fsu.edu
 *
 * Created on February 2, 2019
 */

#include <string>
#include "Weapon.h"

#ifndef KOOLHAMMER_H
#define KOOLHAMMER_H

/*
 * Defines behavior of a kool hammer (hitpoint = 50, if armor < 60, ignores all armor)
 */

class KoolHammer : public Weapon {
	public:
		KoolHammer() : Weapon("Kool hammer", 50.0){};
		virtual ~KoolHammer(){};
		virtual double hit(double armor);
};

#endif
