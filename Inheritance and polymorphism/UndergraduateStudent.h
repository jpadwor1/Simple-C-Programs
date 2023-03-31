#pragma once
#include "Student.h"
class UndergraduateStudent : public Student
{
private:
	string rank;
public:
	UndergraduateStudent( string r, string n ) :
		Student(n)
	{
		rank = r;
	}

	string print()
	{
		return "UndergraduateStudent";
	}

};

