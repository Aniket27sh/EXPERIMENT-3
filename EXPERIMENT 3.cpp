#include <iostream>
using namespace std;

class Product
{
private:
    int price;
    int sales[12];

public:
    void getData()
    {
        cout << "Enter price of product: ";
        cin >> price;

        cout << "Enter monthly sales for 12 months:\n";
        for (int i = 0; i < 12; i++)
        {
            cout << "Month " << i + 1 << ": ";
            cin >> sales[i];
        }
    }

    void display()
    {
        int total = 0;

        cout << "\nProduct Price: " << price << endl;
        cout << "Monthly Sales: ";

        for (int i = 0; i < 12; i++)
        {
            cout << sales[i] << " ";
            total += sales[i];
        }

        cout << "\nTotal Quantity Sold: " << total << endl;
        cout << "Total Bill: " << total * price << endl;
    }
};

int main()
{
    int n;

    cout << "Enter number of products: ";
    cin >> n;

    Product p[10];

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of Product " << i + 1 << ":\n";
        p[i].getData();
    }

    cout << "\n----- PRODUCT DETAILS -----\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nProduct " << i + 1 << ":\n";
        p[i].display();
    }

    return 0;
}