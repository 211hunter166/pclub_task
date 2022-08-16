#include <bits/stdc++.h>
using namespace std;
 
int rand_e(vector<int>& v)
{

    int n = v.size();
    srand(time(NULL));
    int index = rand() % n;
    int num = v[index];
    swap(v[index], v[n - 1]);
    v.pop_back();
    return num;
}
 
void randompermute(int n)
{
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        v[i] = i + 1;


    while (v.size()) {
        cout << rand_e(v) << " ";
    }
}
 

int main()
{
    int t,n=1;
    cout << "Enter t " ;
    cin >> t;
    cout << "\n" ;
    cout << t << "\n" ;
    while (t>0) {
    n = n*2;
    n= n%100000;
    cout << n << "\n" ;
    randompermute(n);

     cout << "\n" ;
     t--;
    }
    return 0;
}
