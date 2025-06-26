//Object-> Objects are real world entities.Ex c1 object.
//Class -> Class is the blueprint of these entities. Ex car is blueprint for c1 objecct.

#include <iostream>
using namespace std;

class Car{
    public: //Access modifier

    //Class variables are called data members / Attributes
    string brand;   
    string model;
    int price;
    int mileage;

    //Class functions are called member function / methods
    void showData(){
        cout<<"Brand: "<<brand<<endl;
        cout<<"Model: "<<model<<endl;
        cout<<"Price: "<<price<<endl;
        cout<<"Mileage: "<<mileage<<endl;
    }
};


int main(){
    Car c1; //Object c1 is created

    //Initialize c1 object with values
    c1.brand = "Tata";
    c1.model = "Nexon";
    c1.price = 1400000;
    c1.mileage = 15;

    c1.showData();
}

// Brand: Tata
// Model: Nexon
// Price: 1400000
// Mileage: 15