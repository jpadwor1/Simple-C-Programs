#include <iostream>
#include <vector>
#include "GraduateStudent.h"
#include "UndergraduateStudent.h"


class Person
{
private:
	string name;
public:
	Person(string n)
	{
		name = n;
	}

};

class Project
{
private:
	char code;

public:
	Project(char c)
	{ 
		code = c;
	}
};

class Employee : public Person
{
private:
	Project projectObject;
	int id;
public:
	Employee(string s, char c, int i)
		: Person(s), 
		  projectObject(c),
		  id(i)
	{
	}
		  


};





using std::vector;

using std::cout;
using std::endl;

int main()
{


	Student s("Joe Jackson");
	Student* sh = new Student("Jane Dough");

	GraduateStudent gs("CivilEngineering", "John Dough");
	GraduateStudent* gsh = 
		new GraduateStudent("AerospaceRockets", "Jim Blogs");
	UndergraduateStudent* ugsh = 
		new UndergraduateStudent("Sophmore", "Jennifer Cavaliere");

	/* polymorphic behavior */
	vector< Student* > container;
	container.push_back(sh);
	container.push_back(gsh);
	container.push_back(ugsh);

	for (int i = 0; i < container.size(); i++)
	{
		cout << container[i]->print() << endl; // should invoke each individual classes print
	}




}