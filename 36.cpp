#include <bits/stdc++.h>

using namespace std;

int main(){
    int decimalNum;
    cin >> decimalNum;
    int binaryNum[100000], in = 0;

    while (decimalNum != 0)
    {
        binaryNum[in] = decimalNum % 2;
        in++;
        decimalNum = decimalNum / 2;
    }

    int cnt = 0;
    int cnt_1 = 0;
    for (int i = (in - 1); i >= 0 ; i--)
    {
        cout << binaryNum[i];
        if(binaryNum[i] == 0){
            cnt++;
        }
        else
            cnt_1++;
    }
    cout << endl;
    cout << "zeros" << " " << cnt << endl;
    cout << "number of units" << " " << cnt_1;

    return 0;
}