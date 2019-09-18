/**
 * C++ program aliasing a Cube class by reference.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include "../Cube.h"
using uiuc::Cube;

int main() {
  // Create a 1,000-valued cube
  Cube c(10);

  // Transfer the cube by Reference (should not create an additional cube - it just references existing cube)
  Cube & myCube = c;

  return 0;
}
