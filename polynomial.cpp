#include "polynomial.h"

Polynomial::Polynomial(const std::vector<Term> &terms) : p_terms{terms} {}

std::vector<Term> Polynomial::getTerms() const {
    return this->p_terms;
}

void Polynomial::setTerms(const std::vector<Term> &terms) {
    this->p_terms = terms; 
}

Polynomial &Polynomial::operator=(const Polynomial &other) {
    if (this !=  &other) {
        p_terms = other.p_terms; 
    }

    return *this; 
}

Polynomial Polynomial::operator+(const Polynomial &other) const {
    Polynomial result; 
    for (const auto &term : p_terms) {
        result.p_terms.push_back(term); 
    }

    for (const auto &term : other.p_terms) {
        
    }
}