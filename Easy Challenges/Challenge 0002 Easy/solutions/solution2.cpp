// (Badly) made by https://github.com/lolibutts

#include <iostream>

int getDistance()
{
	std::cout << "Enter a speed: (m/s) ";
	int speed;
	std::cin >> speed;

	std::cout << "Enter an amount of time: (seconds) ";
	int time;
	std::cin >> time;

	int distance = speed * time;
}

float getSpeed()
{
	std::cout << "Enter a Distance: (meters) ";
	float distance;
	std::cin >> distance;

	std::cout << "Enter an amount of time: (seconds) ";
	float time;
	std::cin >> time;

	float speed = distance / time;

}

float getTime()
{
	std::cout << "Enter a Distance: (meters) ";
	float distance;
	std::cin >> distance;

	std::cout << "Enter a speed: m/s) ";
	float speed;
	std::cin >> speed;

	float time = distance / speed;
	return time;
}

int main()
{
	std::cout<<"1. Get distance travelled\n";
	std::cout<<"2. Get speed\n";
	std::cout<<"3. Get time taken\n";
	std::cout<<"4. Exit\n";
	std::cout<<"Selection: ";
	int input;
	std::cin >> input;

	switch (input)
	{
		  case 1:
			  std::cout << getDistance() << " meters " << std::endl;
			  break;
		  case 2:
			  std::cout << getSpeed() << " m/s " << std::endl;
			  break;
		  case 3:
			  std::cout << getTime() << " seconds " << std::endl;
			  break;
		  case 4:
			  std::cout<<"Aborting\n";
			  break;
		  default:
			  std::cout<<"Error, bad input, quitting\n";
			  break;

	}
	return 0;
}
