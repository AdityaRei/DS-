#include<stdio.h>
struct building
{
	int foot;
	int inch;
};

int main(){
	struct building f1={13,11};
	struct building f2={7,8};
	struct building h;
	int x;
    h.inch=(f1.inch+f2.inch)%12;
	x=(f1.inch+f2.inch)/12;
	h.foot=(f1.foot+f2.foot+x);	
	printf("%dfoot %dinch",h.foot,h.inch);
return 0;
}