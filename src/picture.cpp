#include "picture.hpp"
#include <iostream>
#include <utility>

Picture::Picture() : head{nullptr}, tail{nullptr} {}

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

