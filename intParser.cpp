#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstring>

using namespace std;

int main(int argc, char **argv)
{
	string	line;
	string	word;
	int		nb;
	int		prime = 0;
	int		i;

	for (string line; getline(cin, line); )
	{
		std::cout << line << std::endl;
		stringstream	ss(line);
		while (!ss.eof())
		{
			i = 2;
			prime = 1;
			getline(ss, word, ' ');
			nb = stoi(word);
			if (nb <= 3)
				prime = 1;
			while (i <= nb / i)
			{
				if (nb % i == 0)
				{
					prime = 0;
					break;
				}
				i++;
			}
			if (i <= nb / i)
			{
				prime = 0;
			}
			if (nb < 1)
				prime = 0;
			if (prime)
				cout << nb << " is a prime: True" << endl;
			else
				cout << nb << " is a prime: False" << endl;
		}
	}
	return 0;
}
