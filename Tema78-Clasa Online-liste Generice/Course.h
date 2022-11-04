#include <iostream>
using namespace std;
#include <string>
#include <fstream>


struct Course {

private :
	int id;
	string name;
	int department;

public:

	Course() {

	}

	Course(int id, string name, int department) {

		this->id = id;
		this->name = name;
		this->department = department;

	}

	string descriere() {

		string text = "";

		text += to_string(this->id) + " ";
		text += this->name + " ";
		text += to_string(this->department) + "\n";

		return text;

	}

	int getId() {
		return this->id;
	}

	void setId(int id) {

		this->id = id;

	}

	string getName() {
		return this->name;
	}

	void setName(string name) {

		this->name = name;

	}

	int getDepartment() {
		return this->department;
	}

	void setDepartment(int department) {

		this->department = department;

	}

	string toSave() {

		string text = "";

		text += to_string(this->id) + ",";
		text += this->name + ",";
		text += to_string(this->department);

		return text;

	}

};





















