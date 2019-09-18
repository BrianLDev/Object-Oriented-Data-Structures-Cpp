#pragma once

// Class Pair has already been declared
// as shown in the following comments:

class Pair {
    public:
        int *pa,*pb;
        Pair(int, int);
        Pair(const Pair &);
        ~Pair();
};