#include "Phonebook.h"
#include <iostream>
#include <string>

Phonebook::Phonebook() {
	_surname = "DefaultSurname";
	_name = "Default Name";
	_patronymic = "DefaultPatronymic";
	_homeNumber = 0;
	_workNumber = 0;
	_mobileNumber = 0;
	_additionalInfo = "None";
}


Phonebook::Phonebook (std::string& surname, std::string& name, std::string& patronymic,
	long homeNumber, long workNumber, long mobileNumber, std::string& additionalInfo) : _surname(surname), _name(name), _patronymic(patronymic),
	_homeNumber(homeNumber), _workNumber(workNumber), _mobileNumber(mobileNumber), _additionalInfo(additionalInfo) {}

 std::string& Phonebook::getSurname() {
	return _surname;
}
void Phonebook::setSurname( std::string& surname) {
	_surname = surname;
}

std::string& Phonebook::getName() {
	return _name;
}
void Phonebook::setName(std::string& name) {
	_name = name;
}

std::string& Phonebook::getPatronymic() {
	return _patronymic;
}
void Phonebook::setPatronymic (std::string& patronymic) {
	_patronymic = patronymic;
}


long Phonebook::getHomeNumber() {
	return _homeNumber;
}
void Phonebook::setHomeNumber(long homeNumber) {
	_homeNumber = homeNumber;
}

long Phonebook::getWorkNumber() {
	return _workNumber;
}
void Phonebook::setWorkNumber(long workNumber) {
	_workNumber = workNumber;
}

long Phonebook::getMobileNumber() {
	return _mobileNumber;
}
void Phonebook::setMobileNumber(long mobileNumber) {
	_mobileNumber = mobileNumber;
}

std::string& Phonebook::getAdditionalInfo() {
	return _additionalInfo;
}
void Phonebook::setAdditionalInfo(std::string& additionalInfo) {
	_additionalInfo = additionalInfo;
}


void newPerson(new_person& P) {
	int n;
	std::cout << "Enter information about new person" << "\n";
	std::cout << "1. Surname" << std::endl;
	std::cout << "2. Name" << std::endl;
	std::cout << "3. Patronymic" << std::endl;
	std::cout << "4. Home Number" << std::endl;
	std::cout << "5. Work Number" << std::endl;
	std::cout << "6. Mobile Number" << std::endl;
	std::cout << "7. Additional Information" << std::endl;


	std::cin >> n;
	if (n <= 0 || n > 7)
		std::cout << "Input error" << std::endl;

	for (int i = 0; i < n; i++) {

		switch (n) {
		case 1: std::cout << "Enter person's surname: "; 
			std::cin >> P.new_surname;
		case 2: std::cout << "Enter person's name: "; 
			std::cin >> P.new_name;
		case 3: std::cout << "Enter person's patronymic: ";
			std::cin >> P.new_patronymic;
		case 4: std::cout << "Enter person's home phone number: ";
			std::cin >> P.new_homeNumber;
		case 5: std::cout << "Enter person's work phone number: ";
			std::cin >> P.new_workNumber;
		case 6: std::cout << "Enter person's mobile phone number: ";
			std::cin >> P.new_mobileNumber;
		case 7: std::cout << "Enter additional information about the person: ";
			std::cin >> P.new_additionalInfo;

		default: break;
		}
	}
	std::cout << std::endl;
}

void show_newPerson(new_person P) {
	std::cout << "Person's surname: " << P.new_surname << std::endl;
	std::cout << "Person's name: :" << P.new_name << std::endl;;
	std::cout << "Person's patronymic:" << P.new_patronymic << std::endl;
	std::cout << "Person's home phone number:" << P.new_homeNumber << std::endl;
	std::cout << "Person's work phone number: " << P.new_workNumber << std::endl;
	std::cout << "Person's mobile phone number: " << P.new_mobileNumber << std::endl;
	std::cout << "Additional information about the person: " << P.new_additionalInfo << std::endl;
}
