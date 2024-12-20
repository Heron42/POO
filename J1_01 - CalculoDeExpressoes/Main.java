/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
public class Main
{
	public static void main(String[] args) {
        double s1 = 0, s2 = 0, s3 = 0;
        
        for (double n = 1, d = 1; n <= 99; n+=2, d++)
        {   
            s1 += (n/d);
        }
        System.out.print("S1 = ");
        System.out.println(s1);
        
        for (double e = 1, d = 50; e <= 50; e++, d--)
        {   
            s2 += (Math.pow(2, e)) / d;
        }
        
        System.out.print("S2 = ");
        System.out.println(s2);
        
        for (double n = 1, d = 1; n <= 10; n++, d++)
        {   
            if (n % 2 != 0)
            {
                s3 += n / (Math.pow(n, 2));
            }
            else
            {
                s3 -= n / (Math.pow(n, 2));
            }
        }
        
        System.out.print("S3 = ");
        System.out.println(s3);
	}
}
