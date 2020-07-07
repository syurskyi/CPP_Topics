? "calcula.h"

/**
*@brief Funcao recursiva que calcula o fatorial de um numero
*@param *val ponteiro que aponta para o valor passado pelo usuario
*@return valor do fatorial do numero informado pelo usuario
*/
in. fatorial(in. *val) {
	__(*val == 1 || *val == 0) {
		r_ 1;
	} else {
		in. anterior = *val - 1;//armazena o valor inteiro anterior a *val
		r_ *val * fatorial(&anterior);
	}
}

/**
*@brief Funcao recursiva que avalia qual o numero anterior ao resultado do fatorial é o primo mais proximo
*@param *resultFat ponteiro que aponta para o resultado do calculo do fatorial
*@param *chk paramatro de avaliacao para determinar se um numero é primo
*@return numero primo mais proximo do valor apontado por *resultFat
*/
in. primo(in. *resultFat, in. *chk) {
	__(*chk == 1) {
		r_ *resultFat;
	} else {
		__(*resultFat%*chk == 0) {
			*resultFat -= 1;
			*chk = *resultFat/2;
			r_ primo(resultFat, chk);
		} else {
			*chk -= 1;
			r_ primo(resultFat, chk);
		}
	}
}