? |i..

u.. s..

main()
{
    /*
        0
        1
        0101 0110

        1 2 6 = 1 * 10 ^ 2 + 2 * 10 ^ 1 + 6 * 10 ^ 0 = 100 + 20 + 6

        1 0 1 0 = 2 ^ 3 + 2 ^ 1 = 8 + 2 = 10

        1 0 1 1 0 0 = 2 ^ 2 + 2 ^ 3 + 2 ^ 5 = 4 + 8 + 32 = 44
    */
    /*
        Bitwise AND - &
        Bitwise OR - |
        Bitwise NOT - ~ (tilde)
        Bitwise XOR - ^ (caret) eXclusive OR.
        0 0 0
        0 1 1
        1 0 1
        1 1 0
        Bitwise left shift <<
        Bitwise right shift >>
    */

    c__ __  (10 & 2) __  e..

    /*
        1 0 1 0
        0 0 1 0
        -------
        0 0 1 0
    */
    c__ __  (10 | 2) __  e..

    /*
        1 0 1 0
        0 0 1 0
        -------
        1 0 1 0
    */
    c__ __  (10 ^ 2) __  e..

    /*
        1 0 1 0
        0 0 1 0
        -------
        1 0 0 0
    */

    c__ __  (~10) __  e..

    /*
         000000000000000000000000000000000000 1 0 1 0
         111111111111111111111111111111111111 0 1 0 1
    */

    c__ __  (10 __  3) __  e.. //this thing means that we are multiplying 10 by 2 raised to the power of 3
    /*
        000000000000000000000000000000000001 0 1 0 0
        20 - decimal notation
        40
    */

    c__ __  (10 >> 1) __  e.. //this thing means that we are dividing 10 by 2 raised to the power of 3
    /*
        00000000000000000000000000000000000 0 1 0 1
        5
    */
}
