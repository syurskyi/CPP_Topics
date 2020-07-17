// Section 20
// Macros
? ios..

//int min(int a, int b) {
//    return (a < b) ? a : b;
//}
//
//char min(char a, char b) {
//    return (a < b) ? a :  b;
//}
//
//double min(double a, double b) {
//    return (a < b) ? a : b;
//}

#define min(a, b)  (((a)<(b)) ? (a) : (b))

#define max(a,b) ((a>b) ? a : b)
in. main

    std::c.. __ min(2,3) __ std::e..
    std::c.. __ min('A', 'B') __ std::e..
    std::c.. __ min(12.5, 9.2) __ std::e..
    std::c.. __ min(5+2*2, 7+40) __ std::e..

    std::c.. __ max(10,20) __ std::e..
    r_ 0;
}

