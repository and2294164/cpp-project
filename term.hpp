#ifndef TERM_HPP
#define TERM_HPP

using namespace std;
#include<string>

class Term {
    private:
        int coeff;
        string var;
        int exp;
    public:
        Term(int c, string v, int e);
        Term();
        string toString();
};


#endif