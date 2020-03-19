#include<iostream>

int main() {
    int num,prime=1;
    scanf("%d",&num);
    if(num==1) prime=0;
    else if(num==2) prime=1;
    else if(num==2&&num!=2) prime=0;
    else if(num==3&&num!=3) prime=0;
    else if(num==5&&num!=5) prime=0;
    else {
        for(int i=7;i<=num;i++){
            if(num%i==0) {
                prime = 0;
                break;
            }
        }
    }
    if(prime == 1) printf("yes");
    else printf("no");
}
