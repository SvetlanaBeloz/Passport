#pragma once
#include <iostream>


class Visa
{
	std::string country;
	std::string arrivalDate;
	std::string departureDate;
	std::string numberOfEntries;

public:

	Visa();
	Visa(std::string country, std::string arrivalDate, std::string departureDate, std::string numberOfEntries);

	void SetCountry(std::string country);
	void SetArrivalDate(std::string arrivalDate);
	void SetDepartureDate(std::string departureDate);
	void NumberOfEntries(std::string numberOfEntries);

	std::string GetCountry() const;
	std::string GetArrivalDate() const;
	std::string GetDepartureDate() const;
	std::string GetNumberOfEntries() const;

	void ShowVisa();
};

