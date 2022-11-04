#include <iostream>

#include <string>
#include <fstream>

using namespace std;

struct Student {

private:
	int id;
	string name;
	int age;
	bool isAdmin;

public:

	Student() {

	}

	Student(int id, string name, int age, bool isAdmin) {

		this->id = id;
		this->name = name;
		this->age = age;
		this->isAdmin = isAdmin;

	}

	string descriere() {

		string text = "";

		text += to_string(this->id) + " ";
		text += this->name + " ";
		text += to_string(this->age) + " ";
		text += to_string(this->isAdmin) + "\n";

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

	int getAge() {
		return this->age;
	}

	void setAge(int age) {

		this->age = age;

	}

	bool getIsAdmin() {
		return this->isAdmin;
	}

	void setIsAdmin(bool isAdmin) {

		this->isAdmin = isAdmin;

	}

	string toSave() {

		string text = "";

		text += this->id + ",";
		text += this->name + ",";
		text += this->age + ",";
		text += this->isAdmin;

		return text;

	}

};
































