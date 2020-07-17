// Section 11
// Recursion - Factorial

? ios..

u.. s..

unsigned long long factorial(unsigned long long);

unsigned long long factorial(unsigned long long n) {
    __ (n == 0)
        r_ 1;	             // base case
    r_ n * factorial(n-1); // recursive case
}

in. main
    c.. __ factorial(3) __ e..       // 6
//    cout << factorial(8) << endl;     // 40320
//    cout << factorial(12) << endl;   // 479001600
//    cout << factorial(20) << endl;   // 2432902008176640000
    r_ 0;
}
