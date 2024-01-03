/*Given an integer 'N', determine the maximum number of nodes present on 'Nth' level in a binary tree.*/
#include<iostream>
using namespace std;
int numberofnodes(int N){
    if(N==1){
        return 1;
    }
    return 2 * numberofnodes(N-1);
}
int main(){
    int N;
     cout << "Enter the level N: ";
    cin >> N;
    cout<<"number of nodes in the level "<<N<<"are:"<<    numberofnodes(N)<<endl;
    //numberofnodes(3);
    cout<<"done";
}