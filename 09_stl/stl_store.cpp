#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <string>
#include <ctime>
#include <unordered_set>
#include <unordered_map>


using namespace std;

struct Product {
    int productID;
    string name;
    string category;
};

struct Order {
    int orderID;
    int ProductID;
    int quantity;
    string customerID;
    time_t orderDate;
};

int main(){
    vector<Product> products = {
        {101, "Laptop", "Electronics"},
        {102, "SmartPhone", "Electronics"},
        {103, "Coffe Maker", "Kitchen"},
        {104, "Blender", "Kitchen"},
        {105, "Desk lamp", "Home"},
    };

    deque<string> recentCustomers = {"C001", "C002", "C003"};

    recentCustomers.push_back("C004");
    recentCustomers.push_front("C005");

    list<Order> orderHistory;

    orderHistory.push_back({1, 101, 1, "C001", time(0)});
    orderHistory.push_back({2, 102, 2, "C002", time(0)});
    orderHistory.push_back({3, 103, 1, "C003", time(0)});

    set<string> categories;
    for(const auto &product: products){
        categories.insert(product.category);
    }

    map<int, int> productStock = {
        {101, 10},
        {102, 20},
        {103, 15},
        {104, 5},
        {105, 7},
    };

    multimap<string, Order> customerOrders;
    for(const auto &order: orderHistory){
        customerOrders.insert({order.customerID, order});
    }

    unordered_map<string, string> customerData = {
        {"C001", "Alice"},
        {"C002", "hitesh"},
        {"C003", "Vidya"},
        {"C004", "max"},
        {"C005", "harry"},
    };

    unordered_set<int> uniqueProductIDs;

    for(const auto &product: products){
        uniqueProductIDs.insert(product.productID);
    }

    // Printing statements
    cout << "Products:\n";
    for (const auto &product : products) {
    cout << product.productID << " - " << product.name << " (" << product.category << ")\n";
    }

    cout << "\nRecent Customers:\n";
    for (const auto &customer : recentCustomers) {
    cout << customer << " ";
    }
    cout << endl;

    cout << "\nOrder History:\n";
    for (const auto &order : orderHistory) {
    cout << "Order ID: " << order.orderID << ", Product ID: " << order.ProductID
         << ", Customer: " << order.customerID << ", Quantity: " << order.quantity
         << ", Time: " << ctime(&order.orderDate) << "\n";;
    }

    cout << "\nProduct Categories:\n";
    for (const auto &category : categories) {
        cout << category << "\n";
    }

    cout << "\nProduct Stock:\n";
    for (const auto &stock : productStock) {
        cout << "Product ID: " << stock.first
             << ", Stock: " << stock.second << "\n";
    }

    return 0;
}
