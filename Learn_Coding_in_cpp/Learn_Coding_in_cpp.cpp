
#include <iostream>
using namespace std;
#define Size 10000 
int actual_size;
struct Product
{
    int SerialNumber;
    int Quantity;
    int Sailes;
    int Price;
}Products[Size];

void Compare_Quantity()
{
    int NumOfQuantity;
    cout << "Enter the quantity: "; cin >> NumOfQuantity;
    for (int i = 0; i < actual_size; i++)
    {
        if (Products[i].Quantity < NumOfQuantity)
        {
            cout << "Product : " << Products[i].SerialNumber << endl;
        }
    }
}
void Highest_Sailes()
{
    int HighestSailesValue = INT_MIN;
    int HighestSailesProduct = 0;
    for (int i = 0; i < actual_size; i++)
    {
        if (Products[i].Sailes > HighestSailesValue)
        {
            HighestSailesValue = Products[i].Sailes;
            HighestSailesProduct = i + 1;
        }
    }
    cout << HighestSailesProduct << endl;
}
void Discount()
{
   
    for (int i = 0; i < actual_size; i++)
    {
        if (Products[i].Quantity < 6)
        {
            Products[i].Price = Products[i].Price / 2;
            cout << "Discount Applied!" << endl;
        }
       
    }
    
}
void DisplayAllProducts()
{

    for (int i = 0; i < actual_size; i++)
    {
        cout << "Product #" << i + 1<< endl;
        cout << "Serial Number : " << Products[i].SerialNumber<< endl;
        cout << "Quantity : " << Products[i].Quantity << endl;
        cout << "Sailes : " << Products[i].Sailes << endl;
        cout << "Price : " << Products[i].Price << endl;
    }

}









int main()
{
    int MenuNumber;
    char answer ;
    cout << "Enter number of products: "; cin >> actual_size;
    for (int i = 0; i < actual_size; i++)
    {
        cout << "Enter values of product #" << i + 1 << endl;
        cout << "Serial Number: "; cin >> Products[i].SerialNumber;
        cout << "Quantity: "; cin >> Products[i].Quantity;
        cout << "Sailes: "; cin >> Products[i].Sailes;
        cout << "Price: "; cin >> Products[i].Price;
    }
    cout << "Do you want to Apply Another function,Press 'Y' or 'y' for yes, any other key to stop : "; cin >> answer;
    while (answer == 'y'|| answer == 'Y')
    {
        cout << "-------------------------------------"<< endl;
        cout << "Please enter a number: " << endl;
        cout << "Press 1 to get products that have less quantity than a certain value"<< endl;
        cout << "Press 2 to Get Product with the highest sales" << endl;
        cout << "Press 3 to Apply 50% discount for products that have quantity less than 6" << endl;
        cout << "Press 4 to Display all the products" << endl; cin >> MenuNumber;
        if (MenuNumber == 1)
        {
            Compare_Quantity();
        }
        else if (MenuNumber == 2)
        {
            Highest_Sailes();
        }
        else if (MenuNumber == 3)
        {
            Discount();
        }
        else if (MenuNumber == 4)
        {
            DisplayAllProducts();
        }
        else
        {
            cout << "UnValid Number";
            break;

        }

        cout << "Do you want to Apply Another function,Press 'Y' or 'y' for yes, any other key to stop : "; cin >> answer;
    }
 
    
    return 0;
}