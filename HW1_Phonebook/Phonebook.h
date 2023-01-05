#pragma once
#include <string>
#include <iostream>


class Phonebook 
{
public:
	Phonebook();	
	~Phonebook();
	Phonebook(std::string& surname, std::string& name,  std::string& patronymic,
		long homeNumber, long workNumber, long mobileNumber, std::string& additionalInfo);
	
	std::string& getSurname();
	void setSurname(std::string& surname);
	
	std::string& getName();
	void setName(std::string& name);

	std::string& getPatronymic();
	void setPatronymic(std::string& patronymic);

	long getHomeNumber();
	void setHomeNumber(long homeNumber);

	long getWorkNumber();
	void setWorkNumber(long workNumber);

	long getMobileNumber();
	void setMobileNumber(long mobileNumberNumber);

	std::string& getAdditionalInfo();
	void setAdditionalInfo(std::string& additionalInfo);

private:
	std::string _surname;
	std::string _name;
	std::string _patronymic;
	long _homeNumber;
	long _workNumber;
	long _mobileNumber;
	std::string _additionalInfo;

};


struct new_person {
	std::string new_surname;
	std::string new_name;
	std::string new_patronymic;
	long new_homeNumber;
	long new_workNumber;
	long new_mobileNumber;
	std::string new_additionalInfo;
};

void newPerson(new_person& P);
void show_newPerson(new_person P);