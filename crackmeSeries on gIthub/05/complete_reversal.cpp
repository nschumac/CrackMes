#include <iostream>
#include <string>
#include <cstdio>


// std::string instead of char * makes it easier
void parell(std::string str)
{
	int num;

	sscanf(str.c_str(), "%d", &num);
	if (!(num & 0x1)) // Even Number
	{
		printf("Password OK!\n");
		exit(0);
	}
	return ;
}

// std::string instead of char * makes it easier
void check(std::string str)
{
	int var_4, var_8, var_C;
	char src;

	var_8 = var_C = 0; // counters
	for (; var_C < str.length(); ++var_C)
	{
		src = str[var_C];
		sscanf(&src, "%d", &var_4);
		var_8 += var_4;
		if (var_8 == 16)
			parell(str);
	}
	printf("Password Incorrect!\n");
}


int main()
{

	char str[120]; // my _input str

	printf("IOLI Crackme Level 0x05\n reversed\n");
	printf("Password: ");
	scanf("%s", str);
	check(str);
}


