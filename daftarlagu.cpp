#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> daftarlagu = {"Ini Abadi", "Monokrom"};
    daftarlagu.insert(daftarlagu.begin() + 1, "Everything u are");
    daftarlagu.push_back("Aitakatta");
    daftarlagu.erase(daftarlagu.begin());
    
    cout << "hasil akhir: ";
    for (string item : daftarlagu) {
        cout << item << " , ";
    }
    cout << endl;

    return 0;
}