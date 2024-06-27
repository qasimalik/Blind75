/*
You are given an array prices where prices[i] is the price of a given stock on the ith day. 
You want to maximize your profit by choosing a single day to buy one stock and 
choosing a different day in the future to sell that stock. 
Return the maximum profit you can achieve from this transaction. 
If you cannot achieve any profit, return 0.
*/


/**
* Calculates the maximum profit that can be achieved by buying and selling a stock.
*
* @param prices a vector of integers representing the prices of a stock on each day
*
* @return the maximum profit that can be achieved by buying and selling the stock
*
* @throws None
*/
int maxProfit(vector<int>& prices) {
    int minPrice = INT_MAX;
    int maxProfit = 0;
    
    for (int price : prices) {
        if (price < minPrice) {
            minPrice = price; // Update minPrice if current price is lower
        } else if (price - minPrice > maxProfit) {
            maxProfit = price - minPrice; // Update maxProfit if current profit is higher
        }
    }
    
    return maxProfit;
}
