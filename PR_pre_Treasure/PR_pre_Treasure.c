#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

    char input[5];
    double x=0,y=0;

    //First Input
    scanf("%s",&input);

    //Data Converter
    while(input[0] != '*'){

        int dis = atoi(input); //Pull integer from string
        char dir[2];

        while(((int)input[0] < 65 || (int)input[0] > 90) && input[0] != '\0'){

            //Delete Integer
            int p=0;
            while(input[p] != '\0'){
                input[p] = input[p+1];
                p++;

            }
        }

        //Copy input to direction
        strcpy(dir,input);

        //Test Input Converter step 1
        //printf("Distance = %d \tDirection = %s\n",dis,dir);


        //Translate The Direction
        if(dir[0] == 'N' && dir[1] == '\0') {y+=dis;} //North
        else if(dir[0] == 'N' && dir[1] == 'E') {x+=sqrt(pow(dis,2)/2);y+=sqrt(pow(dis,2)/2);} //NorthEast
        else if(dir[0] == 'E' && dir[1] == '\0') {x+=dis;} //NorthEast
        else if(dir[0] == 'S' && dir[1] == 'E') {x+=sqrt(pow(dis,2)/2);y-=sqrt(pow(dis,2)/2);} //NorthWest
        else if(dir[0] == 'S' && dir[1] == '\0') {y-=dis;} //South
        else if(dir[0] == 'S' && dir[1] == 'W') {x-=sqrt(pow(dis,2)/2);y-=sqrt(pow(dis,2)/2);} //SouthWest
        else if(dir[0] == 'W' && dir[1] == '\0') {x-=dis;} //West
        else if(dir[0] == 'N' && dir[1] == 'W') {x-=sqrt(pow(dis,2)/2);y+=sqrt(pow(dis,2)/2);} //NorthWest

        //Now position
        //printf("========== Now =========\nX: %0.3lf\tY: %0.3lf\n",x,y);

        //Next Input
        scanf("%s",&input);
    }
    //Final position
    //printf("========== F_P =========\nX: %0.3lf\tY: %0.3lf\n",x,y);
    //Distance from start (0,0)
    //printf("%0.3lf",sqrt(pow(x,2)+pow(y,2)));

    //Output
    printf("%0.3lf %0.3lf\n",x,y);
    //Distance from start (0,0)
    printf("%0.3lf",sqrt(pow(x,2)+pow(y,2)));



}
