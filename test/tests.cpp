// Copyright 2022 GHA Test Team

#include <gtest/gtest.h>
#include "Automata.h"

TEST(test1, actionOnTrue) {
	Automata temp;

	ASSERT_EQ(1, temp.on());
}

TEST(test2, actionOffFalse) {
	Automata temp;

	ASSERT_EQ(0, temp.off());
}

TEST(test3, actionOffTrue) {
	Automata temp;
	temp.on();

	ASSERT_EQ(1, temp.off());
}

TEST(test4, actionCoinFalse) {
	Automata temp;

	ASSERT_EQ(0, temp.coin(10));
}

TEST(test5, actionCoinTrue) {
	Automata temp;
	temp.on();

	ASSERT_EQ(1, temp.coin(10));
}

TEST(test6, actionGetStateTrue) {
	Automata temp;

	ASSERT_EQ(0, temp.getState());
}

TEST(test7, actionChoiceFalse) {
	Automata temp;

	ASSERT_EQ(0, temp.choice(1));
}

TEST(test8, actionChoiceTrue) {
	Automata temp;
	temp.on();
	temp.coin(100);
	ASSERT_EQ(1, temp.choice(1));
}

TEST(test9, actionCheckFalse) {
	Automata temp;

	ASSERT_EQ(0, temp.check());
}

TEST(test10, actionCheckTrue) {
	Automata temp;
	temp.on();
	temp.coin(100);
	temp.choice(1);
	ASSERT_EQ(1, temp.check());
}

TEST(test11, actionCancelFalse) {
	Automata temp;

	ASSERT_EQ(0, temp.cancel());
}

TEST(test12, actionCancelTrue) {
	Automata temp;
	temp.on();
	temp.coin(100);
	temp.choice(1);
	ASSERT_EQ(1, temp.cancel());
}

TEST(test13, actionGetStateTrue) {
	Automata temp;
	temp.on();
	temp.coin(100);
	temp.choice(1);
	ASSERT_EQ(3, temp.getState());
}
