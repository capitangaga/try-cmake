//
// Created by Кирилл Головко on 01.09.2018.
//

#include <gtest/gtest.h>

#ifndef TRYTESTS_TESTER_H
#define TRYTESTS_TESTER_H


TEST(tests, test1){
    EXPECT_EQ(2, 2);
}

TEST(tests, test2){
    EXPECT_EQ(2, 3);
}

int main(int argc, char** argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}


#endif //TRYTESTS_TESTER_H
