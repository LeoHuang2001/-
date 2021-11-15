#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include <algorithm>
using namespace std;
int main()
{
 vector<int>d;
 int a,i=0,j=0,z=0,sum=0,f=0,x=1;
 string s;
 ifstream A("30.txt");
 A>>a;
 cout<<a<<endl;
 getline(A,s);
 int *c=new int[a];
 for(i=0;i<a;i++)
 {
  getline(A,s,'\n');
  cout<<s<<endl;
  for(j=0;j<s.size();j++)if(s[j]>='0'&&s[j]<='9')d.push_back(s[j]-'0');
  reverse(d.begin(),d.end());
   
  for(z=0;z<d.size();z++){
   if((z+1)%2==0){
    d[z]=d[z]*2;
    if(d[z]>=10){
     f=d[z]/10+d[z]%10;
     sum+=f;
     continue;
    }
   }
   sum+=d[z];
  }
  c[x]=sum;
  x++;
  sum=0;
  d.clear();
 }
 cout<<c[0]<<" "<<endl;
 cout<<"Ans=";
 for(i=1;i<=a;i++){
  if(c[i]%10==0)
   cout<<"valid"<<" ";
  else
   cout<<"invaild"<<" "; 
 }
 A.close();
}
