#pragma once
#include <iostream>


class Passport
{
protected:

	std::string name;
	std::string surname;
	std::string patronymic;
	std::string address;
	std::string birthdate;
	int number;

public:

	Passport();
	Passport(std::string name, std::string surname, std::string patronymic, std::string address, std::string birthdate, int number);

	void SetName(std::string name);
	void SetSurname(std::string surname);
	void SetPatronymic(std::string patronymic);
	void SetAddress(std::string address);
	void SetBirthDate(std::string birthdate);
	void SetNumber(int number);

	std::string GetName() const;
	std::string GetSurname() const;
	std::string GetPatronymic() const;
	std::string GetAddress() const;
	std::string GetBirthDate() const;
	int GetNumber() const;


};

