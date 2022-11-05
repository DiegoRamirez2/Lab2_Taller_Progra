#include "Bin_Packing.h"

int main(){
    /*
    int n;
    int space;
    cout << "Ingrese el número de elementos: ";
    cin >> n;
    cout << "Ingrese el espacio disponible: ";
    cin >> space;
    vector<int> integers;
    for(int i=0; i<n; i++){
        int element;
        cout << "Ingrese un elemento: ";
        cin >> element;
        integers.push_back(element);
    */
    int space = 32250;
    srand(time(NULL));
    int sum = 0;
    vector<int> integers;
    for(int i=0; i<32250; i++){
        int element = rand() % 32250 + 1;
        integers.push_back(element);
        sum += element;
    }
    sort(integers.begin(), integers.end(), greater<int>());
    Bin_Packing *bp = new Bin_Packing(space);
    bp->BestFitDecreasing(integers, space);
    //bp->NextFitDecreasing(integers, space);
    bp->print();
    cout << "Se esperaban " << sum/space << " contenedores" << endl;
    cout << "Sobran: " << bp->Cont - sum/space << endl;
    //cout << "La suma de los elementos es: " << sum << endl;

}