#include <iostream>

using namespace std;

int main() {
    int n;
    int price=0;

    cin>>n;

    //ROOM size XL
    price += (n/15)*3000;
    n %= 15;

    //ROOM size L
    price += (n/5)*1500;
    n %= 5;

    //ROOM size M
    price += (n/2)*800;
    n %= 2;

    //ROOM size S
    price += (n/1)*500;
    n %= 1;

    cout<<price;

}
