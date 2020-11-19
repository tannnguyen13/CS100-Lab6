#include "container.hpp"
#include "vectorcontainer.hpp"
#include "vectorcontainer.cpp"
#include "base.hpp"
#include "SelectionSort.hpp"
#include "add.hpp"
#include "op.hpp"
#include "div.hpp"
#include "mult.hpp"
#include "pow.hpp"
#include "rand.hpp"
#include "ListContainer.hpp"
#include "bubblesort.hpp"
#include <iostream>
#include <vector>

using namespace std;
int main() {
	cout << "Vector of 5, 4, 3, 2, 1" << endl;
	VectorContainer* vcont = new VectorContainer();
	Op* five = new Op(5);
	Op* four = new Op(4);
	Op* three = new Op(3);
	Op* two = new Op(2);
	Op* one = new Op(1);
	vcont->add_element(five);
	vcont->add_element(four);
	vcont->add_element(three);
	vcont->add_element(two);
	vcont->add_element(one);
	vcont->print();
	
	cout << "List of 5, 4, 3, 2, 1" << endl;
	ListContainer* lcont = new ListContainer();
        lcont->add_element(five);
        lcont->add_element(four);
        lcont->add_element(three);
        lcont->add_element(two);
        lcont->add_element(one);
        lcont->print();
	
	vcont->set_sort_function(new BubbleSort());
	vcont->sort();
	cout << "Sorted Vector using BubbleSort." << endl;
	vcont->print();
	
	lcont->set_sort_function(new SelectionSort());
	lcont->sort();
	cout << "Sorted List using SelectionSort." << endl;
	lcont->print();
	return 1;
}
