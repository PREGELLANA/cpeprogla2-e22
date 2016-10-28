//read
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int arr[]={1,2,4,3};
    int x=0;
	int a, b ,i;
	
    ifstream read("input.txt");
    read >> a >> b;
    for(i=a;i<=b;i++){
      cout << i-- <<" ";
           i+=arr[(x%4)];  
      x++;
    }
    //system("pause");
    return 0;
}
