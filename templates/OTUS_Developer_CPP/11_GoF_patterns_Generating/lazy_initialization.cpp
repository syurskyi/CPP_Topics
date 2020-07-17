// Ленивая инициализация (Lazy initialization)

? |i..
? <utility>

c_ File {
    st. s.. namesy.. pause

pu..
    explicit File(st. s.. name)
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
}sy.. pause

c_ FileOnDemand {
    st. s.. namesy.. pause
    File* filesy.. pause

pu..
    explicit FileOnDemand(st. s.. name)
            :name(st. move(name)), file(n_p_) { }
    ~FileOnDemand()
    {
        de.. filesy.. pause
    }
    File* operator__()
    {
        __ (!file) {
            file _ n.. File(name)sy.. pause
        }
        r_ filesy.. pause
    }
}sy.. pause

in. main(in., c..* [])
{
    File/*OnDemand*/ file("test.txt")sy.. pause

    size_t n _ 0/*2*/sy.. pause
    ___ (size_t i _ 0sy.. pause i<nsy.. pause ++i) {
        file.write(st. to_string(i))sy.. pause
    }

    r_ 0sy.. pause
}
