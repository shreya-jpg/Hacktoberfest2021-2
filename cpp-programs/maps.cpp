#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int main(){
    map<string, int> marksMap;
    marksMap["Harry"] = 98;
    marksMap["Jack"] = 59;
    marksMap["Rohan"] = 2;
    map<string, int> :: iterator iter;
    for (iter  = marksMap.begin() ; iter != marksMap.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
    
}