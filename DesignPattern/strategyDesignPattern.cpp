#include<iostream>
using namespace std;

class WalableRobot{
    public:
    virtual void walk()=0;
    virtual ~WalableRobot(){};
};

class NormalWalk: public WalableRobot{
    public:
    void walk() override{
        cout<<"It is normal walking\n";
    }
};

class NotWalk: public WalableRobot{
    public:
    void walk() override{
        cout<<"It is not walking\n";
    }
};
class FastWalking: public WalableRobot{
    public:
    void walk() override{
        cout<<"Working Fast\n";
    }
};

// talkable
class TakableRobot{
    public:
    virtual void talk() = 0;
    virtual ~TakableRobot(){}
};

class NormalTalk: public TakableRobot{
    public:
    void talk() override{
        cout<<"It is normal talking\n";
    }
};

class NoTalk : public TakableRobot{
    public:
    void talk() override {
        cout<<"It can't talk\n";
    }
};

class Robot{
    protected:
    WalableRobot *w;
    TakableRobot *t;
    public:
    Robot(WalableRobot *walkBehavior,TakableRobot *talkBehavoir){
        this->w = walkBehavior;
        this->t = talkBehavoir;
    }
    void walk(){
        w->walk();
    }
    void talk(){
        t->talk();
    }

    virtual void projection()=0;
};

class companionRobot: public Robot{
    public:
    companionRobot(WalableRobot *w,TakableRobot *t) : Robot(w,t){}

    void projection() override{
        cout<<"Displaying the companion features...\n";
    }
};

class WorkerRobot: public Robot{
    public:
    WorkerRobot(WalableRobot *w,TakableRobot *t) : Robot(w,t){}

    void projection() override{
        cout<<"Displaying the worker efficiency stats...\n";
    }
};

int main(){
    Robot *r1 = new companionRobot(new NormalWalk(),new NormalTalk());
    r1->talk();
    r1->walk();
    r1->projection();

    cout<<"---------------------\n";

    Robot *r2 = new WorkerRobot(new FastWalking(),new NoTalk());
    r2->talk();
    r2->walk();
    r2->projection();
    return 0;
}