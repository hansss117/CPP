#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstring>

using namespace std;

int main(int argc, char **argv)
{
	int count = 0;
	string line;
	string word;
	ifstream myfile;

	if (argc != 3)
	{
		std::cout << "Check your arguments" << std::endl;
		return 1;
	}
	myfile.open(argv[1]);
	if (!myfile.is_open())
	{
		std::cout << "The file " << argv[1] << " could not be opened." << std::endl;
		return 1;
	}
	while (std::getline(myfile, line))
	{

		stringstream ss(line);
		while (!ss.eof())
		{
			getline(ss, word, ' ');
			for (size_t i = 0; i < word.length(); i++)
			{
				string tmp;
				tmp = (char *)(word.c_str() + i);
				if (!tmp.find(argv[2]))
				{
					count++;
					break;
				}
			}
		}
	}
	std::cout << "The file " << argv[1] << " contains "<< count << " words containing the motive " << argv[2] << std::endl;
	myfile.close();
	return 0;
}
