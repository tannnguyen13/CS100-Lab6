#ifndef __SELECTIONSORT_HPP__
#define __SELECTIONSORT_HPP__

#include "container.hpp"
#include "sort.hpp"
#include "base.hpp"

class Container;
class SelectionSort : public Sort {
	public:
		void sort(Container* container) {
			int  minIndex;
			for(int k = 0; k < container->size(); k++) {
				minIndex = k;
				for(int i = k; i <container->size(); i++) {
					if(container->at(i)->evaluate() < container->at(minIndex)->evaluate())
						minIndex = i;
				}
				container->swap(k, minIndex);
			}
				
		}	
};

#endif
