#include <iostream>
#include "Phonebook.h"
#include <string>


int main() {
	std::cout << "OOP_HW1 Phonebook" << std::endl;
	Phonebook p1 ("Ivanov", "Ivan", "Ivanovich", 73432222222, 73433333333, 89220000001, "CEO");
	std::cout << "Person's information: " << std::endl;
	std::cout << p1.getSurname() << std::endl; 
	std::cout << p1.getName() << std::endl;
	std::cout << p1.getPatronymic() << std::endl;
	std::cout << p1.getHomeNumber() << std::endl;
	std::cout << p1.getWorkNumber() << std::endl;
	std::cout << p1.getMobileNumber() << std::endl;
	std::cout << p1.getAdditionalInfo() << std::endl;

	


	return 0;
}