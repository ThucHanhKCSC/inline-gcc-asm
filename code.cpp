#include <iostream>
#include <windows.h>
#include <stdio.h>



int main(){

	ULONG test;

 	__asm(
 		"mov eax, 0x12345;"
 		"mov %[testVar], eax;"

 		:[testVar] "=r" (test)
 	);


	std::cout << test;

	return 0;
}

// int main (void)
// {
//     int data1 = 10;
//     int data2 = 20;
//     int result;

//     asm(
//         "   mov    %[myresult], 12\n"
//         "   imul   %[myresult], 13\n"
//         : [myresult] "=&r" (result)
//         : [mydata1] "r" (data1), [mydata2] "r" (data2));

//     printf("The result is %d\n",result);

//     return 0;
// }


// #include <stdio.h>


// int main (void)
// {
//     int data1 = 10;
//     int data2 = 20;
//     int result;

//     __asm__(
//         "   movl    %[mydata1], %[myresult]\n"
//         "   imull   %[mydata2], %[myresult]\n"
//         : [myresult] "=&r" (result)
//         : [mydata1] "r" (data1), [mydata2] "r" (data2));

//     printf("The result is %d\n",result);

//     return 0;
// }



/*
ULONG test;

int main(){


 	__asm(
 		"mov eax, 0x12345;"
 		"mov [test], eax;"
 	);


	std::cout << test;

	return 0;
}
*/