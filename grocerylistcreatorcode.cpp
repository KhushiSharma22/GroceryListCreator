#include <iostream>

using namespace std;

class CreateGroceryList
{
public:
    char item[50];
    int quantity;
    int n;
    
public:
    
    void Input()
    {
        cout<<"Enter the grocery item!"<<endl;
        cin >>item;
            
        cout<<"Enter the quantity of the item!"<<endl;
        cin>>quantity;
        
    }
    
    void Output()
    {
        cout<<item<<"\t\t\t\t"<<quantity<<endl;
        
    }
    
};
    
int main()
{
// Welcome the user!
    cout<<"Welcome to your Grocery List Creator! "<<endl;
    
// Ask the number of items to be added to the Grocery List:
    int n;
    cout<<"Enter the number of grocery list items you want to add: "<<endl;
    cin>>n;
    
    CreateGroceryList Items[n];
    
    for(int i=0; i<n; i++)
    {
        Items[i].Input();
    }
    cout<<"Name of Item"<<"\t"<<"Quantity"<<endl;
    
    for(int i=0; i<n ;i++)
    {
        Items[i].Output();
    }
    
    
    
}

