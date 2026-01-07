// In the simple design took a example of the burger were we are making burger of differnt types 
/*problem:
    that there will be many burger making companies/ facories so we will make the factory class a interface then it will be implemented by the contrcreate burger making factories

*/

#include<iostream>
#include<string>
using namespace std;



class Burger{
    public:
    virtual void Prepare()=0;
    virtual ~Burger(){}
};

class BasicBurger: public Burger{
    public:
    void Prepare() override{
        cout<<"preparing Basic Burger\n";
    }
};

class StandardBurger: public Burger{
    public:
    void Prepare() override{
        cout<<"Preparing Standard Burger\n";
    }
};

class PremiumBurger: public Burger{
    public:
    void Prepare() override{
        cout<<"Preparing Premimum Burger\n";
    }
};

// Wheat Based
class WheatBasedBasicBurger: public Burger{
    public:
    void Prepare() override{
        cout<<"Preparing WheatBasedBasicBurger\n";
    }
};
class WheatBasedStandardBurger: public Burger{
    public:
    void Prepare() override{
        cout<<"Preparing WheatBasedStandardBurger\n";
    }
};
class WheatBasedPremiumBurger: public Burger{
    public:
    void Prepare() override{
        cout<<"Preparing WheatBasedPremiumBurger\n";
    }
};

// factory level using factory method 

class Factory{
    public:
    virtual Burger *CreateBurger(string burger)=0;
    virtual ~Factory(){}
};
// sing burger
class SingBurger:public Factory{
    Burger * CreateBurger(string burger){
        if(burger=="standard" || burger=="2")
            return new StandardBurger();
        else if(burger=="basic" || burger=="1")
            return new BasicBurger();
        else if(burger=="premium" || burger=="3")
            return new PremiumBurger();
        else if(burger=="wheatbasedbasic" || burger=="4")
            return new WheatBasedBasicBurger();
        else if(burger=="wheatbasedstandard" || burger=="5")
            return new WheatBasedStandardBurger();
        else if(burger=="wheatbasedpremium" || burger=="6")
            return new WheatBasedPremiumBurger();
        cout<<"Invalid Input\n";
        return nullptr;
    }
};

// king burger
class KingBurger:public Factory{
    Burger * CreateBurger(string burger){
        if(burger=="standard" || burger=="2")
            return new StandardBurger();
        else if(burger=="basic" || burger=="1")
            return new BasicBurger();
        else if(burger=="premium" || burger=="3")
            return new PremiumBurger();
        else if(burger=="wheatbasedbasic" || burger=="4")
            return new WheatBasedBasicBurger();
        else if(burger=="wheatbasedstandard" || burger=="5")
            return new WheatBasedStandardBurger();
        else if(burger=="wheatbasedpremium" || burger=="6")
            return new WheatBasedPremiumBurger();
        cout<<"Invalid Input\n";
        return nullptr;
    }
};

//function for taking the choice and burgertype from user.
void Choice(Burger *burger,Factory *factory){
    string FactoryType,BurgerType;
    cout<<"SingBurger:1\nKingBurger:2\nEnter FactoryType: \n";
    cin>>FactoryType;
    cout<<"1: BasicBurger\n2:StandardBurger\n3: PremiumBurger\n4:WheatBasedBasic\n5:WheatBasedStandard\n6:WheatBasedPremium\nEnter your choice: ";
    cin>>BurgerType;
    if(FactoryType=="1"){
        factory = new SingBurger();
        burger = factory->CreateBurger(BurgerType);
        burger->Prepare();
        cout<<"Thanks For visiting **SingBurger**";
    }
    else if(FactoryType=="2"){
        factory = new KingBurger();
        burger = factory->CreateBurger(BurgerType);
        burger->Prepare();
        cout<<"Thanks For Visting **KingBurger**\n";
    }
}

// client side / application side

int main(){
    Factory *factory;
    Burger *burger;
    Choice(burger,factory);
    delete burger;
    delete factory;
    return 0;
}

