#include "ForeignPassport.h"

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

