#include <iostream>
#include <conio.h>
using namespace std;
bool check = true;

struct node{
    string nama;
    string IbuKt;
    string bahasa;
    string MTuang;
    float populasi;
    string KPnegara;
    string KPP;
    node *next;
   
}*head,*current,*lastptr;

void init(){
   head = NULL;
}


void insert(){
    node *p;
    p=new node;
    cout << "\nNama Negara : " ;
    cin >> p->nama ;
    cout << "\nIbu Kota : ";
    cin >> p->IbuKt;
    cout << "\nBahasa : ";
    cin >> p->bahasa;
    cout << "\nMata Uang : " ;
    cin >> p->MTuang;
    cout << "\nJumlah Populasi (juta): " ;
    cin >> p->populasi;
    cout << "\nkepala negara : ";
    cin >> p->KPnegara;
    cout << "\nkepala pemerintahan : ";
    cin >> p->KPP;
    p->next=NULL;
    if (check){
        head=p;
        lastptr=p;
        check=false;
    }
    else{
        lastptr->next=p;
        lastptr=p;
    }
}

void Template(){
    cout << "\t\t\t\t\t======================================\t\t\t\t\t" << endl;
    cout << "\t\t\t\t\t        Data Negara ASEAN     \t\t\t\t\t" << endl;
    cout << "\t\t\t\t\t======================================\t\t\t\t\t" << endl;
    
}


void tampil(){
    current=head;
    if (head==NULL){
        cout << "data tidak ditemukan ! " << endl;
    }
    else{
        Template();
        while(current!=NULL){
            cout << "------------------" << endl;
            cout << "|   " << current->nama << "   |" << endl;
            cout << "------------------" << endl;
            cout << "Negara\t\t    : " << current->nama << endl;
            cout << "Bahasa\t\t    : " << current->bahasa << endl;
            cout << "Mata uang\t    : "<< current->MTuang << endl; 
            cout << "Ibu kota\t    : " << current->IbuKt << endl;
            cout << "populasi\t    : " << current->populasi << endl;
            cout << "kepala negara\t    : "<< current->KPnegara << endl; 
            cout << "kepala pemerintahan : "<< current->KPP << endl << endl; 
            current=current->next;
        }
    }
}


int main(){
    int angka;
    char pil;
    do{
        system("cls");
        cout << "===========================" << endl;
        cout << "\t    Menu\t" << endl;
        cout << "===========================" << endl;
        cout << "1. Input data" << endl;
        cout << "2. Show data" << endl ;
        cout << "----------------------------" << endl << endl;
        cout << "Masukan pilihan : " ;
        cin >> angka;
    switch(angka){
        
        case 1 :
        insert();
        break;

        case 2 :
        tampil();
        break;
    }
    cout << "Ketik(y) untuk kembali ke menu : ";
    cin >> pil;
    }while(pil == 'y' || pil == 'Y');
}