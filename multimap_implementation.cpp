#include<iostream>
#include <map>
#include <string>
using namespace std;
int main () {

   multimap<char, int> mm;

   multimap<char, int>::iterator it;

   mm.insert (pair<char, int>('a', 10));
   mm.insert (pair<char, int>('b', 20));
   mm.insert (pair<char, int>('b', 30));
   mm.insert (pair<char, int>('a', 40));
   
   cout<<"Size of the multimap: "<< mm.size() <<endl;

   cout << "Multimap contains:\n";

   for (it = mm.begin(); it != mm.end(); ++it)

      cout << (*it).first << " => " << (*it).second << '\n';
   for (char c = 'a'; c <= 'b'; c++) {

      cout << "There are " << mm.count(c) << " elements with key " << c << ":";
      multimap<char, int>::iterator it;

      for (it = mm.equal_range(c).first; it != mm.equal_range(c).second; ++it)
         cout << ' ' << (*it).second;
         cout << endl;
   }
   
   it = mm.find('b');
   mm.erase (it);
   cout<<"Size of the multimap: "<<mm.size()<<endl;
   cout << "Multimap contains:\n";
   for (it = mm.begin(); it != mm.end(); ++it)
      cout << (*it).first << " => " << (*it).second << '\n';
   return 0;
}