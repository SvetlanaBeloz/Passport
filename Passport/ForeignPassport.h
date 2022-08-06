#pragma once
#include "Passport.h"
#include "Visa.h"
#include <vector>

class ForeignPassport : public Passport
{
protected:
	std::vector<Visa> visas;

public:

	ForeignPassport();
	ForeignPassport(std::string name, std::string surname, std::string patronymic, std::string address, std::string birthdate, int number);



	void AddVisa(Visa& vs);
	void PrintVisas();
};

