#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int zarAt() {
    return rand() % 6 + 1; // 1 ile 6 arasında rastgele bir sayı üretir
}

int main() {
    // Rastgele sayı üretimi için seed ayarı
    srand(time(0));

    char devam;
    do {
        cout << "Zar atmak için bir tuşa basın...";
        cin.ignore(); // Kullanıcının bir tuşa basmasını beklemek için

        int zar1 = zarAt();
        int zar2 = zarAt();

        cout << "Zar 1: " << zar1 << endl;
        cout << "Zar 2: " << zar2 << endl;
        cout << "Toplam: " << zar1 + zar2 << endl;

        cout << "Devam etmek istiyor musunuz? (E/H): ";
        cin >> devam;
    } while (devam == 'E' || devam == 'e');

    cout << "Oyun sona erdi. İyi günler!" << endl;

    return 0;
}
