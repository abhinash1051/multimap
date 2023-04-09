#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,int>mm;

    mm.insert({12,45});
    mm.insert({22,34});
    mm.insert({34,56});
    mm.insert({56,43});
    mm.insert({24,65});

    cout<<"before erase all the element is :";
    for(auto it = mm.begin();it != mm.end();it++)
    {
        cout<<it->first<<'\t'<<it->second<<endl;   
    }

    mm.erase(12);
    mm.erase(22);

    cout<<"after errasing the elemet is :";
    for(auto it = mm.begin();it != mm.end();it++ )
    {
        cout<<it->first<<'\t'<<it->second<<endl;

    }
    return 0;
}

