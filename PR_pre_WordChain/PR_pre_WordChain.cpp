#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Start Code
    int L,N;
    cin>>L>>N;
    char word[L];
    char pword[L];
    char bword[L];

    cin>>pword;
    cout<<"First Word : "<<pword<<endl;

    for(int i=1;i<N;i++){
        cin>>word;

        //Check Word with Previous Word
        cout<<"========== [Now Check] ========="<<endl;
        cout<<"Previous Word: "<<pword<<"\tCurrent Word: "<<word<<endl;

        int diff = 0;

        for(int j=0;j<L;j++){

            if(word[j] != pword[j]) diff++; //If It different

            //If it different  more than 2 no more check
            if(diff>2) {
                strcpy(bword,pword); //Save Broken chain word
                break;
            }
            cout<<"Check Letter: "<<j<<"\t"<<word[j]<<"\t"<<pword[j]<<endl;
            cout<<"Now Diff : "<<diff<<endl;
        }
        strcpy(pword,word);
    }

    cout<<bword;

    return 0;
}
