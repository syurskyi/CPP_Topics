// Ленивая инициализация (Lazy initialization)

? |i..
? <utility>

class File {
    std::s.. name;

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
    void write(const std::s..& line_)
    {
        std::c__ __  "write " __  line_ __  " into " __  name __  std::e..
    }
};

class FileOnDemand {
    std::s.. name;
    File* file;

public:
    explicit FileOnDemand(std::s.. name)
            :name(std::move(name)), file(nullptr) { }
    ~FileOnDemand()
    {
        delete file;
    }
    File* operator->()
    {
        __ (!file) {
            file _ new File(name);
        }
        r_ file;
    }
};

in. main(in., c..* [])
{
    File/*OnDemand*/ file("test.txt");

    size_t n _ 0/*2*/;
    for (size_t i _ 0; i<n; ++i) {
        file.write(std::to_string(i));
    }

    r_ 0;
}
