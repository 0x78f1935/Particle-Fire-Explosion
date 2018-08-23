/*
 * Particle.h
 *
 *  Created on: Aug 21, 2018
 *      Author: 7700K
 */

#ifndef PARTICLE_H_
#define PARTICLE_H_

namespace GUI {

struct Particle {
	double m_x;
	double m_y;

private:
	double m_speed;
	double m_direction;

private:
	void init();

public:
	virtual ~Particle();
	Particle();
	void update(int interval);
};

} /* namespace GUI */

#endif /* PARTICLE_H_ */
