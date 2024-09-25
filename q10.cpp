// Create a class called Invoice that a hardware store might use to represent an invoice
// for an item sold at the store. An Invoice should include four pieces of information
// as instance.
// Data Members ‐
// • partNumber (type String)
// • partDescription (type String)
// • quantity of the item being purchased (type int)
// • price_per_item (type double)
// Your class should have a constructor that initializes the four instance variables.
// Provide a set and a get method for each instance variable. In addition, provide a
// method named getInvoiceAmount() that calculates the invoice amount (i.e.,
// multiplies the quantity by the price per item), then returns the amount as a double
// value. If the quantity is not positive, it should be set to 0. If the price per item is not
// positive,it should be set to0.0. Write a test application named invoiceTest that
// demonstrates class Invoice’s capabilities.
#include <iostream>
#include <math.h>
using namespace std;
class invoice
{
private:
    string partNumber;
    string partDescription;
    int quantity;
    double pricePerItem;

public:
    invoice()
    {
        partNumber = "";
        partDescription = "";
        quantity = 0;
        pricePerItem = 0.0;
    }
    invoice(string partNumber, string partDescription, int quantity, double pricePerItem)
    {
        this->partNumber = partNumber;
        this->partDescription = partDescription;
        if (quantity < 0)
        {
            this->quantity = 0;
        }
        else
        {
            this->quantity = quantity;
        }
        if (pricePerItem < 0)
        {
            this->pricePerItem = 0;
        }
        else
        {
            this->pricePerItem = pricePerItem;
        }
    }
    void setPartNumber(string x)
    {
        this->partNumber = x;
    }
    void setPartDescription(string x)
    {
        this->partDescription = x;
    }
    void setQuantity(int x)
    {
        if (x < 0)
        {
            this->quantity = 0;
        }
        else
        {
            this->quantity = x;
        }
    }
    void setPricePerItem(double x)
    {
        if (x < 0)
        {
            this->pricePerItem = 0;
        }
        else
        {
            this->pricePerItem = x;
        }
    }
    string getPartNumber()
    {
        return this->partNumber;
    }
    string getPartDescription()
    {
        return this->partDescription;
    }
    int getQuantity()
    {
        return this->quantity;
    }
    double getPricePerItem()
    {
        return this->pricePerItem;
    }
    double getInvoiceAmount()
    {
        int q = this->quantity;
        if (q < 0)
        {
            this->quantity = 0;
            return 0;
        }
        int p = this->pricePerItem;
        if (p < 0)
        {
            this->pricePerItem = 0;
            return 0;
        }
        return p * q;
    }
};
int main()
{
    invoice test, test2("QWER3455", "abcbca", 9959, 11.99);
    test.setPartDescription("xyz");
    test.setPartNumber("ASD1212FF");
    test.setQuantity(-1050);
    test.setPricePerItem(57.68);
    cout << test.getPartNumber() << endl;
    cout << test.getPartDescription() << endl;
    cout << test.getPricePerItem() << endl;
    cout << test.getQuantity() << endl;
    cout << test.getInvoiceAmount() << endl;
    cout << test2.getPartNumber() << endl;
    cout << test2.getPartDescription() << endl;
    cout << test2.getPricePerItem() << endl;
    cout << test2.getQuantity() << endl;
    cout << test2.getInvoiceAmount() << endl;
    return 0;
}