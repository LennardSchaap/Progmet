#include <iostream>
        using namespace std;

	double fixmijnhaakjes() { return 84 /2; } // dank voor het fixen
char globaa1[] = {'{', 'o', '}'}; // let op de puntkomma! //liever niet globaal
               char globaal[] = {
'{',            'o',
'}'
}; // let op de puntkomma! // liever niet globaal

void test() {
	cout << 458.196/3 << endl;
}

// main-functie
int main(int argc, char * argv[]) { // C-style main()
    int uwvar = 3.14 / (1); // huh?
	if(3 == uwvar) {
   		cout << "Snapt u het nog?" << endl;
		    	}
cout << "Vergeten 2 keer in te springen" << endl; { // wist u dat hier een { mag
					// en wat dat dan betekent?
  			 	  	                                   cout <<
123 << " was een getal" << endl;     test(); // compileert dit bijvoorbeeld?
}// hier, op regel 22, houdt het op
	
	cerr << "Printmij // maar dan naar de standard-error" << endl;
	    		   				     	return 0;          // altijd goed
} // einde van main na 29 regels, maar het bestand heeft er 30 (check met wc -l)

