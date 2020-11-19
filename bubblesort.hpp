#ifndef __BUBBLESORT_HPP__
#define __BUBBLESORT_HPP__

#include "container.hpp"
#include "sort.hpp"
#include "base.hpp"

class Container;
class BubbleSort : public Sort {
	public:
		void sort(Container* container) {
			int flag = 1;
			Base* temp;
			for(unsigned int i = 1; i <= container->size();i++) {
				flag = 0;
				for(unsigned int j = 0; j < container->size();j++) {
					if(container->at(j+1)->evaluate() > container->at(j)->evaluate()) {
						container->swap(j+1,j);
					}
				}
			}
		}
};

#endif //__BUBBLESORT_HPP__
