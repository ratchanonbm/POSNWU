//Move First Wheel
        int mw1 = w[0][0];
        for(int i=0;i<mw1;i++){
            //cout<<"Move First Wheel "<<i+1<<endl;
            int temp = w[0][0];
            for(int j=0;j<9;j++){
                w[0][j] = w[0][j+1];
            }
            w[0][8] = temp;
        }

        //Move Second Wheel
        //cout<<"Move Second Wheel "<<endl;
        int temp2 = w[1][8];
        for(int i=8;i>0;i--){
            w[1][i] = w[1][i-1];
        }
        w[1][0] = temp2;

        //Move Third Wheel
        int mw3 = w[2][0];
        for(int i=0;i<mw3;i++){
            //cout<<"Move Third Wheel "<<i+1<<endl;
            int temp = w[2][0];
            for(int j=0;j<9;j++){
                w[2][j] = w[2][j+1];
            }
            w[2][8] = temp;
        }

        //For Debugging
        cout<<"===== New Value ====="<<endl;
        for(int i=0;i<9;i++){
            for(int j=0;j<3;j++){
                cout<<w[j][i];
            }
            cout<<endl;
        }
