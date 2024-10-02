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
            this->pricePerItem = 0.0;
        }
        else
        {
            this->pricePerItem = pricePerItem;
        }
    }

    void setPartNumber(string partNumber)
    {
        this->partNumber = partNumber;
    }

    string getPartNumber()
    {
        return partNumber;
    }

    void setPartDescription(string partDescription)
    {
        this->partDescription = partDescription;
    }

    string getPartDescription()
    {
        return partDescription;
    }

    void setQuantity(int quantity)
    {
        if (quantity < 0)
        {
            this->quantity = 0;
        }
        else
        {
            this->quantity = quantity;
        }
    }

    int getQuantity()
    {
        return quantity;
    }

    void setPricePerItem(double pricePerItem)
    {
        if (pricePerItem < 0)
        {
            this->pricePerItem = 0.0;
        }
        else
        {
            this->pricePerItem = pricePerItem;
        }
    }

    double getPricePerItem()
    {
        return pricePerItem;
    }

    double getInvoiceAmount()
    {
        return quantity * pricePerItem;
    }
};
int main()
{
    invoice test;
    invoice test2("QWER3455", "Widget", 9959, 11.99);

    test.setPartDescription("Screwdriver");
    test.setPartNumber("ASD1212FF");
    test.setQuantity(-1050);
    test.setPricePerItem(57.68);
    cout << "Invoice 1:" << endl;
    cout << "Part Number: " << test.getPartNumber() << endl;
    cout << "Part Description: " << test.getPartDescription() << endl;
    cout << "Price per Item: " << test.getPricePerItem() << endl;
    cout << "Quantity: " << test.getQuantity() << endl;
    cout << "Invoice Amount: " << test.getInvoiceAmount() << endl;

    cout << "\nInvoice 2:" << endl;
    cout << "Part Number: " << test2.getPartNumber() << endl;
    cout << "Part Description: " << test2.getPartDescription() << endl;
    cout << "Price per Item: " << test2.getPricePerItem() << endl;
    cout << "Quantity: " << test2.getQuantity() << endl;
    cout << "Invoice Amount: " << test2.getInvoiceAmount() << endl;

    return 0;
}
