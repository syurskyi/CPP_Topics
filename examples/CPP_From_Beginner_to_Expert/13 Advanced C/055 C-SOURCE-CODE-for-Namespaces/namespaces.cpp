#include <iostream>


/*namespaces */

namespace mySpace
{
    class MyNewLine
    {
            std::string text;
        public:
            MyNewLine(std::string text = "\n\n\n") { this->text = text;}
            std::string toString()
            {
                return text;
            }
    };

    std::ostream & operator<<(std::ostream & out, MyNewLine & o)
    {
        return out << o.toString();
    }
    MyNewLine endl("\n\n\n\n\n\n");
}
using namespace mySpace;
int main()
{
    int a = 50;


    std::cout << "this is text: " << endl;
    return 0;
}
