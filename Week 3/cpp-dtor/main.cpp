/**
 * C++ program invoking Cube's destructor several times.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include "Cube.h"
using uiuc::Cube;

double cube_on_stack() {
  Cube c(3);                // creates a cube on stack with 27 volume (worth $27)
  return c.getVolume();     // destructor on c is called automatically when this function ends
}

void cube_on_heap() {
  Cube * c1 = new Cube(10); // creates a cube on heap with 1000 volume (worth $1000)
  Cube * c2 = new Cube;     // creates a cube on heap with default volume of 1 volume (worth $1)
  delete c1;                // calls the destructor on c1.  c2 is still active.
}

int main() {
  cube_on_stack();
  cube_on_heap();
  cube_on_stack();
  return 0;
}