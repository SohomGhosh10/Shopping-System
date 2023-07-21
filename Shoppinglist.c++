#include <iostream>
#include <vector>
using namespace std;

class ShoppingSystem {
private:
    vector<int> priceList;

public:
    void addToCart(int itemPrice) {
        priceList.push_back(itemPrice);
    }

    int totalItemPurchased() {
        return priceList.size();
    }

    void removeLastPurchasedItem() {
        if (!priceList.empty()) {
            priceList.pop_back();
        }
    }

    int calculateTotalPrice() {
        int sum = 0;
        for (int price : priceList) {
            sum += price;
        }
        return sum;
    }

    bool isCartEmpty() {
        return priceList.empty();
    }

    void removeAllPurchasedElementsFromCart() {
        priceList.clear();
    }
};

int main() {
    ShoppingSystem customer1;


    customer1.addToCart(150); 
    customer1.addToCart(75); 
    customer1.addToCart(95); 

    cout << "Total items purchased: " << customer1.totalItemPurchased() << endl;

 
    cout << "Total price: " << customer1.calculateTotalPrice() << endl;

    customer1.removeLastPurchasedItem();

    
    cout << "Total items purchased: " << customer1.totalItemPurchased() << endl;


    cout << "Total price: " << customer1.calculateTotalPrice() << endl;

    
    cout << "Is cart empty? " << customer1.isCartEmpty() << endl;

    
    customer1.removeAllPurchasedElementsFromCart();

    
    cout << "Is cart empty? " << customer1.isCartEmpty() << endl;

    return 0;
}