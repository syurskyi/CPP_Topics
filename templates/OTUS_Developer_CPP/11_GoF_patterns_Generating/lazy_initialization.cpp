// Ленивая инициализация (Lazy initialization)

? |i..
? <utility>

class File {
    std::s.. namesy.. pause

public:
    explicit File(std::s.. name)
            :name(std::move(name))
    {
        std::c__ __  "create " __  name __  std::e..
    }
    ~File()
    {
        std::c__ __  "close " __  name __  std::e..
    }
    v.. write(c.. std::s..& line_)
    {
        std::c__ __  "write " __  line_ __  " into " __  name __  std::e..
    }
}sy.. pause

class FileOnDemand {
    std::s.. namesy.. pause
    File* filesy.. pause

public:
    explicit FileOnDemand(std::s.. name)
            :name(std::move(name)), file(nullptr) { }
    ~FileOnDemand()
    {
        delete filesy.. pause
    }
    File* operator->()
    {
        __ (!file) {
            file _ new File(name)sy.. pause
        }
        r_ filesy.. pause
    }
}sy.. pause

in. main(in., c..* [])
{
    File/*OnDemand*/ file("test.txt")sy.. pause

    size_t n _ 0/*2*/sy.. pause
    ___ (size_t i _ 0sy.. pause i<nsy.. pause ++i) {
        file.write(std::to_string(i))sy.. pause
    }

    r_ 0sy.. pause
}
