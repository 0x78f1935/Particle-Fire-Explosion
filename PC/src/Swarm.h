/*
 * Swarm.h
 *
 *  Created on: Aug 21, 2018
 *      Author: 7700K
 */

#ifndef SWARM_H_
#define SWARM_H_

#include "particle.h"

namespace GUI {

class Swarm {
public:
	const static int NPARTICLES = 5000;

private:
	Particle * m_pParticles;
	int lastTime;

public:
	Swarm();
	virtual ~Swarm();
	void update(int elapsed);

	const Particle * const getParticles() {
		return m_pParticles;
	}
	;
};

} /* namespace GUI */

#endif /* SWARM_H_ */
