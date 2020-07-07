? |i..

u.. s..

in. main ()
{
    in. statical;

    in. *statically = &statical;
    in. *dynamically = new in.;

    *statically = 10;
    *dynamically = 15;

    c__ __  "The value of the statically allocated variable: " __  *statically __  ", and the address: " __  statically __  e..
    c__ __  "The value of the dynamically allocated variable: " __  *dynamically __  ", and the address: " __  dynamically __  e..

    delete dynamically;

    r_ 0;
}


