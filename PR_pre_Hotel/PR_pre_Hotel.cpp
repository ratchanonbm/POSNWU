#include <iostream>


using namespace std;

int main() {
    int n;
    int price=0;

    cin>>n;

    //ROOM size XL
    cout<<"========== Room XL =========="<<endl;
    price += (n/15)*3000;
    cout<<"Room: "<<n/15<<"\tPrice: "<<(n/15)*3000<<endl;
    cout<<"Total: "<<price<<endl;
    n %= 15;

    //ROOM size L
    cout<<"========== Room L =========="<<endl;
    price += (n/5)*1500;
    cout<<"Room: "<<n/15<<"\tPrice: "<<(n/15)*3000<<endl;
    cout<<"Total: "<<price<<endl;
    n %= 5;

    //ROOM size M
    cout<<"========== Room M =========="<<endl;
    price += (n/2)*800;
    cout<<"Room: "<<n/15<<"\tPrice: "<<(n/15)*3000<<endl;
    cout<<"Total: "<<price<<endl;
    n %= 2;

    //ROOM size S
    cout<<"========== Room S =========="<<endl;
    price += (n/1)*500;
    cout<<"Room: "<<n/15<<"\tPrice: "<<(n/15)*3000<<endl;
    cout<<"Total: "<<price<<endl;
    n %= 1;

    cout<<price;

}
