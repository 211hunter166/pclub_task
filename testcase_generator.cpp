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
    int n;
    cout << "Enter the length of the random array required " ;
    cin >> n;
    if (n>100000){
        cout << "Invalid input for n " ;
        return 0;
    }
    randompermute(n);
 
    return 0;
}