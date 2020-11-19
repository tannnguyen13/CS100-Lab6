#ifndef __SELECTIONSORTTEST_HPP__
#define __SELECTIONSORTTEST_HPP__

#include "gtest/gtest.h"
#include "SelectionSort.hpp"
#include "vectorcontainer.cpp"
#include "ListContainer.hpp"
#include "add.hpp"
#include "op.hpp"
#include "sub.hpp"
#include "div.hpp"
#include "pow.hpp"
#include "mult.hpp"

TEST(SortTestSet, SelectionSortTest) {
    Op* seven = new Op(7);
    Op* four = new Op(4);
    Mult* TreeA = new Mult(seven, four);

    Op* three = new Op(3);
    Op* two = new Op(2);
    Add* TreeB = new Add(three, two);

    Op* ten = new Op(10);
    Op* six = new Op(6);
    Sub* TreeC = new Sub(ten, six);

    VectorContainer* container = new VectorContainer();
    container->add_element(TreeA);
    container->add_element(TreeB);
    container->add_element(TreeC);

    ASSERT_EQ(container->size(), 3);
    EXPECT_EQ(container->at(0)->evaluate(), 28);
    EXPECT_EQ(container->at(1)->evaluate(), 5);
    EXPECT_EQ(container->at(2)->evaluate(), 4);

    container->set_sort_function(new SelectionSort());
    container->sort();

    ASSERT_EQ(container->size(), 3);
    EXPECT_EQ(container->at(0)->evaluate(), 4);
    EXPECT_EQ(container->at(1)->evaluate(), 5);
    EXPECT_EQ(container->at(2)->evaluate(), 28);
}

TEST(SortTestSet, SelectionSortTestNeg) {
    Op* seven = new Op(-7);
    Op* four = new Op(-4);
    Mult* TreeA = new Mult(seven, four);

    Op* three = new Op(-3);
    Op* two = new Op(-2);
    Add* TreeB = new Add(three, two);

    Op* ten = new Op(-10);
    Op* six = new Op(-6);
    Sub* TreeC = new Sub(ten, six);

    VectorContainer* container = new VectorContainer();
    container->add_element(TreeA);
    container->add_element(TreeB);
    container->add_element(TreeC);

    ASSERT_EQ(container->size(), 3);
    EXPECT_EQ(container->at(0)->evaluate(), 28);
    EXPECT_EQ(container->at(1)->evaluate(),-5);
    EXPECT_EQ(container->at(2)->evaluate(), -4);

    container->set_sort_function(new SelectionSort());
    container->sort();

    ASSERT_EQ(container->size(), 3);
    EXPECT_EQ(container->at(0)->evaluate(), -5);
    EXPECT_EQ(container->at(1)->evaluate(), -4);
    EXPECT_EQ(container->at(2)->evaluate(), 28);
}

TEST(SortTestSet, SelectionSortTestZero) {
    Op* seven = new Op(0);
    Op* four = new Op(0);
    Mult* TreeA = new Mult(seven, four);

    Op* three = new Op(3);
    Op* two = new Op(2);
    Add* TreeB = new Add(three, two);

    Op* ten = new Op(10);
    Op* six = new Op(6);
    Sub* TreeC = new Sub(ten, six);

    VectorContainer* container = new VectorContainer();
    container->add_element(TreeA);
    container->add_element(TreeB);
    container->add_element(TreeC);

    ASSERT_EQ(container->size(), 3);
    EXPECT_EQ(container->at(0)->evaluate(), 0);
    EXPECT_EQ(container->at(1)->evaluate(), 5);
    EXPECT_EQ(container->at(2)->evaluate(), 4);

    container->set_sort_function(new SelectionSort());
    container->sort();

    ASSERT_EQ(container->size(), 3);
    EXPECT_EQ(container->at(0)->evaluate(), 0);
    EXPECT_EQ(container->at(1)->evaluate(), 4);
    EXPECT_EQ(container->at(2)->evaluate(), 5);
}
#endif
