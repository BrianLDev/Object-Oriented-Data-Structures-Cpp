/**
 * C++ program copying a Cube class. 
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include "../Cube.h"
using uiuc::Cube;

int main() {
  Cube c;
  Cube myCube;

  myCube = c;   // this does not use copy constructor!  Already been created

  return 0;
}
