#include <iostream>
    using namespace std;

    int main ()

    {  

        int grade;
       
        cout << "WELCOME"<<endl;

        cout << "Enter your marks to check your grade : "<<endl;

        cin >> grade;
             switch (grade) {
                               case 80 ... 100: 
                               cout<<"You had an......A"<<endl;
                               break;
                               case 70 ... 79: 
                               cout<<"You had a......B"<<endl;
                               break;
                               case 60 ... 69: 
                               cout<<"You had a......C"<<endl;
                               break;
                               case 50 ... 59: 
                               cout<<"You had a......D"<<endl;
                               break;
                               case 30 ... 49: 
                               cout<<"You had an......E"<<endl;
                               break;
                               case 0 ... 29: 
                               cout<<"You had an......F"<<endl;
                               break;
                               default: 
                               cout<<"Input Incorrect"<<endl;
                            }
       system ("PAUSE");
       return 0;
}
  