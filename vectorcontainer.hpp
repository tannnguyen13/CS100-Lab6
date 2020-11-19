#ifndef __VECTOR_CONTAINER_HPP__
#define __VECTOR_CONTAINER_HPP__


#include "container.hpp"
#include "sort.hpp"
#include "base.hpp"
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

class VectorContainer : public Container
{
	private:
		vector <Base*> vectorContainer;
	public:
		void add_element(Base* element);
		void print();
		void sort();
		void swap(int i, int j);
		Base* at(int j);
		int size();
};

#endif //__VECTOR_CONTAINER_HPP__
