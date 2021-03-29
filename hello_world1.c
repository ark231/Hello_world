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
int __(void *a){
	int A=1,k;
	for(k=1;k<=*(int*)a;k++){
		A*=k;
	}
	return A;
}
double ___(void *b,void *c){
	double B=1;
	int l=0;
	while(l<*(int*)c){
		B*=*(double*)b;
		l++;
	}
	return B;
}
double ____(void *d){
	if(*(double*)d<(*(double*)d-*(double*)d)){
		return ((char)((*(double*)d-(*(double*)d+*(double*)d))/ *(double*)d))* *(double*)d;
	}else{
		return ((char)((*(double*)d-(*(double*)d-*(double*)d))/ *(double*)d))* *(double*)d;
	}
}
double _____(void *e){
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
double ______(){
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
char _______(){
	double f,g=0;
	for(f=0;f<______();f+=(______()/10)){
		g+=_____(&f)*(______()/10);
	}
	return (char)(g+0.5);
}
int main(){
	double msg[2];
	int msg1[] = {0,31,9};
	int msg2[] = {135,807};
	int msg3[] = {2,4,6,7,9,10,14,15,17,18,22,23,25,26,27,28,31,33,34,38,39,40,42,43,44,46,47,49,50,51,52,1,2,6,7,10,15,20,25,27};
	int j,k,s,t;
	double l=1.0,m=1.0,o=0.0;
	char n;
	for(j=0;j<2;j++){
		l=1.0;
		o=1.0;
		for(s=0;s<msg1[j+1];s++){
			m=1.0;
			for(t=0;t<msg3[s+msg1[j]];t++){
				n=_______();
				m/=n;
			}
			o+=m;
		}
		msg[j] = o;
		for(k=0;k<msg2[j];k++){
			n=_______();
			l*=n;
		}
		msg[j]*=l;
		_(&msg[j]);
	}
	printf("%s",(unsigned char*)msg);
	return 0;
}
