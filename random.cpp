#include "random.h"

Randomizer::Randomizer()
{

}

unsigned int Randomizer::randomBetween(unsigned int minimum, unsigned int maximum)
{
  int random = (rand() % maximum) + minimum;
  return random;

}
