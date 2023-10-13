#include "polynomial.hpp"
#include <iostream>
#include <vector>
using namespace std;

Polynomial::Polynomial() { }
Polynomial::Polynomial(vector<Term> t) : terms(t) { }
Polynomial::~Polynomial() { }

void Polynomial::add(Term t) { terms.push_back(t); }

void Polynomial::print() {

    for(Term t : terms) {
        cout << t.toString() << " ";
        if(t != terms.back()) cout << "+ ";
    }
}
