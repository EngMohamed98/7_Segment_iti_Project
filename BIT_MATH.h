#ifndef BIT_MATH_H
#define BIT_MATH_H
#define SET_BIt(var,bit_no)     var|= (1<<bit_no)
#define CLR_BIt(var,bit_no)     var&=~(1<<bit_no)
#define TOGGEL_BIt(var,bit_no)  var^=(1<<bit_no)
#define GET_BIt(var,bit_no)     (var>>bit_no)&1
#endif
