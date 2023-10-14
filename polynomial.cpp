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

Polynomial Polynomial::combineLikeTerms() {

    // create new polynomial
    Polynomial combined;
    Polynomial temp{this->terms};
    int inside = 0;
    int outside = 0;

    // for loop to compare "that"
    for(Term t : terms) {

    
        // inner for loop to compare to run through temp for each
        // value of "that"
        for(Term iter: temp.terms) {

            inside = 0;            
            if(t.canCombine(iter) && inside != outside) {
                // if they can be combined and don't equal:
                // combine them, add them to combined, remove it from temp
                cout << endl << "entered loop" << endl;
                //combined.terms.push_back(t.combine(iter));
                //cout << "erased term: " << temp.terms.at(inside).toString();
                //temp.terms.erase(temp.terms.begin() + inside);

                // if(t != iter)
                //cout << endl << "t=" <<t.toString() << endl;
                //cout << "iter=" << iter.toString() << endl;
                //cout << "t != term"<< endl;

                // if(t.canCombine(iter))
                //cout << t.toString() << " can be combined with " 
                //     << iter.toString() << endl;
                inside++;
            }
        // if they can't be combined, add it to combined w/o combining
        }
        outside++;
    }
    


    return combined;
}