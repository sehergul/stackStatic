#include <iostream>
#define SIZE 10

using namespace std;

struct stack{
    int data[SIZE]; //dizi
    int top=-1; //indis degeri
};

stack stk;


void push(int key){ //Ekleme yapar
    if(stk.top==(SIZE-1)){
        cout << "Stack doludur!" << endl;}
    else{
        stk.top++;
        stk.data[stk.top]=key;
        cout << key <<  " degeri Stack'e eklendi!" << endl;}
}

void pop(){ //Cikarma yapar
    if(stk.top==-1){
        cout << "Stack bos!" << endl;}
    else{
        cout << stk.data[stk.top] << " degeri Stack'ten cikartildi!" << endl;
        stk.top--;
    }

}


void clear(){ //Tamamen temizler
    stk.top=-1;
    cout << "Stack resetlendi!" << endl;
}

void print(){ //Verileri yazdirir
    if(stk.top==-1)
        cout << "Stack bos!" << endl;
    else{
        for(int i=stk.top;i>-1;i--)
            cout << stk.data[i] << endl;}
}


int main()
{
    cout << "Stack'in toplam kapasitesi: " << sizeof(stk) << " byte" << endl;
    //10*4 = 40 byte diziden
    //1*4= 4 byte top degiskeninden
    int sayi, secim;
    while(true){
        cout << "1- Push (Ekle): " << endl;
        cout << "2- Pop (Cikar): " << endl;
        cout << "3- Clear (Reset): " << endl;
        cout << "4- Print (Yazdir): " << endl;
        cout << "Yapmak istediginiz islemi seciniz: ";
        cin >> secim;
        switch(secim){
        case 1:
            cout << "Sayi giriniz: "; cin >> sayi;
            push(sayi);
            break;
        case 2:
            pop();
            break;
        case 3:
            clear();
            break;
        case 4:
            print();
            break;}

}

    return 0;
}
