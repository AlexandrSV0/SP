/*  SAV   */
#include "mlisp.h"
double day__of__week/*2*/ ();
double zeller/*11*/ (double d, double m
	 , double y, double c);
double neg__to__pos/*21*/ (double d);
double birthday/*26*/ (double dw);
extern (;
extern (;
extern (;
//________________ 
double day__of__week/*2*/ (){
 return
 zeller(dd, (. + ()), remainder((. + ()), .), quotient((), .));
	 }

double zeller/*11*/ (double d, double m
	 , double y, double c){
 return
 neg__to__pos(remainder((d + y + quotient(((. * m) - .), .) + quotient(y, .) + quotient(c, .) + (. * (- c))), .));
	 }

double neg__to__pos/*21*/ (double d){
 return
 ();
	 }

double birthday/*26*/ (double dw){
 display("Aleksandr Semin was born on ");
();
display(dd);
display(".");
display(mm);
display(".");
return
 yyyy;
	 }

;

;

;
int main(){
display(birthday(day__of__week()));
	 newline();
	 std::cin.get();
 return 0;
}

