#include "polynomial.h"



int main() {
    // initialize p1, p2, sum, diff
    Polynomial p1 = Polynomial({{3,3}, {2,2}, {2,1}}); 
    Polynomial p2 = Polynomial({{1,3}, {1,2}, {1,1}}); 

    Polynomial sum = p1 + p2; 
    sum.print(); 

    Polynomial diff = p1 - p2; 
    diff.print(); 

}