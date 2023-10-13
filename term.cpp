#include"term.hpp"
#include<iostream>
#include<string>
using namespace std;

Term::Term() { }
Term::Term(int c = 0, string v = "x", int e = 0) : coeff(c), var(v), exp(e) { }
Term::~Term() { }

string Term::toString() {

    string temp;
    if (coeff != 0) {
        temp = to_string(coeff) + var + "^" + to_string(exp);
    } else {
        temp = to_string(0);
    }
    if (exp == 0) {
        temp = "1";
    }
    return temp;
}

bool Term::operator!=(const Term &that) {

    if(this->coeff != that.coeff && this->exp != that.exp) return 1;
    return 0;
}