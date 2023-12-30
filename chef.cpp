#include<iostream>
using namespace std;

class Chef{

    public:

    void make_pasta(){
        cout<<"The chef makes pasta"<<endl;
    }
    void make_chicken(){
        cout<<"The chef makes Chicken"<<endl;
    }
    void make_specialdish(){
        cout<<"The chef makes Gajar ka halwa"<<endl;
    }


};
class PahadiChef : Chef{

    public:
    void make_jholiBhaat(){
        cout<<"The chef makes Jholi bhaat"<<endl;
    }
    void make_bhatkeDubke(){
        cout<<"The chef makes bhat ke dubke"<<endl;
    }
    void make_specialDish(){
        cout<<"The chef makes Bhat ki Churkani"<<endl;
    }
};
class JapaneseChef : Chef{
    public:
    void make_ramen(){
        cout<<"The chef makes Ramen"<<endl;

    }
    void make_Sushi(){
        cout<<"The chef makes Sushi"<<endl;
    }
    void make_fugu(){
        cout<<"The chef makes Fugu"<<endl;
    }
    void make_Specialdish(){
        cout<<"The chef makes Miso Soup"<<endl;
    }
};
class ItalianChef : Chef{
    public:
    void make_lasagne(){
        cout<<"The chef makes Lasagne"<<endl;
    }
    void make_Risotto(){
        cout<<"The chef makes Risotto"<<endl;
    }
    void make_Pasta(){
        cout<<"The chef makes Pasta"<<endl;
    }
    void make_Pizza(){
        cout<<"The chef makes Pizza"<<endl;
    }
};
class AmericanChef : Chef{
    public:
    void make_GENZkids(){
        cout<<"The chef makes GENZ kids"<<endl;
    }
    void make_Racists(){
        cout<<"The chef makes racists"<<endl;
    }
    void make_GenduGeneration(){
        cout<<"The chef makes Gendu Generation"<<endl;
    }
    void make_specialDish(){
        cout<<"The chef makes niggers"<<endl;
    }

};
int main(){


    Chef ch1;
    
    ch1.make_specialdish();
    ch1.make_pasta();
    
    cout<<endl;

    PahadiChef pch1;

    pch1.make_jholiBhaat();
    pch1.make_specialDish();

    cout<<endl;

    JapaneseChef jch1;
    jch1.make_Specialdish();
    jch1.make_Sushi();
    jch1.make_fugu();

    cout<<endl;

    ItalianChef ich1;

    ich1.make_Risotto();
    ich1.make_Pasta();
    ich1.make_lasagne();

    cout<<endl;

    AmericanChef ach1;
    ach1.make_specialDish();
    ach1.make_GENZkids();
    ach1.make_GenduGeneration();
    ach1.make_Racists();






}