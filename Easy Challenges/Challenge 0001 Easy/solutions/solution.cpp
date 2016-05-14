// (Badly) made by https://github.com/lolibutts

#include <iostream>
#include <fstream>
int main()
{
	int age;
	std::string name;
	std::string username;

	std::cout << "Enter your name: " << std::endl;
	std::cin >> name;

	std::cout << "Enter your age: " << std::endl;
	std::cin >> age;

	std::cout << "Enter your username: " << std::endl;
	std::cin >> username;

	std::cout << "\nName: " << name << "\nAge: " << age << "\nUsername: " << username << std::endl;

	std::ofstream myFile;
	myFile.open("Userdata.txt");
	myFile << "Name: " << name << "\nAge: " << age << "\nUsername: " << username << std::endl;
	myFile.close();

	return 0;
}


