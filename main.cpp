#include <iostream>
using namespace std;


#include "random.h"


int main()
{
  srand(time(0));

  Randomizer test;
  unsigned int temp = test.randomBetween(1,10);
  cout << temp << '\n';



  return 0;
}
