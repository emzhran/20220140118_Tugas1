#include <iostream>
using namespace std;

double rerata(double a, double b){
    return (a+b)/2;
}

string status(double c){
    if (c >=60)
        return "Lulus";
    else
        return "gagal";
}

int main(){
    double nilM,nilB;
    //double rata;
    //string st;
    cout << "Masukan nilai Matematika = ";
    cin >> nilM;
    cout << "Masukan nilai Bahasa Indonesia = ";
    cin >> nilB;
    //rata = rerata(nilM,nilB);
    //st = status(rata);
    //cout << "Status Kelulusan = " << st;
    //cout << "Statud Kelulusan = " << status(rata);
    cout << "Status Kelulusan = " << status(rerata(nilM,nilB));
    return 0;
}