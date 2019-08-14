#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int count = 0;
	system("dir /b > Infected.txt");

	ifstream infect("Infected.txt");

	if (!infect.eof())
	{

	}

	infect.close();

	return 0;
}