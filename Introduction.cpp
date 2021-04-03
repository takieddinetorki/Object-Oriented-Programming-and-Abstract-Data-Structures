#include <iostream>
/*
* Instruction:
* Construct a program using an object-oriented approach to simulate the world, its people, and
* the life-cycle of people
* The program should have an exact number of 50 people. The world is imitated with a while
* loop that runs from year 1995 until the year 2021 (2021 is the end of the world the apocalypse).
*
* Your program should:
*	- Give birth to people in the right year
*	- Let people meet their demise (death) in the exact year of their life
*	- Display "World created" when the word starts, "<name of person> is born" when a person is born,
*		"RIP <name> <year of birth> - <year of death>" when a person dies
*	- If it's the end of the world kill all people and display "The world has ended. Please come again later"
*	when it's year 2021
*
* HINTS:
*	- Use a class HUMAN or PERSON to hold the characteristics of a each person
*	- Use an array of objects to initiate the people.
*	- Don't try to copy paste the array given. Use pointers to point to the array without having to copy the data
*	- There are ABSOLUTELY NO limitations to what you can use. So long as you get the program done that's what matters
*/
class Human
{
private:
	std::string name;
	int birth, death;
public:
	Human() {}
	// This is ABSOLUTELY useless, just added for demonstration only
	Human(std::string name) : name(name)
	{
		setLifeCycle();
		std::cout << name << " is set to be born in" << birth << ". Welcome to hell fella/lady\n";
	}
	~Human(){ std::cout << "RIP: " << name << " " << birth << " - " << death << "\n"; }
	int getDeath() const {
		return death;
	}
	int getBirth() const {
		return birth;
	}
	std::string getName() const {
		return name;
	}
	void setLifeCycle()
	{
		birth = rand() % 27 + 1995;
		death = rand() % (2021 - birth + 1) + birth;
	}
	void setName(std::string name)
	{
		this->name = name;
	}
};
int main()
{
	srand(time(0));
	// Dataset of people
	// Names
	std::string names[50] = {
		"Taki","Jia Ying","Iris","Jun","Pei Yong","Jeremy","Michelle","Sin Yee","Daniel","Hazem",
		"Mohammed","Ryan","Ritchie","Cheah","Hakim","Adel","Muadh","Khoo","Anayis","Anis",
		"Lee","Xiong","Irfan","Iffah","Harold","Jeff","Tommy","John","Arthur","Anas",
		"Hammam","Din","Nur","Nurul","Zineb","Hamzah","Ali","Amar","Omar","Othman",
		"Jerome","Meow","Joanna","Fiona","Sarah","Amir","Fauna","Flora","Edward","Naruto"
	};
	// Dates
	int data[27];
	for (size_t i = 0; i < 27; i++)
	{
		data[i] = 1995 + i;
	}
	// Set PEOPLE
	Human people[50];
	for (size_t i = 0; i < 50; i++)
	{
		people[i].setName(names[i]);
		people[i].setLifeCycle();
	}
	// Construct the world (The world will never stop until you tell it to obviously)
	int WORLD_YEAR = 1995;
	while (true)
	{
		for (size_t i = 0; i < 50; i++)
		{
			if (people[i].getDeath() == WORLD_YEAR)
			{
				people[i].~Human();
			}
			else if (people[i].getBirth() == WORLD_YEAR)
			{
				std::cout << people[i].getName() << " is born. Welcome to hell fella/lady\n";
			}
		}
		WORLD_YEAR++;
		if (WORLD_YEAR == 2022)
		{
			std::cout << "END OF THE WORLD, PLEASE COME BACK LATER" << std::endl;
			exit(-5);
		}
	}
}
