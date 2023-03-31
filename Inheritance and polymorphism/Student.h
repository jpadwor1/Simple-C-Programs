#pragma once
#include <string>
using std::string;

class Student
{
private:
	string name;
public:
	Student(string n)
	{
		name = n;
	}

	virtual string print()
	{
		return "Student";
	}
};

