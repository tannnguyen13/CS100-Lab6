#ifndef __LISTCONTAINER_HPP__
#define __LISTCONTAINER_HPP__


#include "container.hpp"
#include "base.hpp"
#include <algorithm>
#include <iostream>
#include <list> 
#include <iterator> 

using namespace std;


class ListContainer : public Container {
	private:
		list<Base*> myList;
	public:
		void add_element(Base* element) {
			myList.push_back(element);
		}
		void print() {
			list<Base*>::iterator iter;
			for( iter = myList.begin(); iter != myList.end(); iter++) {
				Base* temp = *iter;
				cout << temp->stringify() << ", ";	
			}
			cout << endl;	
		}
		void sort() {
			if(sort_function == nullptr)
				return;
			sort_function->sort(this);
		}
		void swap(int i, int j) {
			list<Base*>::iterator iter1 = myList.begin();
			list<Base*>::iterator iter2 = myList.begin();
			for(int k = 0; k < i; k++)
				iter1++;
		   	for(int k = 0; k < j; k++)
                                iter2++;	
			iter_swap(iter1, iter2);
		}
		Base* at(int i) {
			list<Base*>::iterator iter = myList.begin();
			for(int k = 0; k < i; k++) {
				iter++;
			}
			return *iter;
		}
		int size() {
			return myList.size();
		}
};

#endif
