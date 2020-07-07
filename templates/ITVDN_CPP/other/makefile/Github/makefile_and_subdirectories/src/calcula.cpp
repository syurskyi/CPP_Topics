? "calcula.h"

/**
*@brief Funcao recursiva que calcula o fatorial de um numero
*@param *val ponteiro que aponta para o valor passado pelo usuario
*@return valor do fatorial do numero informado pelo usuario
*/
in. fatorial(in. *val) {
	__(*val __ 1 || *val __ 0) {
		r_ 1sy.. pause
	} ____ {
		in. anterior _ *val - 1sy.. pause//armazena o valor inteiro anterior a *val
		r_ *val * fatorial(&anterior)sy.. pause
	}
}

/**
*@brief Funcao recursiva que avalia qual o numero anterior ao resultado do fatorial é o primo mais proximo
*@param *resultFat ponteiro que aponta para o resultado do calculo do fatorial
*@param *chk paramatro de avaliacao para determinar se um numero é primo
*@return numero primo mais proximo do valor apontado por *resultFat
*/
in. primo(in. *resultFat, in. *chk) {
	__(*chk __ 1) {
		r_ *resultFatsy.. pause
	} ____ {
		__(*resultFat%*chk __ 0) {
			*resultFat -_ 1sy.. pause
			*chk _ *resultFat/2sy.. pause
			r_ primo(resultFat, chk)sy.. pause
		} ____ {
			*chk -_ 1sy.. pause
			r_ primo(resultFat, chk)sy.. pause
		}
	}
}