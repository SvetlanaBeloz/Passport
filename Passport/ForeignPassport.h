#pragma once
#include "Passport.h"
#include "Visa.h"
#include <vector>

class ForeignPassport : public Passport
{
	std::vector<Visa> visas;

public:

	ForeignPassport() : Passport() {}


	void AddVisa(Visa& vs);
	void PrintVisas();
};

