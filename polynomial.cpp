#include"polynomial.hpp"
#include<iostream>

using namespace std;

Poly::Poly(vector<Term> t) : terms(t) { }

void Poly::add(Term t) {
    terms.push_back(t);
}

void Poly::print() {

    for(Term t : terms) {
        cout << t.toString() << " + " << endl;
    }
}