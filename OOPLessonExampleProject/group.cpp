#include "group.h" 
	Group::Group();
	Group(Student* ls, int sz, string nm);
	Group(string nm);
	~Group();


	void add(Student student) {

	}
	void remove(Student student) {

	}
	void remove(int index);
	Student Group::get(int index) {
		if (index >= 0 && index < size) {
			return list[index]
		}
		return NULL;
	}

	int Group::get_size() {
		return size;
	}
	string Group::convert_to_string();
