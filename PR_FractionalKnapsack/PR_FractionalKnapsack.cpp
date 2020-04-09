/*
    Task: PR_FractionalKnapsack
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
using namespace std;

struct data{
    int w;
    int v;
};

bool compareitem(data a, data b) {
        return a.v/a.w>b.v/b.w;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Start Code
    int T;
    cin>>T;

    for(int t=0;t<T;t++){
        int value = 0;
        int N;
        int maxW;
        cin>>N;
        cin>>maxW;

        data item[N];

        for(int i=0;i<N;i++){
            cin>>item[i].v;
            cin>>item[i].w;
        }

        sort(item, item+N, compareitem);

        //for(int i=0;i<N;i++){
        //   cout<<item[i].v<<"\t"<<item[i].w<<"\t"<<item[i].vpw<<endl;
        //}

        float sumW = 0;
        float sumval = 0;
        for(int i=0;i<N&&sumW<maxW;i++){
            float quantity;
            if(sumW + item[i].w <= maxW){
                quantity = 1;
            }
            else {
                quantity = (maxW - sumW) / item[i].w;
            }
            sumW += quantity*item[i].w;
            sumval += quantity*item[i].v;
            //cout<<"Now W:"<<sumW<<endl;
            //cout<<"Now val:"<<sumval<<endl;
        }
        printf("%.2f\n",sumval);
    }


    return 0;
}
