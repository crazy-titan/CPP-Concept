#include<iostream>
using namespace std;



int main(){
    int array2D[3][4] = {
        {10,20,30,40},  // always think right to left and make the array.
        {50,60,70,80},
        {90,100,110,120}
    };

    for(int i = 0; i < 3;i++){
        cout << "We are on shop: "<< (i+1) << endl;
        for (int j = 0; j < 4; j++){
            cout << array2D[i][j] << endl;
        }
    }


    return 0;
}