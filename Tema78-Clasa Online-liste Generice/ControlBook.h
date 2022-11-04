#include "functii.h"

template<typename Book>

struct ControlBook {

	List<Book>lista;

	ControlBook() {

		citire();
	}

	void citire() {

		ifstream read("books.txt");

		while (!read.eof()) {
			int id;
			int studentId;
			string title;
			int createdAt;
			read >> id;
			read >> studentId;
			read >> title;
			read >> createdAt;

			Book b(id, studentId, title, createdAt);
			lista.addFinal(b);

		}

	}

	void afisare() {

		Node<Book>* it = lista.iterator();

		while (it) {
			cout << it->data.descriere();
			it = it->next;
		}

	}

};

























