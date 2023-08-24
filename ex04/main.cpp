#include <iostream>
#include <fstream>

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
	std::string	line;
	size_t		index;
	while (std::getline(fileIn, line))
	{
		while ((index = line.find(s1)) != std::string::npos)
		{
			line.erase(index, s1.length());
			line.insert(index, s2);
		}
		fileOut << line << std::endl;
	}
	fileIn.close();
	fileOut.close();
	return (0);
}
