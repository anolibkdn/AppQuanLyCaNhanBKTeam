#include<iostream>
#include<string>
#include "PersonClass.cpp"
#include "ListObject.cpp"


using namespace std;

int main(int argc, char const *argv[])
{

    int choose;
    int n;
    PersonClass p;
    ListObject <PersonClass> l;
    cout<<"============================================================================="<<endl;
    cout<<"=============================   MANAGER PROGRAM   ==========================="<<endl;
    cout<<"============================================================================="<<endl;

    
    do
    {
        cout<<"\n\n\n1. Enter data of list."<<endl;
        cout<<"2. Show data of list."<<endl;
        cout<<"3. Update list."<<endl;
        cout<<"4. Delete element data of list."<<endl;
        cout<<"5. Sort data of list."<<endl;
        cout<<"6. Search element data in list."<<endl;
        cout<<"0. QUIT."<<endl;
        cout<<"\nEnter your choose: ";
        cin>>choose;
        cin.fail();
        cin.clear();
        if(choose==0){
            cout<<"Bye Bye!"<<endl;
            for(int i = 0; i < 15000; i++){
                for(int j=0; j < 15000; j++){}
            }   
            break;
        }
        switch (choose)
        {
            case 1:
                cout<<"\nEnter size of list: ";
                cin>>n;
                cin.fail();
                cin.clear();
                cin.ignore();
                for(int i = 0; i < n; i++)
                {
                    cin>>p;
                    l.push_back(p);
                }
                break;
            case 2:
                l.showList();
                break;

            case 3:
                cin>>p;
                cout<<"\nEnter index which you wanna update: ";
                cin>>n;
                cin.fail();

                cin.clear();
                l.l_insert(p,n);
                break;
            case 4:
                cout<<"\nEnter index which you wanna delete: ";
                cin>>n;
                cin.fail();
                cin.clear();
                l.l_delete(n);
                break;

            case 5:
                l.shell_sort();
                break;

            case 6:
                cin.ignore();
                string tmp;
                cout<<"\nEnter name: ";
                getline(cin,tmp);
                if(l.l_search(tmp,0,l.size())!=-1) cout<<l[l.l_search(tmp,0,l.size())];
                break;
            // default:
            //     break;
        }
    } while (true);
    return 0;
}
