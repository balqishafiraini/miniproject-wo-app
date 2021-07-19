#include <iostream>

using namespace std;
int main(){
    string password, username, user, sandi, namaLengkap;
    char lihatPaketLain, pilihPaket, paket;
    const float PAKETSATU=100000000, PAKETDUA=75000000, PAKETTIGA=50000000;
    int totalBiaya=0;


    cout << "==============================================="<<endl;
    cout << "Selamat Datang di Wedding Package Hotel Ritzy"<<endl;
    cout << "==============================================="<<endl;


    cout << "\nDaftar terlebih dahulu\n";
    cout << "Masukkan nama lengkap Anda : ";
    getline (cin, namaLengkap);
    cout << "Masukkan username : ";
    cin >> username;
    cout << "Masukkan password : ";
    cin >> password;
    cout <<"\n"<<endl;
    cout << "Selamat, Anda telah terdaftar."<<endl;

    do{
        cout <<"\n"<<endl;
        cout << "==============================================="<<endl;
        cout << "Tulis username yang telah terdaftar: ";
        cin >> user;
        cout << "Tulis password yang telah terdaftar: ";
        cin >> sandi;
        if ((user==username)&&(sandi==password)){
            cout << "\nLogin berhasil!"<< "\nSekarang anda boleh memesan paket wedding" <<endl;
        } else if ((user!=username)&&(sandi==password)){
            cout << "\nAnda salah memasukkan username!" <<endl;
        } else if((user==username)&&(sandi!=password)){
            cout << "\nAnda salah memasukkan password!"<<endl;
        } else if((user!=username)&&(sandi!=password)){
            cout <<"\nUsername dan password anda salah" <<endl;
        }
    } while((user!=username)||(sandi!=password));

    cout << "\n";
    cout << "==============================================="<<endl;
    cout << "\nSilahkan pilih paket wedding"<<endl;
    cout << "1. Class 1 Rp 100 jt"<<endl;
    cout << "2. Class 2 Rp 75 jt"<<endl;
    cout << "3. Class 3 Rp 50 jt"<<endl;


    string paketSatu[8]={"ballrom hotel","5 kamar", "200 pax", "250 pax", "5 orang", "full band", "2 orang", "diamond class"};
    string paketDua[7]={"ballrom hotel","3 kamar", "150 pax", "200 pax", "3 orang", "1 orang", "gold class"};
    string paketTiga[6]={"ballrom hotel","1 kamar", "100 pax", "150 pax", "1 orang", "silver class"};
    string tema, menuNasiGoreng, menuSoup, menuAyam, menuDaging, menuSayuran;
    char pilihanTema, menuNasGor, menuSup, menuChicken, menuBeef, menuVegetables;
    do{
        cout << "\n";
        cout << "==============================================="<<endl;
        cout << "\nPilih paket yang ingin Anda lihat : ";
        cin >> paket;
        while(paket!='1'&&paket!='2'&&paket!='3'){
            cout << "Paket tidak tersedia, silahkan pilih yang tersedia"<<endl;
            cout << "\n";
            cout << "==============================================="<<endl;
            cout << "\nPilih paket yang ingin Anda lihat : ";
            cin >> paket;
        }
        switch (paket){
            case '1':
                cout << "\nClass 1 menyediakan :"<< endl;
                cout << "1. Sewa "<<paketSatu[0]<<endl;
                cout << "2. Sewa "<<paketSatu[1]<<endl;
                cout << "3. Catering "<<paketSatu[2]<<endl;
                cout << "4. Snack "<<paketSatu[3]<<endl;
                cout << "5. MUA untuk "<<paketSatu[4]<<endl;
                cout << "6. Sound system "<<paketSatu[5]<<" dan MC "<<paketSatu[6]<<endl;
                cout << "7. Dekorasi " << paketSatu[7]<<endl;
                cout << "\n";

                
                do{
                    cout << "\n";
                    cout << "==============================================="<<endl;
                    cout << "\nApakah anda ingin melihat paket lain(Y/N): ";
                    cin >> lihatPaketLain;
                    if((lihatPaketLain=='Y'||lihatPaketLain=='y')){
                    }else if((lihatPaketLain=='N'||lihatPaketLain=='n')){
                    }else{
                        cout << "\nMasukkan Anda salah"<<endl;
                    }
                }while(lihatPaketLain!='Y'&&lihatPaketLain!='y'&&lihatPaketLain!='N'&&lihatPaketLain!='n');
            break;

                

            case '2':
                cout << "\nClass 2 menyediakan :"<< endl;
                cout << "1. Sewa "<<paketDua[0]<<endl;
                cout << "2. Sewa "<<paketDua[1]<<endl;
                cout << "3. Catering "<<paketDua[2]<<endl;
                cout << "4. Snack "<<paketDua[3]<<endl;
                cout << "5. MUA untuk "<<paketDua[4]<<endl;
                cout << "6. Sound system dan MC "<<paketDua[5]<<endl;
                cout << "7. Dekorasi " <<paketDua[6]<<endl;
                cout << "\n";
                
                do{
                	cout << "==============================================="<<endl;
                    cout << "\nApakah anda ingin melihat paket lain(Y/N): ";
                    cin >> lihatPaketLain;
                    if((lihatPaketLain=='Y'||lihatPaketLain=='y')){
                    }else if((lihatPaketLain=='N'||lihatPaketLain=='n')){
                    }else{
                        cout << "\nMasukkan Anda salah"<<endl;
                    }
                }while(lihatPaketLain!='Y'&&lihatPaketLain!='y'&&lihatPaketLain!='N'&&lihatPaketLain!='n');
            break;

            case '3':
                cout << "Class 3 menyediakan :"<< endl;
                cout << "1. Sewa "<<paketTiga[0]<<endl;
                cout << "2. Sewa "<<paketTiga[1]<<endl;
                cout << "3. Catering "<<paketTiga[2]<<endl;
                cout << "4. Snack "<<paketTiga[3]<<endl;
                cout << "5. MUA untuk "<<paketTiga[4]<<endl;
                cout << "6. Sound system "<<endl;
                cout << "7. Dekorasi "<<paketTiga[5]<<endl;
                cout << "\n";


                do{
                    cout << "Apakah anda ingin melihat paket lain(Y/N): ";
                    cin >> lihatPaketLain;
                    if((lihatPaketLain=='Y'||lihatPaketLain=='y')){
                    }else if((lihatPaketLain=='N'||lihatPaketLain=='n')){
                    }else{
                        cout << "\nMasukkan Anda salah"<<endl;
                    }
                }while(lihatPaketLain!='Y'&&lihatPaketLain!='y'&&lihatPaketLain!='N'&&lihatPaketLain!='n');
            break;

            default:
                cout << "\nPaket tidak tersedia, silahkan pilih yang tersedia"<<endl;
        }

    } while(lihatPaketLain=='Y'||lihatPaketLain=='y');

    cout << "\n";
    cout << "==============================================="<<endl;
    cout << "\nApakah anda ingin memilih paket ini?(Y/N):";
    cin >> pilihPaket;
    while(pilihPaket!='Y'&&pilihPaket!='y'&&pilihPaket!='N'&&pilihPaket!='n'){
        cout << "\nMasukkan Anda salah"<<endl;
        cout << "\n";
        cout << "==============================================="<<endl;
        cout << "\nApakah anda ingin memilih paket ini?(Y/N):";
        cin >> pilihPaket;
    }
        if((pilihPaket=='Y'||pilihPaket=='y')){
            cout << "\nAnda telah memilih paket "<< paket <<endl;
        }else if((pilihPaket=='N'||pilihPaket=='n')){
            	cout << "\n";
                cout << "Pilih paket"<<endl;
                cout << "1. Class 1 Rp.100 jt"<<endl;
                cout << "2. Class 2 Rp. 75 jt"<<endl;
                cout << "3. Class 3 Rp. 50 jt"<<endl;
                cout <<"\n";
                cout << "Silahkan pilih paket: ";
                cin >> paket;
                while(paket!='1'&&paket!='2'&&paket!='3'){
                    cout << "\nPaket anda tidak tersedia, pilih yang tersedia"<<endl;
                    cout << "\n";
                    cout << "Pilih paket"<<endl;
                    cout << "1. Class 1 Rp.100 jt"<<endl;
                    cout << "2. Class 2 Rp. 75 jt"<<endl;
                    cout << "3. Class 3 Rp. 50 jt"<<endl;
                    cout <<"\n";
                    cout << "Silahkan pilih paket: ";
                    cin >> paket;
                    cout << "\nAnda telah memilih paket "<<paket <<endl;
                }
        }else{
            	cout << "\nMasukkan anda salah"<<endl;
    	}
                    if (paket=='1'){
                        totalBiaya=PAKETSATU;
                        cout << "\n";
                        cout << "==============================================="<<endl;
                        cout << "Menu catering yang tersedia"<<endl;
                        cout << "1. Nasi putih" << endl;
                        cout << "2. Nasi goreng (pilihan menu)" << endl;
                        cout << "3. Soup (pilihan menu)" << endl;
                        cout << "4. Ayam (pilihan menu)" << endl;
                        cout << "5. Daging (pilihan menu)" << endl;
                        cout << "6. Sayuran (pilihan menu)" << endl;
                        cout << "7. Salad" << endl;
                        cout << "8. Kerupuk udang" << endl;
                        cout << "9. Lemon tea" << endl;
                        cout << "10. Air mineral" << endl;
                        
                        cout << "\n";
		                cout << "==============================================="<<endl;
		                cout << "Pilih menu nasi goreng"<<endl;
		                cout << "1. Nasi goreng thai" << endl;
		                cout << "2. Nasi goreng ikan asin" << endl;
		                cout << "3. Nasi goreng seafood" << endl;
		                cout << "4. Nasi goreng ijo" << endl;
		                cout << "5. Nasi kebuli" << endl;
		
		                cout << "\nPilih menu nasi goreng: ";
		                cin >> menuNasGor;
		                switch (menuNasGor){
		                    case '1':
		                        menuNasiGoreng="Nasi goreng thai";
		                        cout << "\nAnda memilih "<<menuNasiGoreng;
		                break;
		                    case '2':
		                        menuNasiGoreng="Nasi goreng ikan asin";
		                        cout << "\nAnda memilih "<<menuNasiGoreng;
		                break;
		                    case '3':
		                        menuNasiGoreng="Nasi goreng seafood";
		                        cout << "\nAnda memilih "<<menuNasiGoreng;
		                break;
		                    case '4':
		                        menuNasiGoreng="Nasi goreng ijo";
		                        cout << "\nAnda memilih "<<menuNasiGoreng;
		                break;
		                    case '5':
		                        menuNasiGoreng="Nasi kebuli";
		                        cout << "\nAnda memilih "<<menuNasiGoreng;
		                break;
		
		                }
		
		                cout << "\n";
		                cout << "==============================================="<<endl;
		                cout << "Pilih menu soup"<<endl;
		                cout << "1. Soup buntut" << endl;
		                cout << "2. Soup iga sapi" << endl;
		                cout << "3. Soup iga asam pedas" << endl;
		                cout << "4. Rawon iga sapi" << endl;
		                cout << "5. Tomyum seafood" << endl;
		
		                cout << "\nPilih menu soup: ";
		                cin >> menuSup;
		                switch (menuSup){
		                    case '1':
		                        menuSoup="Soup buntut";
		                        cout << "\nAnda memilih "<<menuSoup;
		                break;
		                    case '2':
		                        menuSoup="Soup iga sapi";
		                        cout << "\nAnda memilih "<<menuSoup;
		                break;
		                    case '3':
		                        menuSoup="Soup iga asam pedas";
		                        cout << "\nAnda memilih "<<menuSoup;
		                break;
		                    case '4':
		                        menuSoup="Rawon iga sapi";
		                        cout << "\nAnda memilih "<<menuSoup;
		                break;
		                    case '5':
		                        menuSoup="Tomyum seafood";
		                        cout << "\nAnda memilih "<<menuSoup;
		                break;
		
		                }
		                
		                cout << "\n";
		                cout << "==============================================="<<endl;
		                cout << "Pilih menu ayam"<<endl;
		                cout << "1. Ayam lapis keju" << endl;
		                cout << "2. Roast chicken with barbeque sauce" << endl;
		                cout << "3. Chicken black pepper" << endl;
		                cout << "4. Ayam kremes" << endl;
		                cout << "5. Ayam pop" << endl;
		
		                cout << "\nPilih menu ayam: ";
		                cin >> menuChicken;
		                switch (menuChicken){
		                    case '1':
		                        menuAyam="Ayam lapis keju";
		                        cout << "\nAnda memilih "<<menuAyam;
		                break;
		                    case '2':
		                        menuAyam="Roast chicken with barbeque sauce";
		                        cout << "\nAnda memilih "<<menuAyam;
		                break;
		                    case '3':
		                        menuAyam="Chicken black pepper";
		                        cout << "\nAnda memilih "<<menuAyam;
		                break;
		                    case '4':
		                        menuAyam="Ayam kremes";
		                        cout << "\nAnda memilih "<<menuAyam;
		                break;
		                    case '5':
		                        menuAyam="Ayam pop";
		                        cout << "\nAnda memilih "<<menuAyam;
		                break;
		
		                }
		
		                cout << "\n";
		                cout << "==============================================="<<endl;
		                cout << "Pilih menu daging"<<endl;
		                cout << "1. Beef terriyaki" << endl;
		                cout << "2. Beef steak" << endl;
		                cout << "3. Beef szechuan" << endl;
		                cout << "4. Beef mangolian barbeque" << endl;
		                cout << "5. Beef black pepper" << endl;
		
		
		                cout << "\nPilih menu daging: ";
		                cin >> menuBeef;
		                switch (menuBeef){
		                    case '1':
		                        menuDaging="Beef terriyaki";
		                        cout << "\nAnda memilih "<<menuDaging;
		                break;
		                    case '2':
		                        menuDaging="Beef steak";
		                        cout << "\nAnda memilih "<<menuDaging;
		                break;
		                    case '3':
		                        menuDaging="Beef szechuan";
		                        cout << "\nAnda memilih "<<menuDaging;
		                break;
		                    case '4':
		                        menuDaging="Beef mangolian barbeque";
		                        cout << "\nAnda memilih "<<menuDaging;
		                break;
		                    case '5':
		                        menuDaging="Beef black pepper";
		                        cout << "\nAnda memilih "<<menuDaging;
		                break;
		
		                }
		                
		                cout << "\n";
		                cout << "==============================================="<<endl;
		                cout << "Pilih menu sayuran"<<endl;
		                cout << "1. Sop tahu brokoli cah udang" << endl;
		                cout << "2. Soun seafood spesial" << endl;
		                cout << "3. Capcay goreng spesial" << endl;
		                cout << "4. Cah brokoli sapi saus tiram" << endl;
		                cout << "5. Sambal goreng kentang ati" << endl;
		
		                cout << "\nPilih menu sayur: ";
		                cin >> menuVegetables;
		                switch (menuVegetables){
		                    case '1':
		                        menuSayuran="Sop tahu brokoli cah udang";
		                        cout << "\nAnda memilih "<<menuSayuran;
		                break;
		                    case '2':
		                        menuSayuran="Soun seafood spesial";
		                        cout << "\nAnda memilih "<<menuSayuran;
		                break;
		                    case '3':
		                        menuSayuran="Capcay goreng spesial";
		                        cout << "\nAnda memilih "<<menuSayuran;
		                break;
		                    case '4':
		                        menuSayuran="Cah brokoli saus tiram";
		                        cout << "\nAnda memilih "<<menuSayuran;
		                break;
		                    case '5':
		                        menuSayuran="Sambal goreng kentang ati";
		                        cout << "\nAnda memilih "<<menuSayuran;
		                break;
		
		                }
		
		                cout << "==============================================="<<endl;
		                cout << "Pilihan snacks yang tersedia"<<endl;
		                cout << "1. Macaroon" << endl;
		                cout << "2. Cheesecake" << endl;
		                cout << "3. Ice cone" << endl;
		                cout << "4. Marshmellow" << endl;
		                cout << "5. Zupa soup" << endl;
		                cout << "6. Fortune cookies" << endl;
		                cout << "7. Pempek" << endl;
		                cout << "8. Tekwan" << endl;
		                
		                cout << "==============================================="<<endl;
		                cout << "Pilihan dekorasi diamond class"<<endl;
		                cout << "1. Tema adat (lihat katalog di tiny.cc/RitzyTemaAdat)" << endl;
		                cout << "2. Tema rustic (lihat katalog di tiny.cc/RitzyTemaRustic)" << endl;
		                cout << "3. Tema glamour (lihat katalog di tiny.cc/RitzyTemaGlamour)" << endl;
		                cout << "4. Tema klasik (lihat katalog di tiny.cc/RitzyTemaKlasik)" << endl;
		                cout << "5. Tema minimalis (lihat katalog di tiny.cc/RitzyTemaMinimalis)" << endl;
		
		                cout << "\nPilih tema yang diinginkan: ";
		                cin >> pilihanTema;
		                switch (pilihanTema){
		                    case '1':
		                        tema="Tema adat";
		                        cout << "\nAnda memilih "<<tema;
		                break;
		                    case '2':
		                        tema="Tema rustic";
		                        cout << "\nAnda memilih "<<tema;
		                break;
		                    case '3':
		                        tema="Tema glamour";
		                        cout << "\nAnda memilih "<<tema;
		                break;
		                    case '4':
		                        tema="Tema klasik";
		                        cout << "\nAnda memilih "<<tema;
		                break;
		                    case '5':
		                        tema="Tema minimalis";
		                        cout << "\nAnda memilih "<<tema;
		                break;
		            }
                    }else if (paket=='2'){
                        totalBiaya=PAKETDUA;
                        cout << "\n";
                        cout << "==============================================="<<endl;
                        cout << "Menu catering yang tersedia"<<endl;
                        cout << "1. Nasi putih" << endl;
                        cout << "2. Nasi goreng (pilihan menu)" << endl;
                        cout << "3. Soup (pilihan menu)" << endl;
                        cout << "4. Ayam (pilihan menu)" << endl;
                        cout << "5. Daging (pilihan menu)" << endl;
                        cout << "6. Sayuran (pilihan menu)" << endl;
                        cout << "7. Salad" << endl;
                        cout << "8. Kerupuk udang" << endl;
                        cout << "9. Lemon tea" << endl;
                        cout << "10. Air mineral" << endl;
                        
                        cout << "\n";
		                cout << "==============================================="<<endl;
		                cout << "Pilih menu nasi goreng"<<endl;
		                cout << "1. Nasi goreng thai" << endl;
		                cout << "2. Nasi goreng ikan asin" << endl;
		                cout << "3. Nasi goreng seafood" << endl;
		                cout << "4. Nasi goreng ijo" << endl;
		
		                cout << "\nPilih menu nasi goreng: ";
		                cin >> menuNasGor;
		                switch (menuNasGor){
		                    case '1':
		                        menuNasiGoreng="Nasi goreng thai";
		                        cout << "\nAnda memilih "<<menuNasiGoreng;
		                break;
		                    case '2':
		                        menuNasiGoreng="Nasi goreng ikan asin";
		                        cout << "\nAnda memilih "<<menuNasiGoreng;
		                break;
		                    case '3':
		                        menuNasiGoreng="Nasi goreng seafood";
		                        cout << "\nAnda memilih "<<menuNasiGoreng;
		                break;
		                    case '4':
		                        menuNasiGoreng="Nasi goreng ijo";
		                        cout << "\nAnda memilih "<<menuNasiGoreng;
		                break;
		
		                }
		
		                cout << "\n";
		                cout << "==============================================="<<endl;
		                cout << "Pilih menu soup"<<endl;
		                cout << "1. Soup buntut" << endl;
		                cout << "2. Soup iga sapi" << endl;
		                cout << "3. Soup iga asam pedas" << endl;
		                cout << "4. Rawon iga sapi" << endl;
		
		                cout << "\nPilih menu soup: ";
		                cin >> menuSup;
		                switch (menuSup){
		                    case '1':
		                        menuSoup="Soup buntut";
		                        cout << "\nAnda memilih "<<menuSoup;
		                break;
		                    case '2':
		                        menuSoup="Soup iga sapi";
		                        cout << "\nAnda memilih "<<menuSoup;
		                break;
		                    case '3':
		                        menuSoup="Soup iga asam pedas";
		                        cout << "\nAnda memilih "<<menuSoup;
		                break;
		                    case '4':
		                        menuSoup="Rawon iga sapi";
		                        cout << "\nAnda memilih "<<menuSoup;
		                break;
		
		                }
		                
		                cout << "\n";
		                cout << "==============================================="<<endl;
		                cout << "Pilih menu ayam"<<endl;
		                cout << "1. Ayam lapis keju" << endl;
		                cout << "2. Chicken black pepper" << endl;
		                cout << "3. Ayam kremes" << endl;
		                cout << "4. Ayam pop" << endl;
		
		                cout << "\nPilih menu ayam: ";
		                cin >> menuChicken;
		                switch (menuChicken){
		                    case '1':
		                        menuAyam="Ayam lapis keju";
		                        cout << "\nAnda memilih "<<menuAyam;
		                break;
		                    case '2':
		                        menuAyam="Chicken black pepper";
		                        cout << "\nAnda memilih "<<menuAyam;
		                break;
		                    case '3':
		                        menuAyam="Ayam kremes";
		                        cout << "\nAnda memilih "<<menuAyam;
		                break;
		                    case '4':
		                        menuAyam="Ayam pop";
		                        cout << "\nAnda memilih "<<menuAyam;
		                break;
		
		                }
		
		                cout << "\n";
		                cout << "==============================================="<<endl;
		                cout << "Pilih menu daging"<<endl;
		                cout << "1. Beef terriyaki" << endl;
		                cout << "2. Beef steak" << endl;
		                cout << "3. Beef szechuan" << endl;
		                cout << "4. Beef black pepper" << endl;
		
		
		                cout << "\nPilih menu daging: ";
		                cin >> menuBeef;
		                switch (menuBeef){
		                    case '1':
		                        menuDaging="Beef terriyaki";
		                        cout << "\nAnda memilih "<<menuDaging;
		                break;
		                    case '2':
		                        menuDaging="Beef steak";
		                        cout << "\nAnda memilih "<<menuDaging;
		                break;
		                    case '3':
		                        menuDaging="Beef szechuan";
		                        cout << "\nAnda memilih "<<menuDaging;
		                break;
		                    case '4':
		                        menuDaging="Beef black pepper";
		                        cout << "\nAnda memilih "<<menuDaging;
		                break;
		
		                }
		                
		                cout << "\n";
		                cout << "==============================================="<<endl;
		                cout << "Pilih menu sayuran"<<endl;
		                cout << "1. Sop tahu brokoli cah udang" << endl;
		                cout << "2. Soun seafood spesial" << endl;
		                cout << "3. Capcay goreng spesial" << endl;
		                cout << "4. Sambal goreng kentang ati" << endl;
		
		                cout << "\nPilih menu sayur: ";
		                cin >> menuVegetables;
		                switch (menuVegetables){
		                    case '1':
		                        menuSayuran="Sop tahu brokoli cah udang";
		                        cout << "\nAnda memilih "<<menuSayuran;
		                break;
		                    case '2':
		                        menuSayuran="Soun seafood spesial";
		                        cout << "\nAnda memilih "<<menuSayuran;
		                break;
		                    case '3':
		                        menuSayuran="Capcay goreng spesial";
		                        cout << "\nAnda memilih "<<menuSayuran;
		                break;
		                    case '4':
		                        menuSayuran="Sambal goreng kentang ati";
		                        cout << "\nAnda memilih "<<menuSayuran;
		                break;
		
		                }
		
		                cout << "==============================================="<<endl;
		                cout << "Pilihan snacks yang tersedia"<<endl;
		                cout << "1. Macaroon" << endl;
		                cout << "2. Cheesecake" << endl;
		                cout << "3. Ice cone" << endl;
		                cout << "4. Marshmellow" << endl;
		                cout << "5. Fortune cookies" << endl;
		                cout << "6. Pempek" << endl;
		                cout << "7. Tekwan" << endl;
		                
		                cout << "==============================================="<<endl;
		                cout << "Pilihan dekorasi gold class"<<endl;
		                cout << "1. Tema adat (lihat katalog di tiny.cc/RitzyTemaAdat)" << endl;
		                cout << "2. Tema rustic (lihat katalog di tiny.cc/RitzyTemaRustic)" << endl;
		                cout << "3. Tema klasik (lihat katalog di tiny.cc/RitzyTemaKlasik)" << endl;
		                cout << "4. Tema minimalis (lihat katalog di tiny.cc/RitzyTemaMinimalis)" << endl;
		
		                cout << "\nPilih tema yang diinginkan: ";
		                cin >> pilihanTema;
		                switch (pilihanTema){
		                    case '1':
		                        tema="Tema adat";
		                        cout << "\nAnda memilih "<<tema;
		                break;
		                    case '2':
		                        tema="Tema rustic";
		                        cout << "\nAnda memilih "<<tema;
		                break;
		                    case '3':
		                        tema="Tema klasik";
		                        cout << "\nAnda memilih "<<tema;
		                break;
		                    case '4':
		                        tema="Tema minimalis";
		                        cout << "\nAnda memilih "<<tema;
		                break;
		
		            } 
                    }else if (paket=='3'){
                        totalBiaya=PAKETTIGA;
                        cout << "\n";
                        cout << "==============================================="<<endl;
                        cout << "Menu catering yang tersedia"<<endl;
                        cout << "1. Nasi putih" << endl;
                        cout << "2. Nasi goreng (pilihan menu)" << endl;
                        cout << "3. Soup (pilihan menu)" << endl;
                        cout << "4. Ayam (pilihan menu)" << endl;
                        cout << "5. Daging (pilihan menu)" << endl;
                        cout << "6. Sayuran (pilihan menu)" << endl;
                        cout << "7. Salad" << endl;
                        cout << "8. Kerupuk udang" << endl;
                        cout << "9. Lemon tea" << endl;
                        cout << "10. Air mineral" << endl;
                        
                        cout << "\n";
		                cout << "==============================================="<<endl;
		                cout << "Pilih menu nasi goreng"<<endl;
		                cout << "1. Nasi goreng thai" << endl;
		                cout << "2. Nasi goreng ikan asin" << endl;
		                cout << "3. Nasi goreng seafood" << endl;
		
		                cout << "\nPilih menu nasi goreng: ";
		                cin >> menuNasGor;
		                switch (menuNasGor){
		                    case '1':
		                        menuNasiGoreng="Nasi goreng thai";
		                        cout << "\nAnda memilih "<<menuNasiGoreng;
		                break;
		                    case '2':
		                        menuNasiGoreng="Nasi goreng ikan asin";
		                        cout << "\nAnda memilih "<<menuNasiGoreng;
		                break;
		                    case '3':
		                        menuNasiGoreng="Nasi goreng seafood";
		                        cout << "\nAnda memilih "<<menuNasiGoreng;
		                break;
		
		                }
		
		                cout << "\n";
		                cout << "==============================================="<<endl;
		                cout << "Pilih menu soup"<<endl;
		                cout << "1. Soup buntut" << endl;
		                cout << "2. Soup iga sapi" << endl;
		                cout << "3. Soup iga asam pedas" << endl;
		
		                cout << "\nPilih menu soup: ";
		                cin >> menuSup;
		                switch (menuSup){
		                    case '1':
		                        menuSoup="Soup buntut";
		                        cout << "\nAnda memilih "<<menuSoup;
		                break;
		                    case '2':
		                        menuSoup="Soup iga sapi";
		                        cout << "\nAnda memilih "<<menuSoup;
		                break;
		                    case '3':
		                        menuSoup="Soup iga asam pedas";
		                        cout << "\nAnda memilih "<<menuSoup;
		                break;
		
		
		                }
		                
		                cout << "\n";
		                cout << "==============================================="<<endl;
		                cout << "Pilih menu ayam"<<endl;
		                cout << "1. Ayam lapis keju" << endl;
		                cout << "2. Ayam kremes" << endl;
		                cout << "3. Ayam pop" << endl;
		
		                cout << "\nPilih menu ayam: ";
		                cin >> menuChicken;
		                switch (menuChicken){
		                    case '1':
		                        menuAyam="Ayam lapis keju";
		                        cout << "\nAnda memilih "<<menuAyam;
		                break;
		                    case '2':
		                        menuAyam="Ayam kremes";
		                        cout << "\nAnda memilih "<<menuAyam;
		                break;
		                    case '3':
		                        menuAyam="Ayam pop";
		                        cout << "\nAnda memilih "<<menuAyam;
		                break;
		
		                }
		
		                cout << "\n";
		                cout << "==============================================="<<endl;
		                cout << "Pilih menu daging"<<endl;
		                cout << "1. Beef terriyaki" << endl;
		                cout << "2. Beef steak" << endl;
		                cout << "3. Beef szechuan" << endl;
		
		                cout << "\nPilih menu daging: ";
		                cin >> menuBeef;
		                switch (menuBeef){
		                    case '1':
		                        menuDaging="Beef terriyaki";
		                        cout << "\nAnda memilih "<<menuDaging;
		                break;
		                    case '2':
		                        menuDaging="Beef steak";
		                        cout << "\nAnda memilih "<<menuDaging;
		                break;
		                    case '3':
		                        menuDaging="Beef szechuan";
		                        cout << "\nAnda memilih "<<menuDaging;
		                break;
		
		                }
		                
		                cout << "\n";
		                cout << "==============================================="<<endl;
		                cout << "Pilih menu sayuran"<<endl;
		                cout << "1. Soun seafood spesial" << endl;
		                cout << "2. Capcay goreng spesial" << endl;
		                cout << "3. Sambal goreng kentang ati" << endl;
		
		                cout << "\nPilih menu sayur: ";
		                cin >> menuVegetables;
		                switch (menuVegetables){
		                    case '1':
		                        menuSayuran="Soun seafood spesial";
		                        cout << "\nAnda memilih "<<menuSayuran;
		                break;
		                    case '2':
		                        menuSayuran="Capcay goreng spesial";
		                        cout << "\nAnda memilih "<<menuSayuran;
		                break;
		                    case '3':
		                        menuSayuran="Sambal goreng kentang ati";
		                        cout << "\nAnda memilih "<<menuSayuran;
		                break;
		
		                }
		
		                cout << "==============================================="<<endl;
		                cout << "Pilihan snacks yang tersedia"<<endl;
		                cout << "1. Macaroon" << endl;
		                cout << "2. Cheesecake" << endl;
		                cout << "3. Ice cone" << endl;
		                cout << "4. Marshmellow" << endl;
		                cout << "5. Pempek" << endl;
		                cout << "6. Tekwan" << endl;
		                
		                cout << "==============================================="<<endl;
		                cout << "Pilihan dekorasi silver class"<<endl;
		                cout << "1. Tema adat (lihat katalog di tiny.cc/RitzyTemaAdat)" << endl;
		                cout << "2. Tema rustic (lihat katalog di tiny.cc/RitzyTemaRustic)" << endl;
		                cout << "3. Tema minimalis (lihat katalog di tiny.cc/RitzyTemaMinimalis)" << endl;
		
		                cout << "\nPilih tema yang diinginkan: ";
		                cin >> pilihanTema;
		                switch (pilihanTema){
		                    case '1':
		                        tema="Tema adat";
		                        cout << "\nAnda memilih "<<tema;
		                break;
		                    case '2':
		                        tema="Tema rustic";
		                        cout << "\nAnda memilih "<<tema;
		                break;
		                    case '3':
		                        tema="Tema minimalis";
		                        cout << "\nAnda memilih "<<tema;
		                break;
		
		            	}
		        	}	

    cout << "\nAnda telah memilih paket "<< paket <<endl;
	cout << "\n";
    cout << "==============================================="<<endl;
    cout << "Kami di sini juga menyediakan add-on fasility/fasilitas tambahan untuk anda"<<endl;
    cout << "Fasilitas tersebut antara lain;"<<endl;
    cout << "\n";
    cout << "1. Penambahan hotel room Rp3jt/kamar"<<endl;
    cout << "2. Penambahan snack Rp40.000/pax"<<endl;
    cout << "3. Penambahan catering Rp200.000/pax"<<endl;
    cout << "4. MUA (make up artist) Rp500.000/orang"<<endl;

    const int HOTELROOM=3000000;
    const int SNACKS=40000;
    const int CATERING=200000; 
    const int MUA=500000;
    char tambahAddOn,tambahAddOnLain, pilihAddOn;
    int biaya=0, tambahBiaya=0, kamar=0, jumlahSnacks=0, jumlahCatering=0, jumlahMua=0;

    cout <<"\n";
    cout << "Apakah anda ingin menambah add-on facility(Y/N): ";
    cin >> tambahAddOn;
    while(tambahAddOn!='Y'&&tambahAddOn!='y'&&tambahAddOn!='N'&&tambahAddOn!='n'){
        cout << "\nMasukkan Anda salah"<<endl;
        cout <<"\n";
        cout << "Apakah anda ingin menambah add-on facility(Y/N): ";
        cin >> tambahAddOn;
    }
    if((tambahAddOn=='Y'||tambahAddOn=='y')){
        do{
            cout <<"\n";
            cout << "Pilih add-on yang ingin anda tambah : ";
            cin >> pilihAddOn;
            while(pilihAddOn!='1'&&pilihAddOn!='2'&&pilihAddOn!='3'&&pilihAddOn!='4'){
                cout << "\nAdd-On tidak tersedia, silahkan pilih yang tersedia";
                cout <<"\n";
                cout << "Pilih add-on yang ingin anda tambah : ";
                cin >> pilihAddOn;
            }
            switch(pilihAddOn){
                case '1':
                    cout << "Anda ingin menambah berapa kamar: ";
                    cin >> kamar;
                    biaya=(HOTELROOM*kamar);
                    tambahBiaya+=biaya;
                break;

                case '2':
                    cout << "Anda ingin menambah berapa pax snack :";
                    cin >> jumlahSnacks;
                    biaya=(SNACKS* jumlahSnacks);
                    tambahBiaya+=biaya;
                break;

                case '3':
                    cout << "Anda ingin menambah berapa pax catering :";
                    cin >> jumlahCatering;
                    biaya=(CATERING*jumlahCatering);
                    tambahBiaya+=biaya;
                break;

                case '4':
                    cout << "Anda ingin menambah MUA (make up artist) untuk berapa orang :";
                    cin >> jumlahMua;
                    biaya=(MUA*jumlahMua);
                    tambahBiaya+=biaya;
                break;

                default:
                    cout << "\nMasukkan Anda salah";

            }
            cout << "\n";
            cout << "Ingin menambah add-on yang lain?(Y/N):";
            cin >> tambahAddOnLain;
            if((tambahAddOnLain=='Y'||tambahAddOnLain=='y')){
            }else if((tambahAddOnLain=='N'||tambahAddOnLain=='n')){
            }
        }while((tambahAddOnLain=='Y'||tambahAddOnLain=='y'));
    }else if((tambahAddOn=='N'||tambahAddOn=='n')){
    }

    int ppn=(totalBiaya+tambahBiaya)*(0.1);

    string waktu, namaAnda, namaPasangan;

    cout << "\n";
    cin.ignore(1, '\n');
    cout << "Masukkan nama pasangan Anda\t\t: ";
    getline (cin, namaPasangan);
    cout << "Masukkan tanggal acara pernikahan\t: ";
    getline (cin, waktu);
    
    cout << "\n==============================================="<<endl;
    cout << "Anda catering memilih paket " << paket;
    cout << "\n";
    cout << "\nMenu yang anda pilih adalah"<<endl;
    cout << "1. "<< menuNasiGoreng<<endl;
    cout << "2. "<< menuSoup<<endl;
    cout << "3. "<< menuAyam<<endl;
    cout << "4. "<< menuDaging<<endl;
    cout << "5. "<< menuSayuran<<endl;
    cout << "\n";
    cout << "Anda memilih tema: "<<tema;
    
    cout << "\n==============================================="<<endl;
    cout << "THE WEDDING OF"<<endl;
    cout<<namaLengkap<<endl;
    cout<<"dan"<<endl;
    cout<<namaPasangan<<endl;
    cout << "Waktu pernikahan: "<<waktu<<endl;


    cout << "======================================================================"<<endl;
    cout << "                   INVOICE                     "<<endl;
    cout << "======================================================================"<<endl;
    cout << "Biaya paket                : Rp "<<totalBiaya<<endl;
    cout << "Biaya tambahan Add-On      : Rp "<<tambahBiaya<<endl;
    cout << "PPN 10%                    : Rp "<<ppn<<endl;
    cout << "Total yang harus dibayar   : Rp "<<totalBiaya+tambahBiaya+ppn<<endl;
    cout << "======================================================================"<<endl;
    cout << "Silakan lakukan pembayaran melalui link tiny.cc/RitzyWeddingPayment"<<endl;
    cout << "                          ~ THANK YOU ~                            "<<endl;



}
