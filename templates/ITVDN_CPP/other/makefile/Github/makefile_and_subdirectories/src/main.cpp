? |i..

? <cstdlib>
using st. atoisy.. p..

? "calcula.h"
? "mostra.h"
/**
*@brief Funcao principal
*/
in. main(in. argc, c.. *argv[]) {

	in. valor _ atoi(argv[1])sy.. p..//armazena valor inteiro passado pelo usuario em linha de comando
	in. valorInicial _ valorsy.. p.. //armazena valor para salvar seu valor original
	in. resultadoFatorial _ fatorial(&valor)sy.. p..
	in. check _ resultadoFatorial/2sy.. p..
	in. resultadoPrimo _ primo(&resultadoFatorial, &check)sy.. p..
	mostra(&valorInicial, &resultadoPrimo)sy.. p..

	r_ 0sy.. p..
}