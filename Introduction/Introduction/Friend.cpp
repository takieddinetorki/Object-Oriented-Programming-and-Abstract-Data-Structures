/*
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class World
{
private:
	string name;
	int birth_year;
	int death_year;
public:
	void setPeople(string, int, int);
	int getBirth() const;
	int getDeath() const;
	string getName() const;
};

void World::setPeople(string n, int b, int d)
{
	name = n;
	birth_year = b;
	death_year = d;
}

int World::getBirth() const
{
	return birth_year;
}

int World::getDeath() const
{
	return death_year;
}

string World::getName() const
{
	return name;
}

int main()
{
	World peo[50];
	bool boo = true;
	int j = 0;

	// Dataset of people
	// Names
	string names[50] =
	{
		"Taki","Jia Ying","Iris","Jun","Pei Yong","Jeremy","Michelle","Sin Yee","Daniel","Hazem",
		"Mohammed","Ryan","Ritchie","Cheah","Hakim","Adel","Muadh","Khoo","Anayis","Anis",
		"Lee","Xiong","Irfan","Iffah","Harold","Jeff","Tommy","John","Arthur","Anas",
		"Hammam","Din","Nur","Nurul","Zineb","Hamzah","Ali","Amar","Omar","Othman",
		"Jerome","Meow","Joanna","Fiona","Sarah","Amir","Fauna","Flora","Edward","Naruto"
	};

	int birth[50] =
	{
		1995, 1995, 1995, 1995, 1995, 1995, 1995, 1995, 1995, 1995,
		1996, 1996, 1996, 1996, 1996, 1996, 1996, 1996, 1996, 1996,
		1997, 1997, 1997, 1997, 1997, 1997, 1997, 1997, 1997, 1997,
		1998, 1998, 1998, 1998, 1998, 1998, 1998, 1998, 1998, 1998,
		1999, 1999, 1999, 1999, 1999, 1999, 1999, 1999, 1999, 1999
	};

	int death[50] =
	{
		2015, 2015, 2015, 2015, 2015, 2015, 2015, 2015, 2015, 2015,
		2016, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 2016,
		2017, 2017, 2017, 2017, 2017, 2017, 2017, 2017, 2017, 2017,
		2018, 2018, 2018, 2018, 2018, 2018, 2018, 2018, 2018, 2018,
		2019, 2019, 2019, 2019, 2019, 2019, 2019, 2019, 2019, 2019
	};

	for (int i = 0; i < 50; i++)
	{
		peo[i].setPeople(names[i], birth[i], death[i]);
	}

	// Dates
	int data[27];
	for (size_t i = 0; i < 27; i++)
	{
		data[i] = 1995 + i;
		//cout << data[i] << endl;
	}

	// Construct the world (The world will never stop until you tell it to obviously)
	while (boo && j < 27)
	{
		cout << "Now is year " << data[j] << ".\n";
		for (int i = 0; i < 50; i++)
		{
			if (data[j] == peo[i].getBirth())
				cout << peo[i].getName() << " is born.\n";
		}

		for (int i = 0; i < 50; i++)
		{
			if (data[j] == peo[i].getDeath())
				cout << "RIP " << peo[i].getName() << " " << peo[i].getBirth() << " - " << peo[i].getDeath() << ".\n";
		}

		if (data[j] == 2021)
		{
			boo = false;
			cout << "The world has ended. Please come again later.";
		}
		else
		{
			boo = true;
			data[j++];
		}

		cout << endl;
	}
}
*/