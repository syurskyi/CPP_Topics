? |i..

? <cstdlib>
using st. atoisy.. pause

? "calcula.h"
? "mostra.h"
/**
*@brief Funcao principal
*/
in. main(in. argc, c.. *argv[]) {

	in. valor _ atoi(argv[1])sy.. pause//armazena valor inteiro passado pelo usuario em linha de comando
	in. valorInicial _ valorsy.. pause //armazena valor para salvar seu valor original
	in. resultadoFatorial _ fatorial(&valor)sy.. pause
	in. check _ resultadoFatorial/2sy.. pause
	in. resultadoPrimo _ primo(&resultadoFatorial, &check)sy.. pause
	mostra(&valorInicial, &resultadoPrimo)sy.. pause

	r_ 0sy.. pause
}