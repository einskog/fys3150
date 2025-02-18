// Definitions for the constructor in the Particle class

#include <armadillo>
#include "Particle.hpp"

// Constructor
Particle::Particle(double q_in, double m_in, arma::vec r_in, arma::vec v_in)
{
    q = q_in;
    m = m_in;
    r = r_in;
    v = v_in;
}
