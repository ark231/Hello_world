#include<stdio.h>
void _(void *msg){
	int i,j=16777216;
	char tmp;
	if(!*((char*)&j)){
		for(i=0;i<4;i++){
			tmp = *((char*)msg+7-i);
			*((char*)msg+7-i) = *((char*)msg+i);
			*((char*)msg+i) = tmp;
		}
	}
}
int __(void *a){// a!
	int A=1,k;
	for(k=1;k<=*(int*)a;k++){
		A*=k;
	}
	return A;
}
double ___(void *b,void *c){//b^c
	double B=1;
	int l=0;
	while(l<*(int*)c){
		B*=*(double*)b;
		l++;
	}
	return B;
}
double ____(void *d){//abs(d)
	if(*(double*)d<(*(double*)d-*(double*)d)){ //d<(d-d) <=> d<0
		return ((char)((*(double*)d-(*(double*)d+*(double*)d))/ *(double*)d))* *(double*)d; //-d
	}else{
		return ((char)((*(double*)d-(*(double*)d-*(double*)d))/ *(double*)d))* *(double*)d; //d
	}
}
double _____(void *e){//sin(e)
	int m;
	double n=0,o=0,p[]={-1.0};
	int q[1],r[1];
	double s[1];
	for(m=0;(m+1)/(m+1);m++){
		o=n;
		*q=m;
		*(int*)r = ((m+1+m+1)/(m+1))*m+1;
		n+=___(p,q)*((___(e,r)/(double)__(r)));
		*s=n-o;
		if((*(double*)e==0)||(*(double*)e!=0 && o !=0 && ____(s)<0.01)){
			return n;
		}
	}
}
double ______(){ //pi
	double t=0,u=0,v[1];
	char w=1;
	int x=0;
	for(x=1;4-3;x++){
		u=t;
		t=t+w*(4.0/((1<<1)*x-1));
		v[0]=(t-u);
		if(____(v)<0.00001){
			return t;
		}
		w*=-1;
	}
}
char _______(){ //return 2 by integrating sin from 0 to pi
	double f,g=0;
	for(f=0;f<______();f+=(______()/10)){
		g+=_____(&f)*(______()/10);
	}
	return (char)(g+0.5);
}
int main(){
	//double msg[] = {58320394814525347770288995291667466551296.0,1514499670761391445403749645627881152830365352851478960074831060378084812285515302421748281917455443558020670644796856749568474208502639669986578811066709441158397066588943910136656998894194226344721867378331070044663750613890757522848720355328.0};
	double msg[] = {1.3389705984804682881161852492368780076503753662109375000000000000,1.7744455710053443908691406250000000000000000000000000000000000000};
	//double msg1[] = {1.3389705984804682881161852492368780076503753662109375000000000000,1.7744455710053443908691406250000000000000000000000000000000000000};
	int msg2[] = {135,807};
	int j,k;
	double l=1.0;
	char n;
	for(j=0;j<2;j++){
		l=1.0;
		for(k=0;k<msg2[j];k++){
			n=_______();
			l*=n;
		}
		msg[j]*=l;
		_(&msg[j]);
	}
	printf(msg);
	return 0;
}
