#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect r,Rect v){
	double x,y;
	double up,down,left,right;
	up=min(r.y,v.y);
	down=max(r.y-r.h,v.y-v.h);
	y=up-down;
	right=max(r.x,v.x);
	left=min(r.x+r.w,v.x+v.w);
	x=left-right;
	if(x<0 or y<0){
		return 0;
	}else{
		return x*y;
	}
}
