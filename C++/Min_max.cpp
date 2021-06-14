#include<bits/stdc++.h>
using namespace std;
void min1(int m,int s){	
	s--;
	int d[m+5];
	for(int i=m-1;i>=1;i--){
		if(s>9){
			d[i]=9;
			s-=9;
		}
		else{
			d[i]=s;
			s=0;
		}
	}
	s++;
	d[0]=s;
	for(int i=0;i<m;i++) cout<<d[i];
}
void max1(int m,int s){
	int d[m+5];
	for(int i=0;i<m;i++){
		if(s>9){
			d[i]=9;
			s-=9;
		}
		else {
			d[i]=s;
			s=0;
		}
	}
	for(int i=0;i<m;i++) cout<<d[i];
}
int main(){
	int m,s;
	cin>>m>>s;
	if((s==0 && m!=0 ) || s>9*m) cout<<-1<<" "<<-1<<endl;
	else {
		min1(m,s); cout<<" "; max1(m,s);
	}
}
