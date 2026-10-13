#include <iostream>
using namespace std;
int main(){

  int course;
  int grade;
  string name;

  
  cout<<"please enter your name:  \t";
  cin>>name;

  cout<<"please enter your gwa:  \t";
  cin>>grade;


  cout<<"(1). bsit (85-90) \t\n";
  cout<<"(2). bsemc (91-95) \t\n";
  cout<<"(3). bscs (96-99) \n";
  cout<<"please choose your prefered course(1-3): \t";
  cin>>course;

  switch (course){
    case 1:
  switch (grade >= 85){
    case 1 : 
        cout<<"we are happy to inform you that you are qualified to enroll in this course!\n";
        cin>>course;

        break;

    case 0:
        cout<<"we are sorry to inform you that due to your gwa you are not able to enroll to your desired course. \n";
        break;
  }
  break;
    case 2:
  switch (grade >=91){
    case 1:
      cout<<"we are happy to inform you that you are qualified to enroll in this course! \n";
      cin>>course;
      break;

    case 0: 
      cout<<"we are sorry to inform you that due to your gwa you are not able to enroll to your desired course.\n";
      break;
  }

  break;
    case 3:
  switch (grade >=96){
    case 1:
      cout<<"we are happy to inform you that you are qualified to enroll in this course! \n";
      cin>>course;
      break;

    case 0: 
      cout<<"we are sorry to inform you that due to your gwa you are not able to enroll to your desired course.\n";
      break;
  }
  
}



}
