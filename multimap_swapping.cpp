#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,int>mm1,mm2;

    mm1.insert({2,30});
    mm1.insert({2,30});

    mm2.insert({2,30});
    mm2.insert({2,30});

    cout << "\nThe multimap1 before applying swap() is : \n";
    cout << "KEY\tELEMENT\n";
    for(auto it = mm1.begin();it != mm1.end();it++)
    {
        cout<<it->first<<'\t'<<it->second<<endl;
    }
    

    cout<<"\n the multimap before appling9 swap() is :\n";
    cout<<"KEY ELEMENT\t  ";

    for(auto it = mm2.begin(); it !=mm2.end();it++)
    {
        cout<<it->first<<'\t'<<it->second<<endl;
        
    }  

    mm1.swap(mm2); 
    cout<<"the multimap after appling swap() is :\n";
    cout<<"KEY ELEMENT \t";

     for(auto it = mm1.begin(); it != mm1.end(); ++it) {
        cout << it->first
             << '\t' << it->second << '\n';
    }
  
    cout << "\nThe multimap2 after applying swap() is : \n";
    cout << "KEY\tELEMENT\n";
    for (auto itr = mm2.begin(); itr != mm2.end(); ++itr) {
        cout << itr->first
             << '\t' << itr->second << '\n';
    }
    return 0;
}   