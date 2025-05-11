#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

#include <vector> 
#include <iostream> 
#include <algorithm>



struct Term {
    int coefficient{0}; 
    int exponent{0}; 
};

class Polynomial {
    private:
        std::vector<Term> p_terms; 

    public:
        Polynomial() = default; 
        Polynomial(const std::vector<Term>& terms);

        // Getters and Setters(no cout allowed in submission)
        std::vector<Term> getTerms() const; 
        // add more ... 
        void setTerms(const std::vector<Term>& terms); 

        // Overload Operators (no cout allowed in submission)
        // add these ... 
        Polynomial& operator=(const Polynomial& other); 
        Polynomial operator+(const Polynomial& other) const; 
        Polynomial operator-(const Polynomial& other) const; 

        // print function (cout allowed)
        void print() const; 
}; 

#endif