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
        Term();
        Term(int c, string v, int e);
        ~Term();

        bool canCombine(Term &that);
        int getCoeff();
        int getExp();
        bool operator!=(const Term &that);
        string toString();
};


#endif