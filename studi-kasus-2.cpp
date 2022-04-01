#include<iostream>
using namespace std;
class Struk{
	
	public:
		void menu(){
			cout<<"=============================================\n";
			cout<<"\tRUMAH MAKAN  PAK ORYA\n";
			cout<<"=============================================\n";
			cout<<"  Menu.\n";
			cout<<" 1.Ayam geprek\tRp.21000\n";
			cout<<" 2.Ayam goreng\tRp.17000\n";
			cout<<" 3.Udang goreng\tRp.19000\n";
			cout<<" 4.Cumi goreng\tRp.20000\n";
			cout<<" 5.Ayam bakar\tRp.25000\n";
			cout<<"=============================================\n";
		}
		
		void pilih_menu(){
			ulang:
			cout<<"masukkan pesanan anda : ";	cin>>pilihan;
			switch(pilihan){
				case 1:{
					cout<<"masukkan kuantitas : "; cin>>ayam_ge;
					break;
				}
				case 2:{
					cout<<"masukkan kuantitas : "; cin>>ayam_gr;
					break;
				}
				case 3:{
					cout<<"masukkan kuantitas : "; cin>>udang;
					break;
				}
				case 4:{
					cout<<"masukkan kuantitas : "; cin>>cumi;
					break;
				}
				case 5:{
					cout<<"masukkan kuantitas : "; cin>>ayam_bk;
					break;
				}
			}
			cout<<"apakah ada tambahan ? (y/n)"; cin>>tambahan;
			if(tambahan=='y'){
				goto ulang;
			}
			cout<<"masukan jarak rumah anda dengan rumah makan kami(dalam km): ";
			cin>>jarak;
		}
		
		void harga_makanan(){
			total=(ayam_ge*21000)+(ayam_gr*17000)+(udang*19000)+(cumi*20000)+(ayam_bk*25000);
		}
		
		void struk_top(){
			system("cls");
			harga_makanan();
			cout<<"=============================================\n";
			cout<<"\t TOTAL BELANJA ANDA"<<endl; 
			if(ayam_ge>0){
				cout<<"Ayam Geprek x "<< ayam_ge <<" = "<<ayam_ge*21000<<endl;
			}
			if(ayam_gr>0){
				cout<<"Ayam Goreng x "<< ayam_gr<<" = "<<ayam_gr*17000<<endl;
			}
			if(udang>0){
				cout<<"Udang Goreng x "<< udang <<" = "<<udang*19000<<endl;
			}
			if(cumi>0){
				cout<<"Cumi Goreng x "<< cumi <<" = "<<cumi*20000<<endl;
			}
			if(ayam_bk>0){
				cout<<"Ayam Bakar x "<< ayam_bk <<" = "<<ayam_bk*25000<<endl;
			}
			
			cout<<"harga pesanan = "<<total<<endl;
		}
		void biaya_ongkir(){
			if(jarak<=3){
				ongkir = 15000;
				if(total>=25000 && total<50000){
					ongkir-=3000;
				}
				else if(total>=50000 && total<150000){
					ongkir-=5000;
					diskon=0.15;
					
				}
				else if(total>=150000){
					ongkir-=8000;
					diskon=0.35;
				}
			}
			else if(jarak>3){
				ongkir=25000;
				if(total>=25000 && total<50000){
					ongkir-=3000;
				}
				else if(total>=50000 && total<150000){
					ongkir-=5000;
					diskon=0.15;
					
				}
				else if(total>=150000){
					ongkir-=8000;
					diskon=0.35;
				}
			}
		cout<<"ongkir = "<<ongkir<<endl;
		cout<<"diskon = "<<diskon*100<<"%"<<endl;
		cout<<"total = "<<total+ongkir-(total*diskon);
		}
	
		
	
					
	
	
	private:
		int ongkir;
		double diskon;
		int bayar2;
		int pilihan,jarak;
		char tambahan;
		int ayam_ge=0;
		int ayam_gr=0;
		int udang=0;
		int cumi=0;
		int ayam_bk=0;
		int total;
};

int main(){
	Struk x;
	x.menu();
	x.pilih_menu();
	x.struk_top();
	x.biaya_ongkir();
	
}


