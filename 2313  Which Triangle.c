#include<iostream>
#include<math.h>
using namespace std;
int main(){
long long int a,b,c,s,bg,ba,bb,sum=0;
cin>>a>>b>>c;


if(a==b&&b==c&&c==a){
cout<<"Valido-Equilatero"<<endl<<"Retangulo: N"<<endl;
        sum=0;

}
else if(a>=b&&a>=c){
bg=a;
ba=b;
bb=c;
sum=1;
}
else if(b>=a&&b>=c){
bg=b;
ba=a;
bb=c;
sum=1;
}
else if(c>=a&&c>=b){
bg=c;
ba=a;
bb=b;
sum=1;
}

if(sum==1){
 if(bg<(ba+bb)){

if(ba==bb||bb==bg||bg==ba){
cout<<"Valido-Isoceles"<<endl;
}
else if(a!=b&&b!=c&&c!=a){
cout<<"Valido-Escaleno"<<endl;
}
if(pow((double)bg,2.0)==(pow((double)ba,2.0)+pow((double)bb,2.0))){
cout<<"Retangulo: S"<<endl;
}
else
cout<<"Retangulo: N"<<endl;
}

else
cout<<"Invalido"<<endl;
}
}
