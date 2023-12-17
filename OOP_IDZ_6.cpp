#include<iostream>
#include <vector>
#include <ctime>
#include <windows.h>

using namespace std;

class Pizza  {

public:

    virtual double GetCost() {
        return 0.0;
    }

    virtual void Prise() {
        cout << "I don't know prise about shadow-pizza...";
    }

    virtual void Print_Info() {        //отдельная функция,что выводит инфу о пицце
        cout << "This is info about your pizza: \n This is pizza... \n";
    }

    virtual void Set_Size(int value) {
        cout << "You want a " << value << " santimeters pizza?\n Okey...\n";
    }

    virtual void Salt_Pizza() {
        cout << "Why pizza do you want to salt?...\n";
    };

    virtual void Add_Cheese() {
        cout << "Why pizza do you want to cheese?...\n";
    };



};


class Peperoni : public Pizza {
private:
    string Name;
    string Info;
    unsigned int Size;
    double cost;
    int Salt_value;
    int Cheese_value;

public:
    Peperoni() { Name = "Peperoni"; Info = "Tasty pizza.Good choise!"; Size = 0; cost = 0; Salt_value = 0; Cheese_value = 0; }

    void Prise() override {
        switch (this->Size) {
        case 25:
            this->cost += 100 + this->Cheese_value * 20 + this->Salt_value * 0.5;
            break;
        case 30:
            this->cost += 100 + this->Cheese_value * 20 + this->Salt_value * 0.5;
            break;
        case 35:
            this->cost += 100 + this->Cheese_value * 20 + this->Salt_value * 0.5;
            break;
        case 40:
            this->cost += 100 + this->Cheese_value * 20 + this->Salt_value * 0.5;
            break;
        default:
            cout << "Choose size of a pizza!\n";
            break;
        }
    }

    void Print_Info() {        //отдельная функция,что выводит инфу о пицце
        cout << "Name: " << this->Name << endl;
        cout << "info: " << this->Info << endl;
        cout << "Size: " << this->Size << endl;
        cout << "Cheese_buf: " << this->Cheese_value << endl;
        cout << "Salt_buf: " << this->Salt_value << endl;
        cout << "Cost: " << this->cost << endl;
    }

    double GetCost() {
        return this->cost;
    }

    void Add_Cheese() override {
        unsigned int ches_value = 0;
        cout << "Skolko sira dobavit?\n";
        cin >> ches_value;
        if (ches_value > 0)
        this->Cheese_value = ches_value;
    };

    void Salt_Pizza() override {
        unsigned int salt_val = 0;
        cout << "Skolko soli dobavit?\n";
        cin >> salt_val;
        if(salt_val>0)
            this->Salt_value = salt_val;
    };

    void Set_Size(int value) override {
        switch (value) {
        case 1:
            this->Size = 25;
            break;
        case 2:
            this->Size = 30;
            break;
        case 3:
            this->Size = 35;
            break;
        case 4:
            this->Size = 40;
            break;
        default:
            cout << "This size is underfined!\n";
            break;
        }
    }

};

class Mozarella : public Pizza {
private:
    string Name;
    string Info;
    unsigned int Size;
    double cost;
    int Salt_value;
    int Cheese_value;

public:
    Mozarella() { Name = "Mozarella"; Info = "Normal cheese pizza"; Size = 0; cost = 0; Salt_value = 0; Cheese_value = 0; }

    void Print_Info() {        //отдельная функция,что выводит инфу о пицце
        cout << "Name: " << this->Name << endl;
        cout << "info: " << this->Info << endl;
        cout << "Size: " << this->Size << endl;
        cout << "Cheese_buf: " << this->Cheese_value << endl;
        cout << "Salt_buf: " << this->Salt_value << endl;
        cout << "Cost: " <<this->cost << endl;
    }

    void Prise() override {
        switch (this->Size) {
        case 25:
            this->cost += 150 + this->Cheese_value * 40 + this->Salt_value * 0.5;
            break;
        case 30:
            this->cost += 150 + this->Cheese_value * 40 + this->Salt_value * 0.5;
            break;
        case 35:
            this->cost += 150 + this->Cheese_value * 40 + this->Salt_value * 0.5;
            break;
        case 40:
            this->cost += 150 + this->Cheese_value * 40 + this->Salt_value * 0.5;
            break;
        default:
            cout << "Choose size of a pizza!\n";
            break;
        }
    }

    double GetCost() {
        return this->cost;
    }

    void Add_Cheese() override {
        unsigned int ches_value = 0;
        cout << "Skolko sira dobavit?\n";
        cin >> ches_value;
        if (ches_value > 0)
        this->Cheese_value = ches_value;
    };

    void Salt_Pizza() override {
        unsigned int salt_val = 0;
        cout << "Skolko soli dobavit?\n";
        cin >> salt_val;
        if (salt_val > 0)
        this->Salt_value = salt_val;
    };

    void Set_Size(int value) override {
        switch (value) {
        case 1:
            this->Size = 25;
            break;
        case 2:
            this->Size = 30;
            break;
        case 3:
            this->Size = 35;
            break;
        case 4:
            this->Size = 40;
            break;
        default:
            cout << "This size is underfined!\n";
            break;
        }
    }
};

class Cheese_pizza : public Pizza {
private:
    string Name;
    string Info;
    unsigned int Size;
    double cost;
    int Salt_value;
    int Cheese_value;

public:
    Cheese_pizza() { Name = "Cheese pizza"; Info = "MORE CHEESE!!!"; Size = 0; cost = 0; Salt_value = 0; Cheese_value = 0; }

    void Print_Info() {        //отдельная функция,что выводит инфу о пицце
        cout << "Name: " << this->Name << endl;
        cout << "info: " << this->Info << endl;
        cout << "Size: " << this->Size << endl;
        cout << "Cheese_buf: " << this->Cheese_value << endl;
        cout << "Salt_buf: " << this->Salt_value << endl;
        cout << "Cost: " << this->cost << endl;
    }

    void Prise() override {
        switch (this->Size) {
        case 25:
            this->cost += 200 + this->Cheese_value * 10 + this->Salt_value * 0.5;
            break;
        case 30:
            this->cost += 200 + this->Cheese_value * 10 + this->Salt_value * 0.5;
            break;
        case 35:
            this->cost += 200 + this->Cheese_value * 10 + this->Salt_value * 0.5;
            break;
        case 40:
            this->cost += 200 + this->Cheese_value * 10 + this->Salt_value * 0.5;
            break;
        default:
            cout << "Choose size of a pizza!\n";
            break;
        }
    }

    double GetCost() {
        return this->cost;
    }

    void Add_Cheese() override {
        unsigned int ches_value = 0;
        cout << "Skolko sira dobavit?\n";
        cin >> ches_value;
        if (ches_value > 0)
        this->Cheese_value = ches_value;
    };

    void Salt_Pizza() override {
        unsigned int salt_val = 0;
        cout << "Skolko soli dobavit?\n";
        cin >> salt_val;
        if (salt_val > 0)
        this->Salt_value = salt_val;
    };

    void Set_Size(int value) override {
        switch (value) {
        case 1:
            this->Size = 25;
            break;
        case 2:
            this->Size = 30;
            break;
        case 3:
            this->Size = 35;
            break;
        case 4:
            this->Size = 40;
            break;
        default:
            cout << "This size is underfined!\n";
            break;
        }
    }

};


class Pizzeria_Window {

private:
    vector <Pizza*> Order_List;              //это мой лист заказа
public:

    void Print_Menu() {     //процедура выводы меню для выбора действия
        int N = 0;
        cout << "Order Menu\nViberite deistvie:\n";
        cout << "1)Dobavit pizza in order\n";
        cout << "2)Raspechatat zakaz\n";
        cout << "3)Podtverdit i oplatit\n";
        cout << "===> ";
        cin >> N;
        cout << endl;
        switch (N) {
        case 1:
            Vibor_Pizza();
            break;
        case 2:
            Print_Order();
            break;
        case 3:
            cout << "Order in process..." << endl;
            break;
        default:
            cout << "Choose right doing!\n\n";
            Print_Menu();
        }
    };

    void Vibor_Pizza() {
        int N = 0;
        Pizza* pizza = nullptr;
        cout << "Viberite pizza:\n";
        cout << "1)Peperoni\n";
        cout << "2)Mozarella\n";
        cout << "3)Cheese pizza\n";
        cout << "4)To Menu\n";
        cout << "===> ";
        cin >> N;
        cout << endl;
        switch (N) {
        case 1:
            pizza = new Peperoni();
            break;
        case 2:
            pizza = new Mozarella();
            break;
        case 3:
            pizza = new Cheese_pizza();
            break;
        case 4:
            Print_Menu();
        }

        cout << "Viberite pizza size:\n";
        cout << "1)25\n";
        cout << "2)30\n";
        cout << "3)35\n";
        cout << "4)40\n";
        cout << "===> ";
        cin >> N;
        cout << endl;
        if (N > 0 and N < 5) {
            pizza->Set_Size(N);
            pizza->Add_Cheese();
            pizza->Salt_Pizza();
            pizza->Prise();
            this->Order_List.push_back(pizza);
            cout << endl;
            Print_Menu();
        }
        else {
            cout << "Wrong parametr! Try again...";
            Print_Menu();
        };

    };

    void Print_Order() {
        cout << "This is your order: \n\n";
        for (int i = 0; i < this->Order_List.size(); i++) {
            cout << "Position "<<i+1<<"\n\n";
            this->Order_List[i]->Print_Info();
            cout << endl;
        }
        Print_Sum_Cost();
    };

    void Print_Sum_Cost() {
        double SumCost = 0.0;
        for (int i = 0; i < this->Order_List.size(); i++) {
            SumCost+=this->Order_List[i]->GetCost();
        }
        cout << "Total summa = " << SumCost;
    }
};

int main() {

    Pizzeria_Window window;
    window.Print_Menu();
    return 0;
}