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
        {"C001", "Puneet"},
        {"C002", "Medha"},
        {"C003", "Rajat"},
        {"C004", "Chandan"},
        {"C005", "Nitin"},
    };

    unordered_set<int> uniqueProductIDs;

    for(const auto &product: products){
        uniqueProductIDs.insert(product.productID);
    }

    // Printing statements
    cout << "Products:\n";
    for (const auto &product : products) {
        cout << "ID: " << product.productID << ", Name: " << product.name
             << ", Category: " << product.category << "\n";
    }

    cout << "\nRecent Customers (Deque):\n";
    for (const auto &customer : recentCustomers) {
        cout << customer << " ";
    }
    cout << "\n";

    cout << "\nOrder History (List):\n";
    for (const auto &order : orderHistory) {
        cout << "Order ID: " << order.orderID
             << ", Product ID: " << order.ProductID
             << ", Quantity: " << order.quantity
             << ", Customer: " << order.customerID
             << ", Date: " << order.orderDate << "\n";
    }

    cout << "\nProduct Categories (Set):\n";
    for (const auto &category : categories) {
        cout << category << "\n";
    }

    cout << "\nProduct Stock (Map):\n";
    for (const auto &stock : productStock) {
        cout << "Product ID: " << stock.first
             << ", Stock: " << stock.second << "\n";
    }

    cout << "\nCustomer Orders (Multimap):\n";
    for (const auto &entry : customerOrders) {
        const auto &order = entry.second;
        cout << "Customer: " << entry.first
             << ", Order ID: " << order.orderID
             << ", Product ID: " << order.ProductID
             << ", Quantity: " << order.quantity
             << ", Date: " << order.orderDate << "\n";
    }

    cout << "\nCustomer Data (Unordered Map):\n";
    for (const auto &customer : customerData) {
        cout << "Customer ID: " << customer.first
             << ", Name: " << customer.second << "\n";
    }

    cout << "\nUnique Product IDs (Unordered Set):\n";
    for (const auto &productID : uniqueProductIDs) {
        cout << productID << " ";
    }
    cout << "\n";

    return 0;
}
