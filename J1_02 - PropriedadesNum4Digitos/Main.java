/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
public class Main
{
	public static void main(String[] args) {
        int num = 0, ab = 0, cd = 0, ef = 0;
        
        for (num = 1000; num <= 9999; num++)
        {
            ab = num / 100;
            cd = num % 100;
            ef = ab + cd;
            
            if (num == Math.pow(ef, 2)) System.out.println(num);
        }
	}
}
