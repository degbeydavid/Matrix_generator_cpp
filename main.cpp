#include <iostream>

using namespace std;

void showmenu();

void CreateMat();

double estimator();

int main() {

char yes='y';

int ch;

while(yes=='y')
        {
            showmenu();
            cout<<"\nEnter your choice (for main menu): ";
            cin>>ch;
            cout << "\n";

            switch(ch){
      
       		case 1:

       			CreateMat();
            
            break;

            case 2:

            	cout << "The estimated value of pi is : " << estimator() << endl;

			break;

      		case 7: exit(0);

      		default: cout<<"\nInvalid choice\nt";

       		} // end switch

       
   		cout<<"\nContinue? [y/n]: ";
   		cin>>yes;
   		} // endwhile


return 0;

} //end main
