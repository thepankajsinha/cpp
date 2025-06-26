#include <iostream>
using namespace std;

class Car{
    private: //private access modifiers
    string brand;   
    string model;
    int price;
    int mileage;

    public: //public access modifiers

    //Here,setData() is used to initialize the private member with input data
    void setData(string brand, string model, int price, int mileage){
        this->brand = brand;
        this->model = model;
        this->price = price;
        this->mileage = mileage;
    }

    void showData(){
        cout<<"Brand: "<<brand<<endl;
        cout<<"Model: "<<model<<endl;
        cout<<"Price: "<<price<<endl;
        cout<<"Mileage: "<<mileage<<endl;
    }
};


int main(){
    Car c1;  //Object c1 is created

    c1.setData("Tata", "Nexon", 1400000, 15); //Initialize c1 object with value
    
    c1.showData(); //call showData() to print output
}

// Brand: Tata
// Model: Nexon
// Price: 1400000
// Mileage: 15