#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int group = 0;

    //Start Code
    int L,N;
    cin>>L>>N;

    char word[L];
    char pword[L];
    char lword[L];

    int maxDiff=0;

    //Receive First Word
    cin>>pword;
    //cout<<"First Word : "<<pword<<endl;

    //Make first word is last word if N = 1 will output this word
    strcpy(lword,pword);


    //For loop receive other word until N
    for(int i=1;i<N;i++){
        cin>>word;

        //Check Word with Previous Word
        //cout<<"================ [Now Check] ==============="<<endl;
        //cout<<"Previous Word: "<<pword<<"\tCurrent Word: "<<word<<endl;

        int diff = 0;

        for(int j=0;j<L;j++){

            if(word[j] != pword[j]) diff++; //If It different

            //cout<<"Check Letter: "<<j<<"\t"<<word[j]<<"\t"<<pword[j]<<"\tNow Diff : "<<diff<<endl;
        }

        if(maxDiff<diff) maxDiff = diff;
        //cout<<"Max Diff: "<<maxDiff<<endl;

        //Check If Different letter more than 2 Broken word is previous word
        if(diff>2&&group==0) {
            strcpy(lword,pword); //Save Broken chain word
            group++;
        }
        //Check If Every Word Different letter lees than 2 and this word is last word,last word is this word
        else if(i == N-1&&maxDiff <= 2){
            //cout<<"This is last Word"<<endl;
            strcpy(lword,word);
        }

        //Make Current is Previous Word for next word
        strcpy(pword,word);
    }



    cout<<lword;

    return 0;
}
