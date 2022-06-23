#include <iostream>
#include <iomanip>

using namespace std;

class CS_Student{
protected:
//protected members
char student_name[50];
int student_ID;
char student_email_username[10];
char student_major[10];
float student_grades[5];
float student_score;
char student_email_password[10];
public:
//encapsulation method 
void get_set_data(string name, int id, string email, string major, float grades[], float score, string pass){
        //setting  the name array
        for (int i = 0; i < name.length(); i++)
            student_name[i] = name[i];


        //setting  the email array
        for (int i = 0; i < email.length(); i++)
            student_email_username[i] = email[i];

        
        //setting  the major array
        for (int i = 0; i < major.length(); i++)
            student_major[i] = major[i];
    
        
        //setting  the password array
        for (int i = 0; i < pass.length(); i++)
            student_email_password[i] = pass[i];


        //setting  id
        student_ID = id;
        //setting  grades
        for (int  i = 0; i < 5; i++)
            student_grades[i] = grades[i];
        

        //setting  score
        student_score = score;
}

//constructor, setting  every thing to zero and null.
    CS_Student (){

        //initializing name array
        for (size_t i = 0; i < 50; i++)
        student_name[i] = 0;

        //initializing email array
        for (size_t i = 0; i < 10; i++)
        student_email_username[i] = 0;
        
        //initializing major array
        for (size_t i = 0; i < 10; i++)
        student_major[i] = 0;

        //initializing password array
        for (size_t i = 0; i < 10; i++)
        student_email_password[i] = 0;

        //initializing id
        student_ID = 0;

        //initializing score
        student_score = 0;

        //initializing grades array
        for (int i = 0; i < 5; i++)
        student_grades[i] = 0;
        
} 

//registerStudent method
void registerStudent(){
    string name, email, major, pass;
    int id;
    float grades[5], score;
    cout << "Enter your name: " << endl;
    cin >> name;
    cout << "Enter your id: " << endl;
    cin >> id;
    cout << "Enter your username: " << endl;
    cin >> email;
    cout << "Enter your password: " << endl;
    cin >> pass;
    cout << "Enter your major: " << endl;
    cin >> major;
    cout << "Enter your 5 grades: " << endl;
    for(int i = 0; i < 5; i++)
    cin >> grades[i];
    cout << "Enter your score: " << endl;
    cin >> score;
    get_set_data(name, id, email, major, grades, score, pass);
}

//getStudentInfo method
void getStudentInfo(){
    //printing name
    cout << "Your name is: ";
    for (int  i = 0;; i++)
    {
        if(student_name[i] != 0)
        cout << student_name[i];
        else
        break;
    }

    //printing username
    cout << endl << "Your username is: ";
    for (int  i = 0;; i++)
    {
        if(student_email_username[i] != 0)
        cout << student_email_username[i];
        else
        break;
    }

    //printing password
    cout << endl << "Your password is: ";
    for (int  i = 0;; i++)
    {
        if(student_email_password[i] != 0)
        cout << student_email_password[i];
        else
        break;
    }

    //printing major
    cout << endl << "Your major is: ";
    for (int  i = 0;; i++)
    {
        if(student_major[i] != 0)
        cout << student_major[i];
        else
        break;
    }

    //printing grades
    cout << endl << "Your grades are: ";
    for (int  i = 0; i < 5; i++)
    {
        cout << student_grades[i] << " ";
    }
    
    //printing id
    cout << endl << "Your id is: " << student_ID << endl;

    //printing score
    cout << "Your score is: " << student_score;
    
}
};
class CPG_Student: protected CS_Student {
    
};


int main (){
    CS_Student stud;
    stud.registerStudent();
    stud.getStudentInfo();
    system ("pause");
    return false;
}
/* 
1- members are 
- array of chars , name
- array of chars, username
- arrya of floats, student grade
-
 */