// header file funcoes.h
#include <stdio.h>

typedef struct obj {
	char nome[100];	// Designação do Objeto
	float dist;	        // Distancia do objeto
	struct obj *seguinte;
}Objeto;

Objeto* inserirObjeto(Objeto * obj, char nome[], float d);
