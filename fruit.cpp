#include <iostream>
#include <string>
using namespace std;
class Fruit
{
protected:
    string name;

public:
    Fruit()
    {
        this->name = " ";
    }
    Fruit(string name)
    {
        this->name = name;
    }
};
class FruitInPcs : public Fruit
{
private:
    int quantity;
    double price_per_piece;

public:
    FruitInPcs(string name, int quantity, double price_per_piece) : Fruit(name), quantity(quantity), price_per_piece(price_per_piece) {};
    double getPricePerPiece()
    {
        return price_per_piece;
    }
    int getQuantity()
    {
        return quantity;
    }
    bool checkAvailability(int needs)
    {
        return this->quantity >= needs;
    }
    void updateAvailability(int needs)
    {
        this->quantity -= needs;
    }
};
class FruitInKg : public Fruit
{
private:
    double weight;
    double price_per_kg;

public:
    FruitInKg(string name, double weight, double price_per_kg) : Fruit(name), weight(weight), price_per_kg(price_per_kg) {};
    double getPricePerKg()
    {
        return price_per_kg;
    }
    double getWeight()
    {
        return weight;
    }
    bool checkAvailability(double needs)
    {
        return this->weight >= needs;
    }
    void updateAvailability(double needs)
    {
        this->weight -= needs;
    }
};
class Sale
{
private:
    double units;
    double amount;
    FruitInPcs *fpc = NULL;
    FruitInKg *fkg = NULL;

public:
    Sale(FruitInPcs *fpcs, double units)
    {
        this->fpc = fpcs;
        this->units = units;
        if (fpc->checkAvailability(units) == false)
        {
            cout << "Not enough quantity available" << endl;
            exit(0);
        }
    }
    Sale(FruitInKg *fkgs, double units)
    {
        this->fkg = fkgs;
        this->units = units;
        if (fkg->checkAvailability(units) == false)
        {
            cout << "Not enough quantity available" << endl;
            exit(0);
        }
    }
    double bill()
    {
        if (fpc != NULL)
        {
            this->amount = units * fpc->getPricePerPiece();
            fpc->updateAvailability(units);
        }
        if (fkg != NULL)
        {
            this->amount = units * fkg->getPricePerKg();
            fkg->updateAvailability(units);
        }
        if (amount >= 500)
        {
            discount();
        }
    }
    void discount()
    {
        this->amount -= (this->amount * 0.05);
    }
};
int main()
{
    FruitInPcs fpcs("Apple", 100, 10);
    FruitInKg fkgs("Banana", 100, 20);
    Sale s1(&fpcs, 10);
    Sale s2(&fkgs, 5);
    cout << "Bill for sale 1: " << s1.bill() << endl;
    cout << "Bill for sale 2: " << s2.bill() << endl;
    return 0;
}