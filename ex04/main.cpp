#include <iostream>
#include <fstream>

int	main(int argc, char *argv[])
{
	if (argc != 4)
		return (1);
	std::string	filename = argv[1];
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];

	std::ifstream fileIn(filename);
	if (!fileIn.is_open())
		return (2);


	std::ofstream fileOut(filename + ".replace");
	if(!fileOut.is_open())
		return (3);

	std::string	line;
	size_t		idx;
	while (std::getline(fileIn, line))
	{
		idx = line.find(s1);
		while (idx != std::string::npos && line.compare(""))
		{

		}
		if (idx == std::string::npos)
		{
			fileOut << line << std::endl;
			continue;
		}
		line.erase(idx, s1.length());
		line.insert(idx, s2);
		fileOut << line << std::endl;
	}
	fileIn.close();
	fileOut.close();
	return (0);
}
