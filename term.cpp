#include"term.hpp"
#include<iostream>
#include<string>
using namespace std;

Term::Term() { }
Term::Term(int c = 0, string v = "x", int e = 0) : coeff(c), var(v), exp(e) { }
Term::~Term() { }

bool Term::canCombine(Term &that) {

    if ( (this->exp == that.exp) && (this->coeff && that.coeff != 0) ) {
        return true;
    } 
    return false;
}

int Term::getCoeff() {
    return this->coeff;
}

int Term::getExp() {
    return this->exp;
}

bool Term::operator!=(const Term &that) {
    
    if(this->coeff == that.coeff && this->exp == that.exp) return false;
    return true;
}

string Term::toString() {

    string temp;

    if (coeff != 0) {
        temp = to_string(coeff) + var + "^" + to_string(exp);
    } else {
        temp = to_string(0);
    }
    if (exp == 0) {
        temp = to_string(coeff);
        
    }
    return temp;
}