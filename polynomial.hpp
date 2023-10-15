#ifndef POLYNOMIAL_HPP
#define POLYNOMIAL_HPP

#include "term.hpp"
#include <vector>
using namespace std;

class Polynomial {
    private:
        vector<Term> terms;
    public:
        Polynomial();
        Polynomial(vector<Term> t);
        ~Polynomial();

        void add(Term t);
        Polynomial combineLikeTerms();
        void print();
};
#endif