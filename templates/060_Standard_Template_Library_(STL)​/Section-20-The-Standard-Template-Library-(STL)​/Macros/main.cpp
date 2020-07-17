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

_de.. min(a, b)  (((a)<(b)) ? (a) : (b))

_de.. max(a,b) ((a>b) ? a : b)
in. main

    st. c.. __ min(2,3) __ st. e..
    st. c.. __ min('A', 'B') __ st. e..
    st. c.. __ min(12.5, 9.2) __ st. e..
    st. c.. __ min(5+2*2, 7+40) __ st. e..

    st. c.. __ max(10,20) __ st. e..
    r_ 0;
}

