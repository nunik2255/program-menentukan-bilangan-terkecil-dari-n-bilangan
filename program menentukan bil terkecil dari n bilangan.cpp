#include <iostream>
#include <conio.h>
using namespace std;

int main () {
int i, n;
float max,min,data;

cout<<"Masukan Jumlah Data : " ;
cin>>n;
cout<<"Masukan Data ke-1 : " ;
cin>>max;
min=max;

for (i=2; i<=n; i++){
    cout<<"Masukan data ke-"<<i<<":";
    cin>>data;
    if(data>max){
        max=data;
    }
    if(data<min){
        min=data;
    }
}
cout<<"Nilai Terbesar dari ke-"<<n<<"data adalah : "<<max<<endl;
cout<<"Nilai Terkecil dari ke-"<<n<<"data adalah ; "<<min;
return 0;
}
