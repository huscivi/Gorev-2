#include <iostream>
using namespace std;


int main() {
	string t;
	std::cin>>t;
	string s="";

	for(int i= t.length()-1;i>=0;i--) {
		switch(t[t.length()-i-1]) {
		case '1':
			if(i==0)
				s=s+"bir";
			else if(i==1)
				s=s+"on";
			else if(i==2)
				s=s+"yüz";
			break;

		case '2':
			if(i==0)
				s=s+"iki";
			else if(i==1)
				s=s+"yirmi";
			else if(i==2)
				s=s+"ikiyüz";
			break;

		case '3':
			if(i==0)
				s=s+"üç";
			else if(i==1)
				s=s+"otuz";
			else if(i==2)
				s=s+"üçyüz";
			break;

		case '4':
			if(i==0)
				s=s+"dört";
			else if(i==1)
				s=s+"kırk";
			else if(i==2)
				s=s+"dörtyüz";
			break;

		case '5':
			if(i==0)
				s=s+"beş";
			else if(i==1)
				s=s+"elli";
			else if(i==2)
				s=s+"beşyüz";
			break;

		case '6':
			if(i==0)
				s=s+"altı";
			else if(i==1)
				s=s+"altmış";
			else if(i==2)
				s=s+"altıyüz";
			break;

		case '7':
			if(i==0)
				s=s+"yedi";
			else if(i==1)
				s=s+"yetmiş";
			else if(i==2)
				s=s+"yediyüz";
			break;

		case '8':
			if(i==0)
				s=s+"sekiz";
			else if(i==1)
				s=s+"seksen";
			else if(i==2)
				s= s+"sekizyüz";
			break;

		case '9':
			if(i==0)
				s=s+"dokuz";
			else if(i==1)
				s= s+"doksan";
			else if(i==2)
				s= s+"dokuzyüz";
			break;



	}
		
}
	std::cout << s ;
	return 0;


}
