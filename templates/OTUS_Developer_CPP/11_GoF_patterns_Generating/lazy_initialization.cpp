// Ленивая инициализация (Lazy initialization)

? |i..
? <utility>

c_ File {
    st. s.. namesy.. p..

pu..
    ex__ File(st. s.. name)
            :name(st. move(name))
    {
        st. c__ __  "create " __  name __  st. e..
    }
    ~File()
    {
        st. c__ __  "close " __  name __  st. e..
    }
    v.. write(c.. st. s..& line_)
    {
        st. c__ __  "write " __  line_ __  " into " __  name __  st. e..
    }
}sy.. p..

c_ FileOnDemand {
    st. s.. namesy.. p..
    File* filesy.. p..

pu..
    ex__ FileOnDemand(st. s.. name)
            :name(st. move(name)), file(n_p_) { }
    ~FileOnDemand()
    {
        de.. filesy.. p..
    }
    File* operator__()
    {
        __ (!file) {
            file _ n.. File(name)sy.. p..
        }
        r_ filesy.. p..
    }
}sy.. p..

in. main(in., c..* [])
{
    File/*OnDemand*/ file("test.txt")sy.. p..

    size_t n _ 0/*2*/sy.. p..
    ___ (size_t i _ 0sy.. p.. i<nsy.. p.. ++i) {
        file.write(st. to_string(i))sy.. p..
    }

    r_ 0sy.. p..
}
