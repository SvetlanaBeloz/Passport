#include "Passport.h"

Passport::Passport() : Passport("Ivan", "Ivanov", "Ivanovich", "Odessa", "01.01.2000", 123456789) {}
Passport::Passport(std::string name, std::string surname, std::string patronymic, std::string address, std::string birthdate, int number)
{
	SetName(name);
	SetSurname(surname);
	SetPatronymic(patronymic);
	SetBirthDate(birthdate);
	SetAddress(address);
	SetNumber(number);
}

void Passport::SetName(std::string name)
{
	bool correct = true;
	for (int i = 0; i < name.length(); i++)
		if ((name[i] >= 'a' && name[i] <= 'z') || (name[i] >= 'A' && name[i] <= 'Z'))
			continue;
		else correct = false;
	if (correct) this->name = name;
	else std::cout << "Incorrect name" << std::endl;
}

void Passport::SetSurname(std::string surname)
{
	bool correct = true;
	for (int i = 0; i < name.length(); i++)
		if ((surname[i] >= 'a' && surname[i] <= 'z') || (surname[i] >= 'A' && surname[i] <= 'Z'))
			continue;
		else correct = false;
	if (correct) this->surname = surname;
	else std::cout << "Incorrect surname" << std::endl;
}

void Passport::SetPatronymic(std::string patronymic)
{
	bool correct = true;
	for (int i = 0; i < patronymic.length(); i++)
		if ((patronymic[i] >= 'a' && patronymic[i] <= 'z') || (patronymic[i] >= 'A' && patronymic[i] <= 'Z'))
			continue;
		else correct = false;
	if (correct) this->patronymic = patronymic;
	else std::cout << "Incorrect patronymic" << std::endl;
}

void Passport::SetBirthDate(std::string birthdate)
{
	bool correct = true;
	for (int i = 0; i < birthdate.length(); i++)
		if ((birthdate[i] >= '0' && birthdate[i] <= '9') || birthdate[i] == '.')
			continue;
		else correct = false;
	if (correct) this->birthdate = birthdate;
	else std::cout << "Incorrect birthdate" << std::endl;
}

void Passport::SetAddress(std::string address)
{
	this->address = address;
}

void Passport::SetNumber(int number)
{
	this->number = number;
}

std::string Passport::GetName() const
{
	return name;
}

std::string Passport::GetSurname() const
{
	return surname;
}

std::string Passport::GetPatronymic() const
{
	return patronymic;
}

std::string Passport::GetAddress() const
{
	return address;
}

std::string Passport::GetBirthDate() const
{
	return birthdate;
}

int Passport::GetNumber() const
{
	return number;
}



