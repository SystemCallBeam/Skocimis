#include<bits/stdc++.h>
using namespace std;
//'A', 'B', 'C'
int main(){
    char str[15] = {};
    cin >> str;
    int size = strlen(str)*4+1, cnt = 0, m = 12;
    int cut = (cnt+1)*4+1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i==2&&j%4==2)
            {
                cout << str[cnt++];
            }
            else if (cut<=size&&j>=cut(i+(j%4)==2||i+(j%4)==2*3||abs(i-(j%4))==2))
            {
                cout << "*";
            }
            
            else if (i+(j%4)==2||i+(j%4)==2*3||abs(i-(j%4))==2)
            {
                cout << "#";
            }
            
            else
            {
                cout << ".";
            }
        }
        cout << "\n";
    }
    return 0;
}