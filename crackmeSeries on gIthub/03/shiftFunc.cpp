#include <iostream>
#include <string>


void shift(std::string str)
{
	int count = 0;
	char strbuf[120];

	while (count < str.length())
	{
		strbuf[count] = str[count] - 3;
		count++;
	}
	strbuf[count] = 0;
	std::cout << strbuf << std::endl;
}


int main()
{
	shift("Lqydolg#Sdvvzrug$"); // first string found when it doesnt jump -> Invalid Password!
	shift("Sdvvzrug#RN$$$#=,"); // found when it jumps -> after test -> Password OK!!! :)
}
