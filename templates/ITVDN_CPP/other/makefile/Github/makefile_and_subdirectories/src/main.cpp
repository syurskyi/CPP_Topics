#include <iostream>

#include <cstdlib>
using std::atoi;

#include "calcula.h"
#include "mostra.h"
/**
*@brief Funcao principal
*/
int main(int argc, char *argv[]) {

	int valor = atoi(argv[1]);//armazena valor inteiro passado pelo usuario em linha de comando
	int valorInicial = valor; //armazena valor para salvar seu valor original
	int resultadoFatorial = fatorial(&valor);
	int check = resultadoFatorial/2;
	int resultadoPrimo = primo(&resultadoFatorial, &check);
	mostra(&valorInicial, &resultadoPrimo);

	return 0;
}