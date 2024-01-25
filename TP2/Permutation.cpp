#include "Permutation.h"

Permutation::Permutation(){}

Permutation::~Permutation() {}

void Permutation::permuterPassageEnParam�tres(int a, int b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void Permutation::permuterPassageEnPointeur(int* a, int* b) 
{
	int tmp = *a;
	a = b;
	*b = tmp;
}

void Permutation::permuterPassageAdresse(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}