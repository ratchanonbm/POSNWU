#include <bits/stdc++.h>

using namespace std;

int main() {

    char input[5];
    double x=0,y=0;

    cin>>input;

    while(input[0] != '*'){

        short int dis = stoi(input);
        char dir[2];

        while(((int)input[0] < 65 || (int)input[0] > 90) && input[0] != '\0'){
            short int p=0;
            while(input[p] != '\0'){
                input[p] = input[p+1];
                p++;
            }
        }

        strcpy(dir,input);

        if(dir[0] == 'N' && dir[1] == '\0') {y+=dis;}
        else if(dir[0] == 'N' && dir[1] == 'E') {x+=sqrt(pow(dis,2)/2);y+=sqrt(pow(dis,2)/2);}
        else if(dir[0] == 'E' && dir[1] == '\0') {x+=dis;}
        else if(dir[0] == 'S' && dir[1] == 'E') {x+=sqrt(pow(dis,2)/2);y-=sqrt(pow(dis,2)/2);}
        else if(dir[0] == 'S' && dir[1] == '\0') {y-=dis;}
        else if(dir[0] == 'S' && dir[1] == 'W') {x-=sqrt(pow(dis,2)/2);y-=sqrt(pow(dis,2)/2);}
        else if(dir[0] == 'W' && dir[1] == '\0') {x-=dis;}
        else if(dir[0] == 'N' && dir[1] == 'W') {x-=sqrt(pow(dis,2)/2);y+=sqrt(pow(dis,2)/2);}

        scanf("%s",&input);
    }
    cout<<setprecision(3)<<fixed;
    cout<<x<<" "<<y<<endl;
    cout<<sqrt(pow(x,2)+pow(y,2));
}
