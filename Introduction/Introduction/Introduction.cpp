#include <iostream>
using namespace std;
/*
* Instruction:
* Construct a program using an object-oriented approach to simulate the world, its people, and 
* the lifecycle of people
* The program should have an exact number of 50 people. The world is emitated with a while 
* loop that runs from year 1995 until the year 2021 (2021 is the end of the world the apocalypse). 
* 
* Your program should:
*	- Give birth to people in the right year
*	- Let people meet their demise (death) in the exact year of their life
*	- Display "World created" when the word starts, "<name of perosn> is born" when a person is born, 
*		"RIP <name> <year of birth> - <year of death>" when a person dies
*	- If it's the end of the world kill all people and display "The world has ended. Please come again later"
*	when it's year 2021
* 
* HINTS:
*	- Use a class HUMAN or PERSON to hold the characteristics of a each person
*	- Use an array of objects to initiate the people.
*	- Don't try to copy paste the array given. Use pointers to point to the array without having to copy the data
*	- There are ABSOLUTELY NO limitiations to what you can use. So long as you get the program done that's what matters
*/

class Human
{
private:
	const string name;
	int age, yearOfBirth, demise;
	bool committed;
public:
	Human(string name, int age, int yearOfBirth) : name(name), age(age),  yearOfBirth(yearOfBirth)
	{}
	~Human()
	{
		cout << "RIP: " << name << "\n" << yearOfBirth << " - " << demise;
	}
};
int main()
{
	string names[50] =
	{
		"Taki","Jia Ying","Iris","Jun","Pei Yong","Jeremy","Michelle","Sin Yee","Daniel","Hazem",
		"Mohammed","Ryan","Ritchie","Cheah","","","","","","",
		"","","","","","","","","","",
		"","","","","","","","","","",
		"","","","","","","","","",""
	};
	// Data set of people
	int data[50];
	Human person("Taki Eddine", 20, 2000);
	while (true)
	{

	}
}

