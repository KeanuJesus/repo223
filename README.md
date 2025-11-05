# repo223
studia
using namespace std;

int main() {
    int n;
    
    cout << "Podaj, ile liczb chcesz wprowadzic (n): ";
    while (!(cin >> n) || n <= 0) {
        cout << "Niepoprawna wartosc. n musi byc dodatnia liczba calkowita.\n";
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        cout << "Podaj, ile liczb chcesz wprowadzic (n): ";
    }

    int max_number = numeric_limits<int>::min(); 
    int current_number; 
    
    cout << "\nProsze wprowadzic " << n << " liczb calkowitych:\n";
    
    for (int i = 0; i < n; ++i) {
        cout << "Liczba " << i + 1 << ": ";
        
        while (!(cin >> current_number)) {
            cout << "Niepoprawny format. Prosze wprowadzic liczbe calkowita.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Liczba " << i + 1 << ": ";
        }
        
        if (current_number > max_number) {
            max_number = current_number; 
        }
    }
    
    cout << "\nNajwieksza wprowadzona liczba to: " << max_number << "\n";
    
    return 0;
}
