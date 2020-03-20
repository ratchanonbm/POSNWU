#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {

    char input[5];
    double x=0,y=0;

    scanf("%s",&input);

    while(input[0] != '*'){

        short int dis = atoi(input);
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
        else if(dir[0] == 'S' && dir[1] == '\0') {y-=dis;} //South
        else if(dir[0] == 'S' && dir[1] == 'W') {x-=sqrt(pow(dis,2)/2);y-=sqrt(pow(dis,2)/2);}
        else if(dir[0] == 'W' && dir[1] == '\0') {x-=dis;} //West
        else if(dir[0] == 'N' && dir[1] == 'W') {x-=sqrt(pow(dis,2)/2);y+=sqrt(pow(dis,2)/2);}

        scanf("%s",&input);
    }

    printf("%.3lf %.3lf\n",x,y);
    printf("%.3lf",sqrt(pow(x,2)+pow(y,2)));
}
