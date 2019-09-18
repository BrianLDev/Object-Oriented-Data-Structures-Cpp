/**
 * C++ program copying a Cube currency by value.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include "../Cube.h"
using uiuc::Cube;

int main() {
  // Create a $1,000-valued cube
  Cube c(10);

  // Transfer the cube using a copy constructor (should create 2 x $1,000 cubes)
  Cube myCube = c;

  return 0;
}
