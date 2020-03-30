#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)
{
    if (n == 1){
        cout<<"1 "<<from_rod<<"->"<<to_rod<<endl;
        return;
    }
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    cout<<""<< n<<" " <<from_rod<<"->"<<to_rod<<endl;
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Start Code
    int n; // Number of disks
    cin>>n;
    towerOfHanoi(n, 'A', 'C', 'B'); // A, B and C are names of rods

    return 0;
}
