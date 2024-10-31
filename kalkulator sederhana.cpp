#include <iostream>
using namespace std ;

int main (){
    char operasi;
    float angka1, angka2;

    cout << "masukkan angka pertama >>";
    cin >> angka1;
    cout << "masukkan operasi yang di inginkan [+][-][*][/] >>";
    cin >> operasi;
    cout << "masukkan angka kedua >>";
    cin >> angka2;
    
    if (operasi ==  '+'){
        cout <<"hasil dari "<< angka1 << " + "<< angka2 << " = "<< angka1 + angka2 ;
    }
    else if (operasi ==  '-'){
        cout <<"hasil dari "<< angka1 << " - "<< angka2 << " = " << angka1 - angka2 ;
    }
    else if (operasi ==  '*'){
        cout <<"hasil dari "<< angka1 << " * "<< angka2 << " = " << angka1 * angka2 ;
    }
    else if (operasi ==  '/'){
        if (angka2 == 0 ){
            cout << "hasil dari "<< angka1 << " / "<< angka2 << " = " << " Tidak terhingga " ;
        }
        else {
            cout <<"hasil dari "<< angka1 << " / "<< angka2 << " = " << angka1 / angka2 ;

        }
    }
    else {
        cout << "Operasi yang dipilih tidak tersedia";
    }
}                                           