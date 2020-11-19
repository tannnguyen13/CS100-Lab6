#ifndef __VECTOR_CONTAINER_CPP__
#define __VECTOR_CONTAINER_CPP__

#include "vectorcontainer.hpp"

void VectorContainer::add_element(Base* element) {
	vectorContainer.push_back(element);
}

void VectorContainer::print() {
	for(unsigned int i = 0; i < vectorContainer.size(); i++) {
		cout << vectorContainer.at(i)->stringify() << ", ";
	}
	cout << endl;
}

void VectorContainer::sort() {
	if(sort_function == nullptr) {
		throw "sort_function is null";
	}
	sort_function->sort(this);
}

void VectorContainer::swap(int i, int j) {
	Base* temp1 = vectorContainer.at(i);
	Base* temp2 = vectorContainer.at(j);
	vectorContainer.at(i) = temp2;
	vectorContainer.at(j) = temp1;
}

Base* VectorContainer::at(int i) {
	return vectorContainer.at(i);
}

int VectorContainer:: size() {
	return vectorContainer.size();
}

#endif
