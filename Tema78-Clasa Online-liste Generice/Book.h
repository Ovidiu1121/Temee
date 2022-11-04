#include <iostream>
using namespace std;
#include <string>
#include <fstream>

struct Book {

private:
	int id;
	int studentId;
	string title;
	int createdAt;


public:

	Book() {

	}

	Book(int id, int studentId, string title, int createdAt) {

		this->id = id;
		this->studentId = studentId;
		this->title = title;
		this->createdAt = createdAt;

	}

	string descriere() {

		string text = "";

		text += to_string(this->id) + " ";
		text += to_string(this->studentId) + " ";
		text += this->title + " ";
		text += to_string(this->createdAt) + "\n";

		return text;

	}

	int getId() {
		return this->id;
	}

	void setId(int id) {

		this->id = id;

	}

	int getStudentId() {
		return this->studentId;
	}

	void setStudentId(int studentId) {
		this->studentId = studentId;
	}

	string getTitle() {
		return this->title;
	}

	void setTitle(string title) {
		this->title = title;
	}

	int getCreatedAt() {
		return this->createdAt;
	}

	void setCreatedAt(int createdAt) {
		this->createdAt = createdAt;
	}

	string toSave() {

		string text = "";

		text += to_string(this->id) + ",";
		text += to_string(this->studentId) + ",";
		text += this->title + ",";
		text += to_string(this->createdAt);

		return text;

	}

};
































