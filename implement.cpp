#include "tumpukan.h"

main(){
	Tumpukan<string> buku;

	buku.tumpuk("Modul");
	buku.tumpuk("Paket");
	buku.tumpuk("Kitab");
	buku.tumpuk("Novel");
	buku.tumpuk("Tugas");

	int jml = buku.jumlah();
	for(int i=1; i <= jml; i++)
		cout << buku.ambil() << endl;

	return 0;
}
