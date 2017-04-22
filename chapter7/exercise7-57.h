#ifndef EXERCISE7_57_H
#define EXERCISE7_57_H

#include <string>

using std::string;

class Account {

    private:
        string owner;
        double amount;
        static double interestRate;
        static constexpr double todayRate = 42.42;
        static double initRate() {
            return todayRate;
        }

    public:
        void calculate() {
            amount += amount * interestRate;
        }
        static double rate() {
            return interestRate;
        }
        static void rate(double newRate) {
            interestRate = newRate;
        }
};

double Account::interestRate = initRate();

#endif