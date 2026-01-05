#include<iostream>
#include<string>
using namespace std;
class Burger{
    public:
    virtual void prepare()=0;
    virtual ~Burger(){}
};

class BasicBurger: public Burger{
    public:
    void prepare() override{
        cout<<"preparing Basic Burger\n";
    }
};

class StandardBurger: public Burger{
    public:
    void prepare() override{
        cout<<"Preparing Standard Burger\n";
    }
};

class PremiumBurger: public Burger{
    public:
    void prepare() override{
        cout<<"Preparing Premimum Burger\n";
    }
};
// factory level
class Factory{
    public:
    Burger *CreateBurger(string choice){
        if(choice=="basic" || choice=="1")
            return new BasicBurger();
        else if(choice=="standard" || choice=="2")
            return new StandardBurger();
        else if(choice=="premium" || choice=="3")
            return new PremiumBurger();
        else{
            cout<<"Invalid Burger\n";
            return nullptr;
        }
    }
};
// apllication only for business logic
int main(){
    string choice;
    cout<<"basic: BasicBurger\nstandard:StandardBurger\npremium: PremiumBurger\nEnter your choice: ";
    cin>>choice; 
    Factory *factory = new Factory();
    Burger *burger = factory->CreateBurger(choice);
    burger->prepare();
    delete burger;
    return 0;
}