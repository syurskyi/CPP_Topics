#include "Message.h"
#include <iostream>

int main(){
  
  //Create out message object, then tell it to do a function.
	
  Message m;

  std::cout << "\nThe message is: ";
  m.communicate();  
	
  return 0;  

}

