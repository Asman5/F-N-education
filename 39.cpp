#include <bits/stdc++.h>

using namespace std;



int main(){
    int n;
    cin >> n; // количество студентов
    int m;
    cin >> m; // количество задач
    if(n == 0 || m == 0){
        cout << "error";
        return 0;
    }

    string s[n]; // массив студентов
    int a[n]; // массив результатов
    for (int i = 0; i < n; i++)
    {
        a[i] = 0;
    }

    string name = ""; // победитель
    int ans = 0; // сколько набрал баллов
    for (int i = 0; i < n; i++)
    {
        string st;
        cin >> st;
        s[i] = st; // сохраняем
        for (int j = 0; j < m; j++)
        {
            int l; cin >> l;
            a[i] += l; 
        }

        if(ans < a[i]){ // если ответ оказался меньше какого то студента
            ans = a[i];
            name = st;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << s[i] << " - " << a[i] << endl;
    }
    cout << "The best:" << endl;
    cout << name << " " << ans;
    return 0;
}