/**
 * C++ program copying a Cube currency pointer.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include "../Cube.h"
using uiuc::Cube;

int main() {
  // Create a 1,000-valued cube
  Cube c(10);

  // Transfer the cube via pointer.  Will not create another cube, will just reference the existing cube
  Cube * myCube = &c;

  return 0;
}
