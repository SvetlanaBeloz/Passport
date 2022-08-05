#include "Visa.h"

Visa::Visa() : Visa("France", "01.01.2023", "31.12.2023", "multivisa") {}
Visa::Visa(std::string country, std::string arrivalDate, std::string departureDate, std::string numberOfEntries)
{
	SetCountry(country);
	SetArrivalDate(arrivalDate);
	SetDepartureDate(departureDate);
	NumberOfEntries(numberOfEntries);
}

void Visa::SetCountry(std::string country)
{
	this->country = country;
}

void Visa::SetArrivalDate(std::string arrivalDate)
{
	this->arrivalDate = arrivalDate;
}

void Visa::SetDepartureDate(std::string departureDate)
{
	this->departureDate = departureDate;
}

void Visa::NumberOfEntries(std::string numberOfEntries)
{
	this->numberOfEntries = numberOfEntries;
}

std::string Visa::GetCountry() const
{
	return country;
}

std::string Visa::GetArrivalDate() const
{
	return arrivalDate;
}

std::string Visa::GetDepartureDate() const
{
	return departureDate;
}

std::string Visa::GetNumberOfEntries() const
{
	return numberOfEntries;
}

void Visa::ShowVisa()
{
	std::cout << "Country of visa is " << country << std::endl;
	std::cout << "Date of arrival is " << arrivalDate << std::endl;
	std::cout << "Date of departure is " << departureDate << std::endl;
	std::cout << "Numver of entries " << numberOfEntries << std::endl;
}

