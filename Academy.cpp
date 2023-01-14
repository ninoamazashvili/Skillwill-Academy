/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <iostream>


using namespace std;

class AbstractStudent{
    protected:
      string StudentName;
      string StudentLastname;
      int StudentAge;
      string CourseName;
      string Section;
    

      
      AbstractStudent(string StudentName,string StudentLastname,int StudentAge, string Section){
          this->StudentName = StudentName;
          this->StudentLastname = StudentLastname;
          this->StudentAge = StudentAge;
          this->Section = Section;
          
      };
      
      string getStudentName(){
          return StudentName;
      };
      
      void setStudentName(string StudentName){
          this->StudentName = StudentName;
      };
      
       string getStudentLastname(){
          return StudentLastname;
      };
      
      void setStudentLastname(string StudentLastname){
          this->StudentLastname = StudentLastname;
      };
      
      int getStudentAge(){
          return StudentAge;
      };
      
      void setStudentAge(int StudentAge){
          this->StudentAge = StudentAge;
      };
      
      string getSection(){
          return Section;
      };
      
      void setSection(string Section){
          this->Section = Section;
      };
      
    void Attend() {
        cout<<"სტუდენტი ესწრება ლექციას"<<endl;
    }
      
};


class SkillwillStudent: public AbstractStudent{
    public:
    SkillwillStudent(string StudentName, string StudentLastname, int StudentAge, string Section): AbstractStudent

    (StudentName, StudentLastname, StudentAge, Section){}
     void Attend() {
         cout<<"სტუდენტი ესწრება რბილი უნარების ლექციას"<<endl;
     };
};



int main()
{
    SkillwillStudent Student1("ნინო","ამაზაშვილი",24,"B");
    
    return 0;
}