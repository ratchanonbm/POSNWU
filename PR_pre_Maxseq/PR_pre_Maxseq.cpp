#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Start Code
   int N;
   cin>>N;  //Input N

   int number[N]; //Array for number

   for(int i=0;i<N;i++){
        cin>>number[i];
   }

    int imax;
    int jmax;
    int mixmax = 0;
    //Mixing number
    for(int i=1;i<=N;i++){
        //cout<<"Mixing: "<<i<<" numbers"<<endl;
        for(int j=0;j<N;j++){
            int sum = 0;
            for(int k=0;k<i&&j+i<=N;k++){

                sum += number[j+k];
                //cout<<number[j+k]<<endl;
            }
            //cout<<"Sum: "<<sum<<endl;
            if(sum>mixmax) {
                mixmax = sum;
                imax = i;
                jmax = j;
            }
        }
   }

   if(mixmax<=0){
        cout<<"Empty sequence"<<endl;
   } else if(mixmax>0){
        for(int i=jmax;i<jmax+imax;i++){
            cout<<number[i]<<" ";
        }
        cout<<endl;
        cout<<mixmax;
   }

    return 0;
}
