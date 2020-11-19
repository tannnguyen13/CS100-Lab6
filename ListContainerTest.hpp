#ifndef __LISTCONTAINERTEST_HPP__
#define __LISTCONTAINERTEST_HPP__

#include "gtest/gtest.h"
#include "base.hpp"
#include "op.hpp"
#include "ListContainer.hpp"

TEST(ListContainerTestSet, AddTest) {
	Op* five = new Op(5);
	ListContainer* test_container = new ListContainer();
	test_container->add_element(five);
	ASSERT_EQ(test_container->size(), 1);
    	EXPECT_EQ(test_container->at(0)->evaluate(), 5);
}
TEST(ListContainerTestSet, PrintString) {
        Op* five = new Op(5);
        ListContainer* test_container = new ListContainer();
        test_container->add_element(five);
        ASSERT_EQ(test_container->size(), 1);
        EXPECT_EQ(test_container->at(0)->stringify(), "5.0");
}
TEST(ListContainerTestSet, SwapTest) {
        Op* five = new Op(5);
	Op* three = new Op(3);
	Op* one = new Op(1);
        ListContainer* test_container = new ListContainer();
        test_container->add_element(five);
	test_container->add_element(three);
	test_container->add_element(one);
        ASSERT_EQ(test_container->size(), 3);
	test_container->swap(0, 2);
        EXPECT_EQ(test_container->at(0)->evaluate(), 1);
	EXPECT_EQ(test_container->at(2)->evaluate(), 5);
}
TEST(ListContainerTestSet, AtTest) {
        Op* five = new Op(5);
        ListContainer* test_container = new ListContainer();
        test_container->add_element(five);
        ASSERT_EQ(test_container->size(), 1);
        EXPECT_EQ(test_container->at(0)->evaluate(), 5);
}
TEST(ListContainerTestSet, SizeTest) {
        Op* five = new Op(5);
        ListContainer* test_container = new ListContainer();
        test_container->add_element(five);
        EXPECT_EQ(test_container->size(), 1);
}

#endif
