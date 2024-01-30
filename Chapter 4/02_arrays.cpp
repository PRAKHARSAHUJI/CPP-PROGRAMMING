#include <iostream>
using namespace std;

int main()
{
int englishmarks[] = {86,87,93,91};

// int marks[4] = {86,87,93,91};                                   This can be written like this also


cout<< "English Marks of Student 1 is : "<<englishmarks[0]<<endl;
cout<< "English Marks of Student 2 is : "<<englishmarks[1]<<endl;
cout<< "English Marks of Student 3 is : "<<englishmarks[2]<<endl;
cout<< "English Marks of Student 4 is : "<<englishmarks[3]<<endl;

// cout<< "Marks 5 is : "<<marks[4]<<endl;                          This will give error

int mathsmarks[4];

// int mathsmarks[];                                                This can't be written like this                      
 
mathsmarks[0] = 97;
mathsmarks[1] = 93;
mathsmarks[2] = 96;
mathsmarks[3] = 99;

cout<< "Maths   Marks of Student 1 is : "<<mathsmarks[0]<<endl;
cout<< "Maths   Marks of Student 2 is : "<<mathsmarks[1]<<endl;
cout<< "Maths   Marks of Student 3 is : "<<mathsmarks[2]<<endl;
cout<< "Maths   Marks of Student 4 is : "<<mathsmarks[3]<<endl;

mathsmarks[3] = 100;

cout<< "New Maths Marks of Student 4 is : "<<mathsmarks[3]<<endl;




}