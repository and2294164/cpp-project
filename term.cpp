#include"term.hpp"
#include<iostream>
#include<string>
using namespace std;

Term::Term(int c = 0, string v = "x", int e = 0) : coeff(c), var(v), exp(e) { }
string Term::toString() {

    string temp;
    if (coeff != 0) {
        temp = to_string(coeff) + var + "^" + to_string(exp);
    } else {
        temp = to_string(0);
    }
    return temp;
}

/*
int main () {

    Term t1{};
    Term t2{2, "x", 2};

    cout << t1.toString() << endl;
    cout << t2.toString() << endl;




    return 0;
}*/