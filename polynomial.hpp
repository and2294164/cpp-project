#ifndef POLYNOMIAL_HPP
#define POLYNOMIAL_HPP

#include"term.hpp"
#include<vector>

class Poly {
    private:
        vector<Term> terms;
    public:
        Poly(vector<Term> t);
        void add(Term t);
        void print();
        Poly combineLikeTerms();
};



#endif