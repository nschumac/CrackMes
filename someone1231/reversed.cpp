#include <iostream>
#include <string>


int main(int argc, char *argv[])
{
	std::string password = "123214456";
	std::string input;
	int count = 5;

	do
	{
		std::cout << "Please enter password: ";
		std::cin >> input;
		--count;
		if (input != password)
			std::cout << "You have " << count << ((count != 1) ? " attempts" : " attempt") << " left" << std::endl;
	}while (input != password && count > 0);
	if (input == password)
		std::cout << "Correct!" << std::endl;
	else
		std::cout << "You ran out of attempts" << std::endl;
	return 0;
}
