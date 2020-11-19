#ifndef __VECTORTEST_HPP__
#define __VECTORTEST_HPP__

#include "gtest/gtest.h"
#include "base.hpp"
#include "add.hpp"
#include "op.hpp"
#include "sub.hpp"
#include "div.hpp"
#include "pow.hpp"
#include "mult.hpp"
#include "tonainer.hpp"
#include "vectorcontainer.cpp"
#include "bubblesort.hpp"

TEST(VectorTest, AddElementTest) {
	Op* one = new Op(1);
	VectorContainer* test = new VectorContainer();

	test->add_element(one);
	
	ASSERT_EQ(test->size(), 1);
	EXPECT_EQ(test->at(0)->evaluate(), 1);
}

TEST(VectorTest, AddMultipleTest) {
	Op* one = new Op(1);
	Op* two = new Op(2);
	VectorContainer* test = new VectorContainer();

	test->add_element(one);
	test->add_element(two);

	ASSERT_EQ(test->size(), 2);
	EXPECT_EQ(test->at(0)->evaluate(), 1);
	EXPECT_EQ(test->at(1)->evaluate(), 2);
}

TEST(VectorTest, PrintTest) {
	Op* one = new Op(1);
	Op* two = new Op(2);
	Add* add = new Add(one, two);
	VectorContainer* test = new VectorContainer();

	test->add_element(add);

	ASSERT_EQ(test->size(), 1);
	EXPECT_EQ(test->print(), "1 + 2");
}

TEST(VectorTest, SwapTest) {
	Op* one = new Op(1);
	Op* two = new Op(2);
	VectorContainer* test = new VectorContainer();

	test->add_element(two);
	test->add_element(one);

	ASSERT_EQ(test->size(),2);
	EXPECT_EQ(test->at(0)->evaluate(), 2);
	EXPECT_EQ(test->at(1)->evaluate(), 1);

	test->swap(0, 1);

	ASSERT_EQ(test->size(),2);
	EXPECT_EQ(test->at(0)->evaluate(), 1);
	EXPECT_EQ(test->at(1)->evaluate(), 2);
}

TEST(SortTestSet, BubbleSortTest) {
	Op* seven = new Op(7);
	Op* two = new Op(2);
	Mult* Tree1 = new Mult(seven, two);

	Op* four = new Op(4);
	Op* three = new Op(3);
	Mult* Tree2 = new Mult(four, three);

	Op* ten = new Op(10);
	Op* five = new Op(5);
	Div* Tree3 = new Mult(10, 5);

	VectorContainer* test = new VectorContainer();
	test->add_element(Tree1);
	test->add_element(Tree2);
	test->add_element(Tree3);

	ASSERT_EQ(test->size(), 3);
	EXPECT_EQ(test->at(0)->evaluate(), 14);
	EXPECT_EQ(test->at(1)->evaluate(), 12);
	EXPECT_EQ(test->at(2)->evaluate(), 2);

	test->set_sort_function(new BubbleSort());
	test->sort();
	
	ASSERT_EQ(test->size(),3);
	EXPECT_EQ(test->at(0)->evaluate(),2);
	EXPECT_EQ(test->at(1)->evaluate(),12);
	EXPECT_EQ(test->at(2)->evlaute(),14);
}
