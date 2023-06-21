#include <gtest/gtest.h>

#include "../include/mdfa-key-value-tests.h"

namespace mdfa_kv {

TEST(MDFA, MdfaTester) {
    ASSERT_EQ(sizeof(MdfaTester::MDFA_TESTER_ID), 1);
}

} // namespace mdfa_kv

int main(int argc, char* argv[]) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
