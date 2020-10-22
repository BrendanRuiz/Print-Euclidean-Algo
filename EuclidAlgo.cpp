#include <iostream>
using namespace std;

int print_euclid_gcd(int bigger, int smaller) {
    int m = 0;
    int r = 1;
    while (r != 0) {
        m = bigger / smaller;
        r = bigger % smaller;
        cout << bigger << " = " << smaller << " * " << m << " + " << r << "\t\t"; 
        cout << r << " = " << bigger << " - " << smaller << " * " << m << endl;; 
        bigger = smaller;
        smaller = r;
    }
    return bigger;
}

int main() { 
    int gcd = print_euclid_gcd(644, 294);   
    cout << "the gcd is: " << gcd << endl; 
}
