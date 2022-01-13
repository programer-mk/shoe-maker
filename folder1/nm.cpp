#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
struct subject
{
    string name;
    int num;
};
int num(vector<subject> sub)  
{    
    push_back(sub.num) = -1;
}
int main()
{
    vector<subject> sub;
    sub.push_back(subject());
    num(sub);
    // cin >> sub[0].name;
    // cin >> sub[0].num;
    cout << "name : " << sub[0].name << "integer : " << sub[0].num;
    
    
    return 0;
}