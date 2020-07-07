#include "calcula.h"

/**
*@brief Funcao recursiva que calcula o fatorial de um numero
*@param *val ponteiro que aponta para o valor passado pelo usuario
*@return valor do fatorial do numero informado pelo usuario
*/
int fatorial(int *val) {
	if(*val == 1 || *val == 0) {
		return 1;
	} else {
		int anterior = *val - 1;//armazena o valor inteiro anterior a *val
		return *val * fatorial(&anterior);
	}
}

/**
*@brief Funcao recursiva que avalia qual o numero anterior ao resultado do fatorial é o primo mais proximo
*@param *resultFat ponteiro que aponta para o resultado do calculo do fatorial
*@param *chk paramatro de avaliacao para determinar se um numero é primo
*@return numero primo mais proximo do valor apontado por *resultFat
*/
int primo(int *resultFat, int *chk) {
	if(*chk == 1) {
		return *resultFat;
	} else {
		if(*resultFat%*chk == 0) {
			*resultFat -= 1;
			*chk = *resultFat/2;
			return primo(resultFat, chk);
		} else {
			*chk -= 1;
			return primo(resultFat, chk);
		}
	}
}