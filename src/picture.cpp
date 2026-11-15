#include "picture.hpp"
#include <iostream>
#include <utility>

Picture::Picture() : head{nullptr}, tail{nullptr} {}

Picture::~Picture() {}

// Stub for copy constructor
Picture::Picture(const Picture& other) : head{nullptr}, tail{nullptr} {
}

// Stub for move constructor
Picture::Picture(Picture&& other) : head{nullptr}, tail{nullptr} {
}

// Stub for swap
void Picture::swap(Picture& other) {
}

// Stub for copy assignment
Picture& Picture::operator=(const Picture& other) {
    return *this;
}

void Picture::add(const Shape& shape) {
	ListNode* new_node = new ListNode{shape.clone(), nullptr};

	if(head == nullptr) {
		head = new_node;
		tail = new_node;
	}
	else {
		tail->next = new_node;
		tail = new_node;
	}
}

void Picture::print_all(std::ostream& out) const {
	ListNode* temp = head;
	while(temp != nullptr){
		temp->shape->print(out);
		temp = temp->next;
	}
}

void Picture::draw_all(std::ostream& out) const {
	ListNode* temp = head;
	while(temp != nullptr) {
		temp->shape->draw(out);
		temp = temp->next;
	}
}

double Picture::total_area() const {
	double total = 0.0;
	ListNode* temp = head;
	while(temp != nullptr) {
		total += temp->shape->area();
		temp = temp->next;
	}

	return total;
}

