#include<iostream>
using namespace std;
void bubbleSort(int data[], int n){
    int temp;
 for (int i = 0; i < n-1; i++)
    {
    for (int j = i+1; j < n; j++)
    {
        if (data[i]>data[j])
        {
            temp = data[i];
            data[i]=data[j];
            data[j]=temp;
        }   
    }
    }
}
int main(){
    int length;
 	cout<<"  Nama          : SITI KURNIATI "<<endl;
 	cout<<"  Kelas         : SISTEM INFORMASI (MALAM)"<<endl;
	cout<<"  Mata Kuliah   : Algoritma & Pemoggraamaan 2 "<<endl<<endl;
	cout<<"UAS ALGORITMA DAN PEMOGRAMAN 2"<<endl<<endl;
    cout<<"ALGORITMA PENGURUTAN BUBLE SORT"<<endl;
	cout<<"Masukkan banyak elemen : ";
    cin>>length;
    cout<<"Masukan Nilai"<<endl;
    int data[length];
    for (int i = 0; i < length; i++)
    {
        cout<<"Nilai :";
        cin>>data[i];
    }cout<<endl;

   
    bubbleSort(data,length);
    cout<<"Hasil Pengurutan Buble Sort Sebagai Berikut : "<<endl;
    for (int i = 0; i < length; i++)
    {
        cout<<data[i]<<" ";
    }cout<<endl;
        
}
