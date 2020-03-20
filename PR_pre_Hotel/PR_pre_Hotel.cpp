#include <iostream>


using namespace std;

int main() {
    int n;
    int price=0;

    cin>>n;

    if(n%15==1) price = ((n/15)*3000) + 500;
    else if(n%15==2) price = ((n/15)*3000) + 800;
    else if(n%15==3) price = ((n/15)*3000) + 1300;
    else if(n%15==4) price = ((n/15)*3000) + 1500;
    else if(n%15==5) price = ((n/15)*3000) + 1500;
    else if(n%15==6) price = ((n/15)*3000) + 2000;
    else if(n%15==7) price = ((n/15)*3000) + 2300;
    else if(n%15==8) price = ((n/15)*3000) + 2800;
    else {
        price = ((n/15)*3000)+3000;
    }

    cout<<price;

}
