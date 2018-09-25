//Authors: Ali Akbar
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
string first;
string last;
int Lucky;
  //get user input
cout<<" what is your first name ";
cin>> first;
cout<<" what is your last name ";
cin>> last;
int index=last.length()-1;
  //tell fortune
cout<< " Welcome, ";
cout<<first[0];
cout<<".";
cout<<last[0];
cout<< " Here is your fortune ";
cout<<" your lucky number is ";
cout<<first.length()<<endl;

if(first[0]=='a'||first[0]=='i'||first[0]=='e'||first[0]=='o'||first[0]=='u'||first[0]=='A'||first[0]=='E'||first[0]=='I'||first[0]=='O'||first[0]=='U')
{
cout<<" you are destined to be famous ";
}        
else
{
cout<<" you should keep a low profile ";
}
if(last[index]=='a'||last[index]=='i'||last[index]=='e'||last[index]=='o'||last[index]=='u'||last[index]=='A'||last[index]=='E'||last[index]=='I'||last[index]=='O'||last[index]=='U')
{
        cout<<" you have met your true love ";}


        cout<<" have a good day ";

 return 0;
}
