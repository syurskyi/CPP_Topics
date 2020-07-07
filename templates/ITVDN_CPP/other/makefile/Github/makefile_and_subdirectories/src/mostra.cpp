#include <iostream>
using std::cout;
using std::endl;
#include "mostra.h"
/**
*@brif Funcao que mostra na tela o numero primo mais proximo
*@param *valInic ponteiro que aponta para o valor origina passado pelo usuario
*@param *resultPrim ponteiro que aponta para o numero primo mais proximo encontrado
*@return void
*/
void mostra(int *valInic, int *resultPrim) {
	cout << "O número primo mais próximo do fatorial de " << *valInic << " encontrado foi: " << *resultPrim << endl;
}
