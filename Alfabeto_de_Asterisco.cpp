#include <iostream>

using namespace std;

int main (){
    int i, j, k, l, m;
    char letra;

    cout << "\nInforme o tamanho da fonte:";
    cin >> j;
    cout << "\nInforme uma letra:";
    cin  >> letra ;
    cout << "\n\n";

    switch (letra){


        case  'a':
        case  'A':
           for (i=0; i<7*j;i++){  //
				cout << "*";
			}
			cout<<"\n";
			for (l=0; l<3*j;l++){
				cout<<"*";
				for (k=0; k<5*j +(j-1)*2 ; k++){
					cout << " ";
				}
				cout <<"*\n";
			}
			for (i=0; i<7*j;i++){
				cout << "*";
			}
			cout << "\n";
			for (l=0; l<3*j;l++){
				cout<<"*";
				for (k=0; k<5*j +(j-1)*2 ; k++){
					cout << " ";
				}
				cout <<"*\n";
			}
        break;

          case  'b':
          case  'B':
             for (i=0; i<7*j;i++){  //
				cout << "*";
			}
			cout<<"\n";
			for (l=0; l<3*j;l++){
				cout<<"*";
				for (k=0; k<5*j +(j-1)*2 ; k++){
					cout << " ";
				}
				cout <<"*\n";
			}
			for (i=0; i<7*j;i++){
				cout << "*";
			}
			cout << "\n";
			for (l=0; l<3*j;l++){
				cout<<"*";
				for (k=0; k<5*j +(j-1)*2 ; k++){
					cout << " ";
				}
				cout <<"j\n";
			}
			for (i=0; i<7*j;i++){  //
				cout << "*";
			}
        break;

        case  'c':
        case  'C':
            for (i = 0; i<j; i ++ ){
                cout << "***";
            }
            for (k = 0; k <= 3*j; k++){
                cout << "\n*";
            }
            for (l = 0; l<j; l++){
                 cout << "***";
            }
        break;

          case 'd':
          case  'D':
            for (i=0; i<7*j;i++){  //
				cout << " *";
			}
			cout<<"\n";
			for (l=0; l<3*j;l++){
				cout<<"*";
				for (k=0; k<5*j +(j-1)*2 ; k++){
					cout << " ";
				}
				cout <<" *\n";
			}
			for (i=0; i<7*j;i++){
				cout << " *";
			}
        break;

        case  'e':
        case  'E':

            for (i = 0; i < 2; i ++ ){
                cout << "\n********";
                cout << "\n*\t";
            }
            cout << "\n********";
        break;

        case 'f':
       case  'F':
            if (j <= 1){
            j = 2;
            }
            for (i = 0; i < j ; i ++ ){
                 cout << "***";
                //cout << "\n*\t*";
            }
            for (k = 0; k < j; k ++ ){
                cout << "\n*" ;//<< ' ' << "\n*";
            }
            for (i = 0; i < j ; i ++ ){
                 cout << "***";
            }
            for (k = 0; k < j; k ++ ){
                cout << "\n*" ;//<< ' ' << "\n*";
            }
        break;

        case 'h':
       case  'H':
          for (l=0; l<3*j;l++){
				cout<<"*";
				for (k=0; k<5*j +(j-1)*2 ; k++){
					cout << " ";
				}
				cout <<"*\n";
			}
			for (i=0; i<7*j;i++){
				cout << "*";
			}
			for (l=0; l<3*j;l++){
				cout<<"*";
				for (k=0; k<5*j +(j-1)*2 ; k++){
					cout << " ";
				}
				cout <<"*\n";
			}
        break;

        case 'i':
        case 'I':
            for (i = 0; i <= j; i++){

                cout << "\n*\n*\n*";
            }
        break;

        case  'l':
        case  'L':
             for (k = 0; k < j; k ++ ){
                cout << "*\n" ;//<< ' ' << "\n*";
            }
            for (i = 0; i < j ; i ++ ){
                 cout << "**";
            }
        break;

        case 'o':
		case 'O':

			for (i=0; i<7*j;i++){  //
				cout << "*";
			}
			cout<<"\n";
			for (i=0;i<3*j;i++){
				cout<<"*";
				for (k=0; k<5*j +(j-1)*2 ; k++){
					cout << " ";
				}
				cout <<"*\n";
			}
			for (i=0; i<7*j;i++){
				cout << "*";
			}


        break;

        case 'p':
        case  'P':

            for (i=0; i<7*j;i++){  //
				cout << "*";
			}
			cout<<"\n";
			for (l=0; l<3*j;l++){
				cout<<"*";
				for (k=0; k<5*j +(j-1)*2 ; k++){
					cout << " ";
				}
				cout <<"*\n";
			}
			for (i=0; i<7*j;i++){
				cout << "*";
			}
			cout << "\n";
			for (l=0; l<3*j;l++){
				cout<<"*";
				for (k=0; k<5*j +(j-1)*2 ; k++){
					cout << " ";
				}
				cout <<"\n*\n";
			}
        break;

        case 't':
        case 'T':
          for (i=0; i<7*j;i++){  //
				cout << " *";
			}
			cout<<"\n";
			for (l=0; l<3*j;l++){
				cout<<" ";
				for (k=0; k<5*j +(j-1)*2 ; k++){
					cout << " ";
				}
				cout <<" *\n";
			}
        break;


        case  'u':
        case  'U':
            for (l=0; l<3*j;l++){
				cout<<"*";
				for (k=0; k<5*j +(j-1)*2 ; k++){
					cout << " ";
				}
				cout <<"*\n";
			}
			for (i=0; i<7*j;i++){
				cout << "*";
			}
        break;



    }
  return 0;
}
