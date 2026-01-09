#include<iostream>
using namespace std;
class Singleton{
    private:
    static Singleton *instance;
    Singleton (){
        cout<<"This is singleton design pattern\n";
    }
    public:
    static Singleton *getInstance(){
        if (instance==nullptr)
            instance = new Singleton();
        return instance;
    }
};

Singleton *Singleton::instance = nullptr;
int main(){
    Singleton *obj = Singleton::getInstance();
    Singleton *obj2 = Singleton::getInstance(); 
    cout<<(obj==obj2)<<endl;
    return 0;
}