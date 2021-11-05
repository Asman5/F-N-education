#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b; cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        string str = to_string(i);
        // int(15551) == "15551"
        for (int j = 0; j < str.size(); j++)
        {
            if(str[j] == '5'){
                cout << str << " ";
                break;
            }
        }

    }
    

    return 0;
}