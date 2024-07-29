#include <iostream>
using namespace std;
int main() {
    int ID[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int Age[10] = {10, 11, 25, 25, 30, 5, 5, 5, 25, 10};
    char Gen[10] = {'M', 'F', 'M', 'F', 'M', 'F', 'M', 'M', 'F', 'M'};

    //sorting based on age and gender

    for(int i=0; i<10;i++){
        for(int j= i+1;j<10;j++){
            if(Age[i]>Age[j] || Age[i]==Age[j] && Gen[i]>Gen[j] ){
                //swap ID,Age, and Gen
                int tempID = ID[i];
                ID[i] = ID[j];
                ID[j] = tempID;

                int tempAge = Age[i];
                Age[i] = Age[j];
                Age[j] = tempAge;

                char tempGen = Gen[i];
                Gen[i] = Gen[j];
                Gen[j] = tempGen;
            }
        }
    }
    cout << "Sorted ID array:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << ID[i] << " ";
    }
    cout << endl;

    // Print age and gender arrays for reference
    cout << "Age array:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << Age[i] << " ";
    }
    cout << endl;

    cout << "Gender array:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << Gen[i] << " ";
    }
    cout << endl;

    return 0;

}