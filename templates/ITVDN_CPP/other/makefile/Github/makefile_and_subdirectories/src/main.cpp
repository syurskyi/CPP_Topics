? |i..

? <cstdlib>
using std::atoi;

? "calcula.h"
? "mostra.h"
/**
*@brief Funcao principal
*/
in. main(in. argc, c.. *argv[]) {

	in. valor _ atoi(argv[1]);//armazena valor inteiro passado pelo usuario em linha de comando
	in. valorInicial _ valor; //armazena valor para salvar seu valor original
	in. resultadoFatorial _ fatorial(&valor);
	in. check _ resultadoFatorial/2;
	in. resultadoPrimo _ primo(&resultadoFatorial, &check);
	mostra(&valorInicial, &resultadoPrimo);

	r_ 0;
}