/*
 • Business P3.20
 A supermarket awards coupons depending on how much a customer spends on groceries. For example, if you spend $50, you will get a coupon worth eight percent of that amount. The following table shows the percent used to calculate the coupon awarded for different amounts spent. Write a program that calculates and prints the value of the coupon a person can receive based on groceries purchased.
 
 Here is a sample run:
 
 Please enter the cost of your groceries: 14
 You win a discount coupon of $ 1.12. (8% of your purchase)
 
 Money Spent                Coupon Percentage
 Less than $10              No coupon
 From $10 to $60            8%
 More than $60 to $150      10%
 More than $150 to $210     12%
 More than $210             14%
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "Please enter the cost of your groceries: ";
    float spent, coupon;
    cin >> spent;
    
    if (spent < 10)
    {
        coupon = 0;
    }
    else if (spent > 10 && spent <= 60)
    {
        coupon = 0.08;
    }
    else if (spent > 60 && spent <= 150)
    {
        coupon = 0.10;
    }
    else if (spent > 150 && spent <= 210)
    {
        coupon = 0.12;
    }
    else
    {
        coupon = 0.14;
    }
    cout << "You win a discount coupon of $ " << fixed << setprecision(2) << spent * coupon << ". (" << coupon * 100 << "% of your purchase)" << endl;
}
