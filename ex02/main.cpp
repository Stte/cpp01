#include <string>
#include <iostream>

int main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "Memory address of"	<< '\n'
			<< "the string variable: "	<< &string << '\n'
			<< "the stringPTR: "		<< &stringPTR << '\n'
			<< "the stringREF: "		<< &stringREF << std::endl;
	std::cout << "Value of" << '\n'
			<< "the string variable: "	<< string << '\n'
			<< "the stringPTR: "		<< *stringPTR << '\n'
			<< "the stringREF: "		<< stringREF << std::endl;

	return (0);
}
