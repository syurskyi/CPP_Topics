#include "Message.h"
#include <iostream>

Message::Message(){
 std::cout << "The Message object has been created.";
}


Message::~Message(){
  std::cout << "The default deconstructor has started, but I will do nothing"
	  << "\nWell done. Bye.\n\n";
}


void Message::communicate(){
  std::cout << "Hello Everyone.\n\n" << std::endl; 
}
