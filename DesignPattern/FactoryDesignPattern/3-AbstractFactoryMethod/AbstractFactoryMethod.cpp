// In the simple design took a example of the burger were we are making burger of differnt types
/*Previous problem:
    that there will be many burger making companies/ facories so we will make the factory class a interface then it will be implemented by the contrcreate burger making factories
Poroblem:
    Now the facories like sing burger and king burger can make diffenret things like gralic bread so implement this
*/

#include <iostream>
#include <string>
using namespace std;
// burger class
class Burger
{
public:
    virtual void Prepare() = 0;
    virtual ~Burger() {}
};

class BasicBurger : public Burger
{
public:
    void Prepare() override
    {
        cout << "preparing Basic Burger\n";
    }
};

class StandardBurger : public Burger
{
public:
    void Prepare() override
    {
        cout << "Preparing Standard Burger\n";
    }
};

class PremiumBurger : public Burger
{
public:
    void Prepare() override
    {
        cout << "Preparing Premimum Burger\n";
    }
};

// Wheat Based
class WheatBasedBasicBurger : public Burger
{
public:
    void Prepare() override
    {
        cout << "Preparing WheatBasedBasicBurger\n";
    }
};
class WheatBasedStandardBurger : public Burger
{
public:
    void Prepare() override
    {
        cout << "Preparing WheatBasedStandardBurger\n";
    }
};
class WheatBasedPremiumBurger : public Burger
{
public:
    void Prepare() override
    {
        cout << "Preparing WheatBasedPremiumBurger\n";
    }
};

// garlic bread

class GarlicBread
{
public:
    virtual void Prepare() = 0;
    virtual ~GarlicBread() {}
};

class BasicGarlicBread : public GarlicBread
{
public:
    void Prepare() override
    {
        cout << "preparing Basic GarlicBread\n";
    }
};

class StandardGarlicBread : public GarlicBread
{
public:
    void Prepare() override
    {
        cout << "Preparing Standard GarlicBread\n";
    }
};

class PremiumGarlicBread : public GarlicBread
{
public:
    void Prepare() override
    {
        cout << "Preparing Premimum GarlicBread\n";
    }
};

// Wheat Based
class WheatBasedBasicGarlicBread : public GarlicBread
{
public:
    void Prepare() override
    {
        cout << "Preparing WheatBasedBasicGarlicBread\n";
    }
};
class WheatBasedStandardGarlicBread : public GarlicBread
{
public:
    void Prepare() override
    {
        cout << "Preparing WheatBasedStandardGarlicBread\n";
    }
};
class WheatBasedPremiumGarlicBread : public GarlicBread
{
public:
    void Prepare() override
    {
        cout << "Preparing WheatBasedPremiumGarlicBread\n";
    }
};

class Factory
{
public:
    virtual Burger *CreateBurger(string burger) = 0;
    virtual GarlicBread *CreateGarlicBread(string bread) = 0;
    virtual ~Factory() {}
};
// sing burger
class SingBurger : public Factory
{
    Burger *CreateBurger(string burger)
    {
        if (burger == "standard" || burger == "2")
            return new StandardBurger();
        else if (burger == "basic" || burger == "1")
            return new BasicBurger();
        else if (burger == "premium" || burger == "3")
            return new PremiumBurger();
        else if (burger == "wheatbasedbasic" || burger == "4")
            return new WheatBasedBasicBurger();
        else if (burger == "wheatbasedstandard" || burger == "5")
            return new WheatBasedStandardBurger();
        else if (burger == "wheatbasedpremium" || burger == "6")
            return new WheatBasedPremiumBurger();
        cout << "Invalid Input\n";
        return nullptr;
    }

    // garlic bread

    GarlicBread *CreateGarlicBread(string bread)
    {
        if (bread == "standard" || bread == "2")
            return new StandardGarlicBread();
        else if (bread == "basic" || bread == "1")
            return new BasicGarlicBread();
        else if (bread == "premium" || bread == "3")
            return new PremiumGarlicBread();
        else if (bread == "wheatbasedbasic" || bread == "4")
            return new WheatBasedBasicGarlicBread();
        else if (bread == "wheatbasedstandard" || bread == "5")
            return new WheatBasedStandardGarlicBread();
        else if (bread == "wheatbasedpremium" || bread == "6")
            return new WheatBasedPremiumGarlicBread();
        cout << "Invalid Input\n";
        return nullptr;
    }
};

// king burger
class KingBurger : public Factory
{
    Burger *CreateBurger(string burger)
    {
        if (burger == "standard" || burger == "2")
            return new StandardBurger();
        else if (burger == "basic" || burger == "1")
            return new BasicBurger();
        else if (burger == "premium" || burger == "3")
            return new PremiumBurger();
        else if (burger == "wheatbasedbasic" || burger == "4")
            return new WheatBasedBasicBurger();
        else if (burger == "wheatbasedstandard" || burger == "5")
            return new WheatBasedStandardBurger();
        else if (burger == "wheatbasedpremium" || burger == "6")
            return new WheatBasedPremiumBurger();
        cout << "Invalid Input\n";
        return nullptr;
    }
    // garlic bread
    GarlicBread *CreateGarlicBread(string bread)
    {
        if (bread == "standard" || bread == "2")
            return new StandardGarlicBread();
        else if (bread == "basic" || bread == "1")
            return new BasicGarlicBread();
        else if (bread == "premium" || bread == "3")
            return new PremiumGarlicBread();
        else if (bread == "wheatbasedbasic" || bread == "4")
            return new WheatBasedBasicGarlicBread();
        else if (bread == "wheatbasedstandard" || bread == "5")
            return new WheatBasedStandardGarlicBread();
        else if (bread == "wheatbasedpremium" || bread == "6")
            return new WheatBasedPremiumGarlicBread();
        cout << "Invalid Input\n";
        return nullptr;
    }
};

void Choice(Burger *burger, GarlicBread *bread, Factory *factory)
{
    string FactoryType, BurgerType, BreadType;
    int choice;
    cout << "SingBurger:1\nKingBurger:2\nEnter FactoryType: \n";
    cin >> FactoryType;

    cout << "1:Burger\n2:GarlicBread\nEnter what you want: ";
    cin >> choice;

    switch (choice)
    {
    case 1: // burger
        cout << "1: BasicBurger\n2:StandardBurger\n3: PremiumBurger\n4:WheatBasedBasic\n5:WheatBasedStandard\n6:WheatBasedPremium\nEnter your choice: ";
        cin >> BurgerType;
        //
        if (FactoryType == "1")
        {
            factory = new SingBurger();
            burger = factory->CreateBurger(BurgerType);
            burger->Prepare();
            cout << "Thanks For visiting **SingBurger**";
        }
        else if (FactoryType == "2")
        {
            factory = new KingBurger();
            burger = factory->CreateBurger(BurgerType);
            burger->Prepare();
            cout << "Thanks For Visting **KingBurger**\n";
        }
        //
        break;
    case 2:
        cout << "1: BasicGarlicBread\n2:StandardGarlicBread\n3: PremiumGarlicBread\n4:WheatBasedBasicGarlicBread\n5:WheatBasedStandardGarlicBread\n6:WheatBasedPremiumGarlicBread\nEnter your choice: ";
        cin >> BreadType;
        if(FactoryType=="1"){// sing burger
            factory = new SingBurger();
            bread  = factory->CreateGarlicBread(BreadType);
            bread->Prepare();
            cout << "Thanks For visiting **SingBurger**";
        }
        else if(FactoryType=="2"){ // king burger
            factory = new KingBurger();
            bread = factory->CreateGarlicBread(BreadType);
            bread->Prepare();
            cout << "Thanks For visiting **KingBurger**";
        }
        break;
    default:
        cout << "Invalid Input";
        break;
    }
}

// client side / application side

int main()
{
    Factory *factory;
    Burger *burger;
    GarlicBread *bread;
    Choice(burger, bread, factory);
    delete burger;
    delete factory;
    delete bread;
    return 0;
}