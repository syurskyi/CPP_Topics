? |i..

? <cstdlib>
using std::atoi;

? "calcula.h"
? "mostra.h"
/**
*@brief Funcao principal
*/
in. main(in. argc, char *argv[]) {

	in. valor = atoi(argv[1]);//armazena valor inteiro passado pelo usuario em linha de comando
	in. valorInicial = valor; //armazena valor para salvar seu valor original
	in. resultadoFatorial = fatorial(&valor);
	in. check = resultadoFatorial/2;
	in. resultadoPrimo = primo(&resultadoFatorial, &check);
	mostra(&valorInicial, &resultadoPrimo);

	r_ 0;
}