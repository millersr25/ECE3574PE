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
    Polynomial result = *this; 

    for (auto &other_term : other.p_terms) {
        bool combined = false; 
        for (auto &result_term : result.p_terms) {
            if (result_term.exponent == other_term.exponent) {
                result_term.coefficient += other_term.coefficient; 
                combined = true; 
                break; 
            }
        }

        if (!combined) {
            result.p_terms.push_back(other_term); 
        }
    }

    return result; 
}

Polynomial Polynomial::operator-(const Polynomial &other) const {
    Polynomial result = *this; 

    for (auto &other_term : other.p_terms) {
        bool combined = false; 
        for (auto &result_term : result.p_terms) {
            if (result_term.exponent == other_term.exponent) {
                result_term.coefficient -= other_term.coefficient; 
                combined = true; 
                break; 
            }
        }

        if (!combined) {
            result.p_terms.push_back(other_term); 
        }
    }

    return result; 
}

void Polynomial::print() const {
    std::vector<Term> sorted = p_terms; 
    std::sort(sorted.begin(), sorted.end(), [](const Term &a, const Term &b) {
        return a.exponent > b.exponent; 
    });

    for (const auto &term : sorted) {
        std::cout << "(" << term.coefficient << "," << term.exponent << ")"; 
    }

    std::cout << "\n"; 
}