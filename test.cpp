#include "pch.h"
#include <gtest/gtest.h>

//initial balance-> 500
TEST(AccountDeposit1, DepositMoney1) {
    BankAccount acc;
    EXPECT_EQ(acc.deposit(1000), 1500); //500+1000 = 1500->pass
    EXPECT_TRUE(true);
}


TEST(AccountDeposit2, DepositMoney2) {
    BankAccount acc;
    EXPECT_EQ(acc.deposit(1000), 2000); //500+1000 = 1500->fail
    EXPECT_TRUE(true);
}

TEST(AccountDeposit3, DepositMoney3) {
    BankAccount acc;
    EXPECT_EQ(acc.deposit(-1000), 500); //500->pass
    EXPECT_TRUE(true);
}


TEST(AccountWithdraw1, WithdrawMoney1) {
    BankAccount acc;
    EXPECT_EQ(acc.withdraw(200), 300); //500-200=300->pass
    EXPECT_TRUE(true);
}

TEST(AccountWithdraw2, WithdrawMoney2) {
    BankAccount acc;
    EXPECT_EQ(acc.withdraw(500), 0); //500-500=0->pass
    EXPECT_TRUE(true);
}


TEST(AccountWithdraw3, WithdrawMoney3) {
    BankAccount acc;
    EXPECT_EQ(acc.withdraw(1000), 500); //500->pass
    EXPECT_TRUE(true);
}


TEST(AccountWithdraw4, WithdrawMoney4) {
    BankAccount acc;
    EXPECT_EQ(acc.withdraw(-1000), 500); //500->pass
    EXPECT_TRUE(true);
} 

TEST(ViewBalance1, ShowBalance1) {
    BankAccount acc;
    EXPECT_EQ(acc.returnBalance(), 500); //500->pass
    EXPECT_TRUE(true);
}

TEST(ViewBalance2, ShowBalance2) {
    BankAccount acc;
    EXPECT_EQ(acc.returnBalance(), 10000); //500->fail
    EXPECT_TRUE(true);
}

TEST(ValidAccount1, checkAccountNumber1) {
    BankAccount acc;
    EXPECT_EQ(acc.validAccount(123456789), 123456789); //123456789->pass
    EXPECT_TRUE(true);
}

TEST(ValidAccount2, checkAccountNumber2) {
    BankAccount acc;
    EXPECT_EQ(acc.validAccount(1234), 123456789); //123456789->fail
    EXPECT_TRUE(true);
}

TEST(CheckPin1, CheckPinLen1) {
    BankAccount acc;
    EXPECT_EQ(acc.checkPinSize(1502), true); //true->pass
    EXPECT_TRUE(true);
}


TEST(CheckPin2, CheckPinLen2) {
    BankAccount acc;
    EXPECT_EQ(acc.checkPinSize(171101), false); //false->pass
    EXPECT_TRUE(true);
}


TEST(CheckPin3, CheckPinLen3) {
    BankAccount acc;
    EXPECT_EQ(acc.checkPinSize(345), false); //false->pass
    EXPECT_TRUE(true);
}

int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

