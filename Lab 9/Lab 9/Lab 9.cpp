#include <iostream>
#include "Meal.h"
#include "Order.h"

using namespace std;

int main()
{
    
    Order order(1,3);

    // Add the specified items to the order
    order.addItem(102, "Burger", 550.00);
    order.addItem(114, "Sandwich", 390.00);
    order.addItem(215, "Fish&chips", 450.00);

    // Calculate the total price of the order
    order.calTotPrice();
    
    return 0;
}
