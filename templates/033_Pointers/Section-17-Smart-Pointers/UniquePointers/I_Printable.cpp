? <iostream>
? "I_Printable.h"

std::ostream &operator__(std::ostream &os, const I_Printable &obj) {
    obj.print(os);
    r_ os;
}