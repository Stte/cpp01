#include <iostream>
#include <fstream>
#include <sstream>

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Usage: ./replace file find replace" << std::endl;
		return (1);
	}

	std::string	filename = argv[1];
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];

	if (filename.empty() || s1.empty() || s2.empty() || !s1.compare(s2))
	{
		std::cout << "Usage: ./replace file find replace" << std::endl;
		return (2);
	}
	std::ifstream fileIn(filename);
	if (!fileIn.is_open())
	{
		std::cout << "Error: failed to open input file" << std::endl;
		return (3);
	}
	std::ofstream fileOut(filename + ".replace");
	if(!fileOut.is_open())
	{
		std::cout << "Error: failed to create output file" << std::endl;
		return (4);
	}

	std::stringstream buffer;
	buffer << fileIn.rdbuf();
	std::string data = buffer.str();

	size_t		index = 0;
	size_t		pos = 0;
	while ((index = data.find(s1, pos)) != std::string::npos)
	{
		data.erase(index, s1.length());
		data.insert(index, s2);
		pos = index + s2.length();
	}
	fileOut << data << std::endl;

	fileIn.close();
	fileOut.close();
	return (0);
}
