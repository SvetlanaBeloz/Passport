#include "ForeignPassport.h"

ForeignPassport::ForeignPassport() : Passport() {}
ForeignPassport::ForeignPassport(std::string name, std::string surname, std::string patronymic, std::string address, std::string birthdate, 
	int number) : Passport(name, surname, patronymic, address, birthdate, number) {}


void ForeignPassport::AddVisa(Visa& vs)
{
	visas.push_back(vs);
}

void ForeignPassport::PrintVisas()
{
	for (int i = 0; i < visas.size(); i++)
	{
		visas[i].ShowVisa();
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

