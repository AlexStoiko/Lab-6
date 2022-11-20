#include "laptop.h"

Laptop::Laptop(string model, int quantity, int price, string videocard):Product(model, quantity, price)
{
    this->videocard = "None";
}

Laptop::Laptop(const Laptop& lap_ref)
{
    model = string(lap_ref.model);
    quantity = int(lap_ref.quantity);
    price = int(lap_ref.price);
    videocard = string(lap_ref.videocard);
}

Laptop::Laptop()
{
    model = "Model";
    quantity = 0;
    price = 0;
    videocard = "None";
}

Laptop::Laptop(string model)
{
    this->model = model;
    quantity = 0;
    price = 0;
    videocard = "None";
}

Laptop::~Laptop() {}

void Laptop::input()
{
    cout << "������� ������ ��������" << endl;
    cin >> model;
    cout << "������� ����� ������������� ���������" << endl;
    cin >> quantity;
    cout << "������� ���� ������ ��������" << endl;
    cin >> price;
    cout << "������� ������ ���������� ��������" << endl;
    cin >> videocard;
}

void Laptop::output()
{
    cout << "������ ��������: " << model << endl;
    cout << "����� ������������� ��������� = " << quantity << endl;
    cout << "���� ������ �������� = " << price << endl;
    cout << "������ ���������� �������� = " << videocard << endl;
}

string Laptop::getstr()
{
    string laptop;
    laptop = Product::getstr() + " " + videocard;
    return laptop;
}

void Laptop::operator = (Product product)
{
    this->model = product.getmodel();
    this->quantity = product.getquantity();
    this->model = product.getprice();
    this->videocard = "None";
}

void operator << (ostream& o, Laptop laptop)
{
    cout << laptop.model << " " << laptop.quantity << " " << laptop.price << " " << laptop.videocard << endl;
}

Laptop operator >> (istream& o, Laptop& laptop)
{
    cin >> laptop.model >> laptop.quantity >> laptop.price >> laptop.videocard;
    return laptop;
}