#include <iostream>
#include <string>
using namespace std;

class CrushGear{
	public:
		void bemotoran(string main);
		void hoby(string hoby);
			 Mainan(string Mainan);
			 Barang_mahal(string Barang);
			 Langka(string Langka); 
		string frontweapon, rearweapon , typecasis, specialattack;

};


int main() {
		CrushGear GarudaEagle , DinoSpartan, ThunderBreaker;
cout<<"\n\t\t\tNAMA      : Khairunnaji\n";
cout<<"\t\t\tNPM       : 16630286\n";
cout<<"\t\t\tPROGRAM   : Teknik Informtika\n";
cout<<"\t\t\tTentang   : Crush Gear\n"; 

	cout<<"\t\t\t\n";
	GarudaEagle.frontweapon = "Pedang ";
	DinoSpartan.frontweapon = "Duo GEAR ";
	ThunderBreaker.frontweapon = "TOMBAK ";
	
	cout << (GarudaEagle.frontweapon);
	GarudaEagle.bemotoran("Namanya");
	GarudaEagle.bemotoran("Special");
}
void CrushGear::bemotoran(string main){
	cout<<"Garuda Eagle kawa Mengeluarkan Jurus "<<main<<" Shining Sword Breaker"<<endl;
}
