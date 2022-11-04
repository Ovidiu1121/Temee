#include <iostream>
using namespace std;
#include <string>
#include <fstream>

struct Enrolment {

private :
	int studentId;
	int courseId;
	int createdAt;

public:

	Enrolment() {

	}

	Enrolment(int studentId, int courseId, int createdAt) {

		this->studentId = studentId;
		this->courseId = courseId;
		this->createdAt = createdAt;

	}

	string descriere() {

		string text = "";

		text +=to_string( this->studentId) + " ";
		text += to_string(this->courseId) + " ";
		text += to_string(this->createdAt) + "\n";

		return text;
	}

	int getStudentId() {
		return this->studentId;
	}

	void setStudentId(int studentId) {

		this->studentId = studentId;

	}

	int getCourseId() {
		return this->courseId;
	}

	void setCourseId(int courseId) {

		this->courseId = courseId;


	}

	int getCreatedAt() {

		return this->createdAt;

	}

	void setCreatedAt(int createdAt) {

		this->createdAt = createdAt;

	}

	string toSave() {

		string text = "";

		text += to_string(this->studentId) + ",";
		text += to_string(this->courseId) + ",";
		text += to_string(this->createdAt);

		return text;

	}

};

























