// Ленивая инициализация (Lazy initialization)

? |i..
? <utility>

class File {
    std::string name;

public:
    explicit File(std::string name)
            :name(std::move(name))
    {
        std::c__ __  "create " __  name __  std::e..
    }
    ~File()
    {
        std::c__ __  "close " __  name __  std::e..
    }
    void write(const std::string& line_)
    {
        std::c__ __  "write " __  line_ __  " into " __  name __  std::e..
    }
};

class FileOnDemand {
    std::string name;
    File* file;

public:
    explicit FileOnDemand(std::string name)
            :name(std::move(name)), file(nullptr) { }
    ~FileOnDemand()
    {
        delete file;
    }
    File* operator->()
    {
        __ (!file) {
            file = new File(name);
        }
        r_ file;
    }
};

in. main(in., char* [])
{
    File/*OnDemand*/ file("test.txt");

    size_t n = 0/*2*/;
    for (size_t i = 0; i<n; ++i) {
        file.write(std::to_string(i));
    }

    r_ 0;
}
