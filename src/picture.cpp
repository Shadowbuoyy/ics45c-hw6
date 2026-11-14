#include "picture.hpp"
#include <iostream>
#include <utility>

Picture::Picture() : head{nullptr}, tail{nullptr} {}

void Picture::add(const Shape& shape) {
	tail->next = new Node(sha;
	shape->next = nullptr;
	tail = shape;
}

void Picture::print_all(std::ostream& out) const {
	Node* temp = head;
	while(temp != nullptr){
		cout << temp->data;
		temp = temp->next;
	}
}

