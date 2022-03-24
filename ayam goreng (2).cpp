#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream print;
    print.open("Struk.txt");
    
	int totalHarga,jumlahGrngBkr,hitung,answer;
	int jumlahPesananGrng,totalHrgGrng,ayamGoreng=17000;
	int jumlahPesananBakar,totalHrgBkr,ayamBakar=21000;
	float diskon=10,potongan;
	string pesananAyamGoreng="ayam goreng";
	string pesananAyamBakar="ayam bakar";

	cout<<"pesanan\t\t: "<<pesananAyamGoreng<<endl;
	cout<<"harga\t\t: "<<ayamGoreng<<endl;
	cout<<"jumlah pesanan\t: x";
	cin>>jumlahPesananGrng;
	totalHrgGrng=ayamGoreng*jumlahPesananGrng;
	cout<<"jumlah harga\t: "<<totalHrgGrng<<endl;
	cout<<"--------------------------------"<<endl;
	cout<<"pesanan\t\t: "<<pesananAyamBakar<<endl;
	cout<<"harga\t\t: "<<ayamBakar<<endl;
	cout<<"jumlah pesanan\t: x";
	cin>>jumlahPesananBakar;
	totalHrgBkr=ayamBakar*jumlahPesananBakar;
	cout<<"jumlah harga\t: "<<totalHrgBkr<<endl;
	cout<<"======================================================"<<endl;
	cout<<"                      struk pembelian                 "<<endl;
	cout<<"======================================================"<<endl;
	cout<<"| "<<" menu pesanan "<<"| "<<" Harga "<<" | "<<" jumlah pesanan "<<"| "<<" jumlah Harga "<<"|"<<endl;
	
	cout<<"|  "<<pesananAyamGoreng<<"  |  "<<ayamGoreng<<"  |        "<<jumlahPesananGrng<<"        |      "<<totalHrgGrng<<"    |"<<endl;
	cout<<"|  "<<pesananAyamBakar<<"   |  "<<ayamBakar<<"  |        "<<jumlahPesananBakar<<"        |      "<<totalHrgBkr<<"    |"<<endl;
	jumlahGrngBkr=totalHrgGrng+totalHrgBkr;
	cout<<"--------------------------------------------------------------"<<endl;
	cout<<"|   "<<"jumlah"<<"\t\t\t\t    |      "<<jumlahGrngBkr<<"     |"<<endl;
	cout<<"--------------------------------------------------------------"<<endl;
	
	//untuk mencetak struk
	print<<"=============================================================="<<endl;
	print<<"                      struk pembelian                         "<<endl;
	print<<"=============================================================="<<endl;
	print<<"| "<<" menu pesanan "<<"| "<<" Harga "<<" | "<<" jumlah pesanan "<<"| "<<" jumlah Harga "<<"|"<<endl;
	print<<"|  "<<pesananAyamGoreng<<"  |  "<<ayamGoreng<<"  |        "<<jumlahPesananGrng<<"         |      "<<totalHrgGrng<<"    |"<<endl;
	print<<"|  "<<pesananAyamBakar<<"   |  "<<ayamBakar<<"  |        "<<jumlahPesananBakar<<"         |      "<<totalHrgBkr<<"    |"<<endl;
	print<<"--------------------------------------------------------------"<<endl;
	print<<"|   "<<"jumlah"<<"\t\t\t\t    |      "<<jumlahGrngBkr<<"     |"<<endl;
	print<<"--------------------------------------------------------------"<<endl;
	
    if (jumlahGrngBkr>45000)
	{	
		cout<<"|anda mendapat potongan 10% karna pembelian anda >Rp45.000  |"<<endl;
		cout<<"------------------------------------------------------------"<<endl;
		potongan = (diskon/100)*jumlahGrngBkr;
		totalHarga = jumlahGrngBkr-potongan;
		cout<<"|  TOTAL HARGA "<<"\t\t\t\t    |      "<<totalHarga<<"    |"<<endl;
		cout<<" ============================================================"<<endl;
		cout<<"|                   T E R I M A  K A S I H                   |"<<endl;
		cout<<" ============================================================"<<endl;
		
		//untuk mencetak struk
		print<<"|anda mendapat potongan 10% karna pembelian anda >Rp45.000  |"<<endl;
		print<<"------------------------------------------------------------"<<endl;
		print<<"|  TOTAL HARGA "<<"\t\t\t\t    |      "<<totalHarga<<"    |"<<endl;
		print<<" ============================================================"<<endl;
		print<<"|                   T E R I M A  K A S I H                   |"<<endl;
		print<<" ============================================================"<<endl;
	}
	else
	{
		cout<<"|anda tidak dapat potongan karna pembelian <Rp 45.000        |"<<endl;
		cout<<"--------------------------------------------------------------"<<endl;
		cout<<"|  TOTAL HARGA "<<"\t\t\t\t    |      "<<jumlahGrngBkr<<"     |"<<endl;
		cout<<" ============================================================"<<endl;
		cout<<"|                   T E R I M A  K A S I H                   |"<<endl;
		cout<<" ============================================================"<<endl;
		
		print<<"|anda tidak dapat potongan karna pembelian <Rp 45.000        |"<<endl;
		print<<"--------------------------------------------------------------"<<endl;
		print<<"|  TOTAL HARGA "<<"\t\t\t\t    |      "<<jumlahGrngBkr<<"     |"<<endl;
		print<<" ============================================================"<<endl;
		print<<"|                   T E R I M A  K A S I H                   |"<<endl;
		print<<" ============================================================"<<endl;
	}
	
	return 0;
}
