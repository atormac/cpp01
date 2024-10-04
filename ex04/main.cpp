#include <iostream>
#include <fstream>
#include <regex>

std::string replace_substr(std::string line, std::string from, std::string to)
{
	size_t pos = 0;
	std::string result;
	size_t from_len = from.length();

	while ((pos = line.find(from, pos)) != std::string::npos)
	{
		result += line.substr(0, pos) + to;
		line = line.substr(pos + from_len);
		pos = 0;
	}
	result += line;
	return result;
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error: invalid arguments" << std::endl;
		return (1);
	}
	std::ifstream input(argv[1]);
	std::string output_filename = std::string(argv[1]) + ".replace";

	if (!input.is_open())
	{
		std::cout << "Error: failed to open input file" << std::endl;
		return (1);
	}
	std::ofstream output(output_filename);
	if (!output.is_open())
	{
		std::cout << "Error: failed to open output file" << std::endl;
		input.close();
		return (1);
	}
	std::cout << output_filename << std::endl;

	std::string line;
	while (getline(input, line))
	{
		line = replace_substr(line + "\n", argv[2], argv[3]);
		output << line;
	}

	input.close();
	output.close();
	return (0);
}
