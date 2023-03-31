#pragma once
#include "Student.h"
class GraduateStudent : public Student
{
private:
	string project;
public:
	GraduateStudent(string p, string n)
		: Student(n)
	{
		project = p;
	}

	string print()
	{
		return "GraduateStudent";
	}
	
};

