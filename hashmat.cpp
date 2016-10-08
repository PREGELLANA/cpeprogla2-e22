# include <iostream>
# include <stdlib.h>
using namespace std;
 
 int main ()
 
 
 {
 	int hashms, hashmo, diff; 
 	
 	cout<<" Input hashmat's soldiers: ";
 	cin>>hashms;
 	cout<<" Input hashmat's opponents' soldiers: ";
 	cin>>hashmo;
 	
 	diff = hashms - hashmo;
 	diff = abs(hashms - hashmo);
 	
 	cout<<" The difference is :";
 	cout<<diff;
 	
 	return 0;
 }
 
