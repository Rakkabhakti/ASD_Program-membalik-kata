#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
  stack<string> s;
	int i,j,x,q,k,l;
	string o,h;


	for (k=0;k>=0;k++){
	x=0;
	j=0;
	k=0;
	    	cout <<"\n";
	    cout<< " pilih menu "<<endl; cout<<" A. Terjemahkan bahasa"<<endl;cout << " B. selesai"<<endl;
	    cout << "Masukkan pilihan [A/B]  :   ";
	while(l>1)  {cin>>h;break;if (o=="ya"){break;}}
 	for (l=0;l<=1;l++){getline(cin, o);cout <<"\n";l=3;}
	    if (o=="B"|| h=="B"|| o=="b"|| h=="b"){break;}
	    else{
	
    cout << "masukkan kalimat yang akan diubah ke bahasa malang :  ";
    string symbolString;
 getline(cin, symbolString);
  cout << "masukkan jumlah kata dalam kalimat tersebut :  ";
 cin>> q;
 cout << "maka terjemahan nya adalah :  ";
    int str_len = symbolString.length();
    string symbol;
    for (j=0;j<=q;j++){
for(i=x;i<=str_len;i++){
 symbol = symbolString[i];
 if (symbol == "n" ) { i++;symbol = symbolString[i];
 if (symbol == "g"){s.push("ng");}
 else {s.push("n");}}
 else if (symbol == " "){x=i+1;  j--;break;}
 else {s.push(symbol); }
}

    while (!s.empty()) {

        cout << s.top();

        s.pop();
    }cout << " ";j++;}} cout <<"\n";}
    return 0;}
