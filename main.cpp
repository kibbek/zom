#include <iostream>
#include<vector>

using namespace std;


class Zwierze{

public:
    int waga;
    Zwierze(){
        waga =0;
    }
    virtual void DajGlos() =0;
};



class Pies: public Zwierze
{
    protected:

    public:
    Pies(){
    this->waga = 60;

    }
    void DajGlos(){cout<<"Hau"<<endl;}
    ~Pies(){}
};

class Kot: public Zwierze
{
    protected:

    public:
    Kot(){
        this->waga = 40;

    }


     void DajGlos(){cout<<"Miau"<<endl;}
     ~Kot(){}
};

class Zoo{
protected:
    vector<Zwierze*> z;
    int waga;

public:
Zoo(){
    int waga = 0;
    for(int i=0;i<20;i++){
        if(waga>=1000){
        waga -=z[i-1]->waga;
        delete z[i-1];
        break;
        }
        if((rand()%2)==0)
        z.push_back(new Kot);
            else
        z.push_back(new Pies);
         z[i]->DajGlos();
        waga += z[i]->waga;
    }
     cout<<waga<<endl;
    }
};


int main()
{
    srand(time(NULL));
        Zoo z;
   // z->DajGlos();
   // delete z;
   // z = new Pies;
   // z->DajGlos();



    return 0;
}
