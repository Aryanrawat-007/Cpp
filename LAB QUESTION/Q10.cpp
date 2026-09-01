
10.Create a class called Invoice that a hardware store might use to represent an invoice for an item sold at the store. An Invoice should include 
four pieces of information as instance. 
Data Members - 
• partNumber (type char array) 
• partDescription (type char array) 
• quantity of the item being purchased (type int) 
• price_per_item (type double) 

Your class should have a constructor that initializes the four instance variables. Provide a set and a get method for each instance variable. In 
addition, provide a method named getInvoiceAmount() that calculates the invoice amount (i.e., multiplies the quantity by the price per item), then 
returns the amount as a double value. If the quantity is not positive, it should be set to 0. If the price per item is not positive, it should be 
set to 0.0. Write a test application named InvoiceTest that demonstrates class Invoice’s capabilities.


#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;

class Invoice {
private:
    char partNumber[20];
    char partDescription[50];
    int quantity;
    double price_per_item;

public:
    // Constructor
    Invoice(char pNum[], char pDesc[], int qty, double price) {
        setPartNumber(pNum);
        setPartDescription(pDesc);
        setQuantity(qty);
        setPrice(price);
    }

    // Setters
    void setPartNumber(char pNum[]) {
        strcpy(partNumber, pNum);
    }

    void setPartDescription(char pDesc[]) {
        strcpy(partDescription, pDesc);
    }

    void setQuantity(int qty) {
        if (qty > 0) {
            quantity = qty;
        } else {
            quantity = 0;
        }
    }

    void setPrice(double price) {
        if (price > 0.0) {
            price_per_item = price;
        } else {
            price_per_item = 0.0;
        }
    }

    // Getters
    void getPartNumber(char dest[]) {
        strcpy(dest, partNumber);
    }

    void getPartDescription(char dest[]) {
        strcpy(dest, partDescription);
    }

    int getQuantity() {
        return quantity;
    }

    double getPrice() {
        return price_per_item;
    }

    // Calculate invoice amount
    double getInvoiceAmount() {
        return quantity * price_per_item;
    }
};

// Test Application
int main() {
    char number[20];
    char desc[50];

    Invoice item1((char*)"P1001", (char*)"Hammer", 3, 250.50);
    Invoice item2((char*)"P2001", (char*)"Screwdriver", -5, 120.0);

    // Print Item 1
    item1.getPartNumber(number);
    item1.getPartDescription(desc);
    printf("Invoice 1:\n");
    printf("Part Number      : %s\n", number);
    printf("Part Description : %s\n", desc);
    printf("Quantity         : %d\n", item1.getQuantity());
    printf("Price per Item   : Rs. %.2f\n", item1.getPrice());
    printf("Total Amount     : Rs. %.2f\n", item1.getInvoiceAmount());

    // Print Item 2
    item2.getPartNumber(number);
    item2.getPartDescription(desc);
    printf("\nInvoice 2:\n");
    printf("Part Number      : %s\n", number);
    printf("Part Description : %s\n", desc);
    printf("Quantity         : %d\n", item2.getQuantity());
    printf("Price per Item   : Rs. %.2f\n", item2.getPrice());
    printf("Total Amount     : Rs. %.2f\n", item2.getInvoiceAmount());

    return 0;
}
