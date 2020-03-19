#include <iostream>

using namespace std;

int main() {
    int l=0,maxl=0;
    int i=0;
    char text[100000];

    cin>>text;

    //Check Until end of string
    while(text[i] != '\0'){

        //Check ASCII in range of Alphabet
        if(((int)text[i]>=65 && (int)text[i]<=90)||((int)text[i]>=97 && (int)text[i]<=122)){
            l++; //Increase Length
            i++; //Increase Pointer
            //If Length more than or equal 10 break reduce loop
            if(l==10){
                cout<<"It's 10 break!!!!"<<endl;
                maxl = l;
                break;
            }
        } else {
            //If it not alphabet store the longest and reset l
            maxl = l; //Store Longest close alphabet
            l=0; //reset length
            i++;
        }
    }

    //If it break by end
    maxl = l;

    cout<<"The longest close alphabet :"<<maxl<<endl;
    if(maxl>=10) cout<<"Too long didn't read";
    else cout<<"I'll get right on it";
}
