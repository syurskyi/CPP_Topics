? |s..
? <stdlib.h>
? |st..

? COUNT 4

in. a[COUNT];
float b[COUNT];
double c[COUNT];
long long in. d[COUNT];
short in. e[COUNT];
long in. f[COUNT];

// illustrate the different amounts that are added to an address by C's address arithmetic
in. main()
{
    in.* pa;
    float* pb;
    double* pc;
    long long in.* pd;
    short in.* pe; // we could just use 'short' here
    long in.* pf;

    // first let's look at the sizes of our array types
    p..("sizes are: int %d; float %d; double %d; long long int %d; short int %d; long int %d\n", s_o_(in.),
        s_o_(float), s_o_(double), s_o_(long long in.), s_o_(short in.), s_o_(long in.));
    // NOTE: because of historical reasons a plain 'int' can vary in size between machine architectures. On some
    // microprocessors it is 2 bytes long while on Intel processors it is 4 bytes
    // if we want to be explicit (and more portable), then use 'long int' for a 32 bit integer instead of just 'int'

    // initialize our array and pointers
    pa = a;
    pb = b;
    pc = c;
    pd = d;
    pe = e;
    pf = f;
    ___(in. i = 0; i < COUNT; ###) {
        a[i] = i;
        b[i] = (float)i;
        c[i] = (double)i;
        d[i] = i;
        e[i] = i;
        f[i] = i;
    }

    // let's do some arithmetic
    pa += 1;
    pb += 1;
    pc += 1;
    pd += 1;
    pe += 1;
    pf += 1;
    // and print out the results ...
    // NOTE: the addresses have been increased by the correct amount 4 for 'int', 'float' and 'long int'
    // 8 for 'double' and 'long long int' and 2 for 'short int'
    p..("address of a is %p [%d]; value of pa is %p [%d]; value pointed to by pa is %d\n", a, a, pa, pa, *pa);
    p..("address of b is %p [%d]; value of pb is %p [%d]; value pointed to by pb is %f\n", b, b, pb, pb, *pb);
    p..("address of c is %p [%d]; value of pc is %p [%d]; value pointed to by pc is %f\n", c, c, pc, pc, *pc);
    p..("address of d is %p [%d]; value of pd is %p [%d]; value pointed to by pd is %lld\n", d, d, pd, pd, *pd);
    p..("address of e is %p [%d]; value of pe is %p [%d]; value pointed to by pe is %hd\n", e, e, pe, pe, *pe);
    p..("address of f is %p [%d]; value of pf is %p [%d]; value pointed to by pf is %ld\n", f, f, pf, pf, *pf);

    r_ 0;
}
