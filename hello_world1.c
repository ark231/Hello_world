#include<stdio.h>
/*endian collection*/
void _(void *msg){
	int i,j=16777216; // j=0b00000001000000000000000000000000
	char tmp;
	if(*((char*)&j)==0){//if first 8 bits is zero, that means they were the last 8bits of original value
		/*convert endian by swapping bites*/
		for(i=0;i<4;i++){
			tmp = *((char *)msg+7-i);
			*((char *)msg+7-i) = *((char *)msg+i);
			*((char *)msg+i) = tmp;
		}
	}
}
int main(){
	double msg[] = {58320394814525347770288995291667466551296.0,1514499670761391445403749645627881152830365352851478960074831060378084812285515302421748281917455443558020670644796856749568474208502639669986578811066709441158397066588943910136656998894194226344721867378331070044663750613890757522848720355328.0};//in IEEE754 format, their bit pattern is the same as that of "Hello,wo" and "rld!\n\0\0\0"(MSB-first)
	int j;
	for(j=0;j<2;j++){
		_(&msg[j]);
	}
	printf(msg);
	return 0;
}
