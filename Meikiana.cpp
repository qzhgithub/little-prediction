#include <string>
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

struct Valkyrie{
	int Speed;
	int Attack;
	int Defend;
	int life;
};
	

int main(){
	Valkyrie mei,kiana;
	mei.Speed=3;
	mei.Attack=26;
	mei.Defend=6;
	mei.life=100;
	kiana.Speed=2;
	kiana.Attack=23;
	kiana.Defend=11;
	kiana.life=120;
	int random,count=1,trigger,m=0,k=0;
	while(true){
		//cout<<kiana.life<<" ";
		//cout<<mei.life<<" ";
		srand(time(NULL));
		random=rand()%100;
		cout<<random<<" ";
		if(random>=0&&random<=29){
			kiana.life-=(20+15);
			trigger=1;
		}else{
			kiana.life-=20;
			trigger=0;
		}
		if(count%3==0&&trigger==0){
			mei.life-=48;
		}else{
			mei.life-=17;
		}
		count++;
		if(mei.life<=0){
			m=1;
			break;
		}
		if(kiana.life<=0){
			k=1;
			break;
		}
	}
	if(m==1)
		cout<<"kiana win";
	if(k==1)
		cout<<"mei win";
}
		