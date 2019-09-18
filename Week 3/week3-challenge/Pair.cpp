// Implement its member functions below.

#include "Pair.h"
#include <iostream>

 
 Pair::Pair(int a, int b) {
   pa = new int;
   pb = new int;
   *pa = a;
   *pb = b;
   std::cout << "Default constructor called\n";
 }
 
 Pair::Pair(const Pair &other) {
   pa = new int;
   pb = new int;
   pa = other.pa;
   pb = other.pb;
   std::cout << "Copy constructor called\n";
 }
 
 Pair::~Pair() {
   delete pa; 
   delete pb;
   std::cout << "Destructor called\n";
 }