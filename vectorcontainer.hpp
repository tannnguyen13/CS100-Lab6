#ifndef __VECTOR_CONTAINER_HPP__
#define __VECTOR_CONTAINER_HPP__


#include "container.hpp"
#include "sort.hpp"
#include "base.hpp"
#include <algorithm>
#include <vector>

class VectorContainer : public Container
{
	private:
		vector <Base*> vectorContainer;
	public:
		VectorContainer() : Container() { sort_function = nullptr };
		VectorContainer(Sort* function) : Container() { sort_function = function};
		void set_sort_function(Sort* sort_function);
		virtual void add_element(Base* element) = 0;
		virtual void print() = 0;
		virtual void sort() = 0;
		virtual void swap(int i, int j) = 0;
		virtual Base* at(int j) = 0;
		virtual int size() = 0;
};

#endif //__VECTOR_CONTAINER_HPP__
