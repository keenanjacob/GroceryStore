//Author: Keenan Jacob
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
        string item;
        vector<string> list;
        char input;

        do
        {
                cout<<"\n==GROCERY LIST MANAGER==";
                cout<<"\nEnter your choice: ";
                cout<<"\n (A)dd an item";
                cout<<"\n (Q)uit";
                cout<<"\nYour choice (A/Q): ";
                cin>>input;
                if (input== 'a' || input== 'A')
                {
                        cout<< "What is the item?"<<endl;
                        cin>>item;
                        list.push_back(item);
                }
        } 
        while(!(input=='Q'|| input=='q'));

        cout<<"==ITEMS TO BUY=="<<endl;

        if (list.size()>0)
        {

                for( int i = 0; i < list.size(); i++)
                {
                        cout<<list.at(i)<<endl;
                }

        }
        else
        {
                cout<< "No items to buy!"<<endl;
        }

        return 0;
}
