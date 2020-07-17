#ifndef CALCULA_H
_de.. CALCULA_H

/**
*@brief Funcao recursiva que calcula o fatorial de um numero
*@param *val ponteiro que aponta para o valor passado pelo usuario
*@return valor do fatorial do numero informado pelo usuario
*/
int fatorial(int *val);

/**
*@brief Funcao recursiva que avalia qual o numero anterior ao resultado do fatorial é o primo mais proximo
*@param *resultFat ponteiro que aponta para o resultado do calculo do fatorial
*@param *chk paramatro de avaliacao para determinar se um numero é primo
*@return numero primo mais proximo do valor apontado por *resultFat
*/
int primo(int *resultFat, int *chk);

#endif