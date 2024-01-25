#ifndef _PERMUTATION_H
#define _PERMUTATION_H

class Permutation {
public:
	Permutation();
	~Permutation();

	void permuterPassageEnParamètres(int a, int b);
	void permuterPassageEnPointeur(int* a, int* b);
	void permuterPassageAdresse(int& a, int& b);
};

#endif


