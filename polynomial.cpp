#include "polynomial.hpp"
#include <iostream>
#include <vector>
#include <map>
using namespace std;

Polynomial::Polynomial() { }
Polynomial::Polynomial(vector<Term> t) : terms(t) { }
Polynomial::~Polynomial() { }

void Polynomial::add(Term t) { terms.push_back(t); }

Polynomial Polynomial::combineLikeTerms() {

    Polynomial ret;
    Polynomial temp{this->terms};
    int coeff;
    map<int, int> combined;

    for(int i = 0; i < 5; i++) {

        combined.insert( pair<int, int>(i, 0) );
    }

    for(Term t : temp.terms) {

        combined.at(t.getExp()) += t.getCoeff();
    }

    for(int i = 4; i >= 0; i--) {
        
        coeff = combined.at(i);
        ret.add( {coeff, "x", i} );
    }

    return ret;
}

void Polynomial::print() {

    for(Term t : terms) {

        if(t != terms.back()) {
            cout << t.toString() << " + ";
        } else {
            cout << t.toString() << endl;
        }
    }
}