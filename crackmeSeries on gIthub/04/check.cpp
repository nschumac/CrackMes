#include <iostream>
#include <string>
#include <cstdio>

void check(std::string str)
{
	int count1 = 0, count2 = 0;
	char chr;
	int buf2;

	while (count1 < str.length())
	{
		chr = str[count1];
		sscanf (&chr, "%d", &buf2);
		count2 += buf2;
		if (count2 == 15)
		{
			std::cout << "Correct Password! :D" << std::endl;
			return ;
		}
		count1++;
	}
	std::cout << "Incorrect Password!" << std::endl;
}

int main()
{
	check("2222222100");// shoudl print correct password sum is 15
	check("555");// shoudl print correct password sum is 15
	check("556"); // should print incorrect sum is greater than 15
	return 0;
}
