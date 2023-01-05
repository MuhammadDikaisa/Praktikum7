#include <iostream>
#include <queue>
#include <vector>

using namespace std;

// Struktur data untuk menyimpan informasi nasabah
struct Customer {
    string name; // nama nasabah
    string account_number; // nomor buku tabungan nasabah
};

int main()
{
    // Inisialisasi daftar nasabah
    vector<Customer> customers = ({
        {"Anna", "123456"},
        {"Budi", "234567"},
        {"Cici", "345678"},
        {"Dani", "456789"},
        {"Eli", "567890"}
    });

    // Buat antrian nasabah yang diprioritaskan adalah nasabah dengan nomor buku tabungan dengan akhir digit genap
    priority_queue<Customer, vector<Customer>, function<bool(Customer, Customer)>> queue([](const Customer& c1, const Customer& c2) {
        int last_digit1 = c1.account_number.back() - '0'; // konversi akhir digit nomor buku tabungan ke integer
        int last_digit2 = c2.account_number.back() - '0';
        return (last_digit1 % 2 == 0 && last_digit2 % 2 != 0) || (last_digit1 % 2 == 0 && last_digit2 % 2 == 0 && c1.account_number < c2.account_number); // prioritaskan nasabah dengan nomor buku tabungan akhir digit genap
    });

    // Tambahkan nasabah ke dalam antrian
    for (const auto& customer : customers) {
        queue.push(customer);
    }

    // Tampilkan antrian nasabah
    cout << "Antrian nasabah:" << endl;
    while (!queue.empty()) {
        cout << queue.top().name << " - " << queue.top().account_number << endl;
        queue.pop();
    }

    return 0;
}

