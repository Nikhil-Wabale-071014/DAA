/*Implement a problem of minimum work to be done 
per day to finish given tasks within D days problem.
Statement: Given an array task[] of size N denoting 
amount of work to be done for each task, the problem 
is to find the minimum amount of work to be done on 
each day so that all the tasks can be completed in at 
most D days. Note: On one day work can be done for 
only one task.
Input: task[] = [3, 4, 7, 15], D = 10 
Output: 4
Input: task[] = [30, 20, 22, 4, 21], D = 6 
Output: 22*/
#include <iostream>
#include <vector>
#include <algorithm> // For min and max functions

int maxProfit(const std::vector<int>& prices) {
    if (prices.size() < 2) return 0;  // No profit if fewer than 2 days

    int min_price = prices[0];
    int max_profit = 0;

    for (int price : prices) {
        min_price = std::min(min_price, price);               // Update minimum price
        max_profit = std::max(max_profit, price - min_price); // Update maximum profit
    }

    return max_profit;
}

int main() {
    int n;
    std::cout << "Enter the number of days: ";
    std::cin >> n;

    if (n < 2) {
        std::cout << "You need at least 2 days to calculate profit." << std::endl;
        return 0;
    }

    std::vector<int> prices(n);
    std::cout << "Enter the stock prices: ";
    for (int i = 0; i < n; i++) {
        std::cin >> prices[i];
    }

    std::cout << "Maximum Profit: " << maxProfit(prices) << std::endl;
    return 0;
}
