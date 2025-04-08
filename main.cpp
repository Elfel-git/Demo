#include <iostream>
using namespace std;

//Tim uoc chung
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
//Kiem tra dau vao hop le
void getValidInt(string message, int &value) {
    while (true) {
        cout << message;
        if (!(cin >> value)) {
            cout << "Loi: Vui long nhap mot so nguyen!\n";
            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }
        break;
    }
}

int main() {
    int tu, mau;

    getValidInt("Nhap tu so: ", tu);

    while (true) {
        getValidInt("Nhap mau so (khac 0): ", mau);
        if (mau == 0) {
            cout << " Mau so bang 0! Vui long nhap lai.\n";
            continue;
        }
        break;
    }

    if (tu == 0) {
        cout << "Phan so da rut gon: 0" << endl;
        return 0;
    }

    //rut gon phan so
    int ucln = gcd(abs(tu), abs(mau));

    tu /= ucln;
    mau /= ucln;

    if (mau < 0) {
        tu = -tu;
        mau = -mau;
    }

    cout << "Phan so da rut gon: " << tu << "/" << mau << endl;

    return 0;
}
