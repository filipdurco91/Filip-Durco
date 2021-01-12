#include <iostream>
using namespace std;

int main()






{
    cout << "KALKULACKA VASEJ TELESNEJ BMI  " << endl;
   
                	
    double prvecislo;
    double druhecislo;
    int funkcia;
    double vysledok;
    
    bool stop = true;
    int pokracovanie;
    
   while (stop){
    	 
       while (stop){
    	 cout << "Zadajte vase pohlavie " << endl;
        cout << "1 muz "   << endl <<  "2 zena  " << endl;
        cin >> funkcia;
       
        while (cin.fail())
        {
            cout << "Zadajte prosim v rozsahu 1-2 " << endl;
            cin.clear();
            cin.ignore();
            cin >> funkcia;
            
        }
        
	    cout << "Zadajte vasu vahu (v kilogramoch)" << endl;
        cin >> prvecislo;
        
        
        cout << "Zadajte vasu vysku (v centimetroch)" << endl;
        cin >> druhecislo;
    
  
        switch (funkcia) {
        
            case 1: vysledok = prvecislo / (  druhecislo*druhecislo/10000 );
            cout << "tu je vypocet "; 
                cout << prvecislo << "/" << druhecislo << "^2 / 10000 =" << vysledok << endl << endl;
            	if ((vysledok < 15.0002  ) and vysledok > 5.00019 ) cout << "ste vemlmi podvyziveny"  << endl;
			   	if ((vysledok > 15.0002  ) and vysledok < 20.00019) cout <<"ste podvyziveny"  << endl;
		    	if ((vysledok > 20.0002  ) and vysledok < 25.00019) cout << "vasa vaha ja optimalna"  << endl;
			 	if ((vysledok > 25.0002  ) and vysledok < 30.00019) cout <<"mate nadvahu"  << endl;
			 	if ((vysledok > 30.0002  ) and vysledok < 50.00019) cout <<"ste obezny"  << endl;
			 	if (vysledok < 5.0002 ) cout<<"toto nieje možne BMI   ";
			 	if (vysledok > 50.0002 ) cout<<"toto nieje možne  BMI ";
			
                 cout << "Ano - 1  Nie - 2" << endl << endl;
                cin >> pokracovanie;
                if (pokracovanie == 1) {

                    break;
                    }
                    else {
                    stop = false;
                    cout << "Dovidenia";
                    break;
                    }
                    break;
           
        

            case 2: vysledok = prvecislo / ( druhecislo*druhecislo/10000 );
            	cout << "tu je vypocet";
                cout << prvecislo << "/" << druhecislo << " ^2/10000 =" << vysledok << endl << endl;
            	if ((vysledok < 14.0002  ) and    vysledok > 5.00019 ) cout << "ste vemlmi podvyzivena"  << endl;
			   	if ((vysledok > 14.0002  ) and    vysledok < 19.00019) cout << "ste podvyzivena"  << endl;
			 	if ((vysledok > 19.0002  ) and    vysledok < 24.00019) cout << "vasa vaha je primerana"  << endl;
			 	if ((vysledok > 24.0002  ) and    vysledok < 29.00019) cout << "mate nadvahu"  << endl;
			 	if ((vysledok > 29.0002  ) and    vysledok < 50.00019) cout << "ste obezna"  << endl;
			 	if (vysledok < 5.0002 ) cout << "toto nieje možne BMI  ";
			 	if (vysledok > 50.0002) cout << "toto nieje možne BMI  ";
			 	
                  cout << "Ano - 1  Nie - 2" << endl << endl;
                cin >> pokracovanie;
                if (pokracovanie == 1) {
                    
                    break;
                    }
                    else {
                    stop = false;
                    cout << "Dovidenia";
                    break;
                }
                break;
            default: 
                cout << "Zadajte prosim v rozsahu 1-2 "<< endl;
                break;




      
 

         }

    }
    
    


    


    return 0;


}


  }
