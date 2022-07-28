package loops;
import java.util.Scanner;
public class PowerOfNumbers {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc= new Scanner(System.in);
		System.out.println("enter a :");
		int a=sc.nextInt();
		int d= a;
		System.out.println("Enter b: " );
		int b =sc.nextInt();
		int c=1;
		for (int i=1; i<b ; i++) { 
			c=a*d;
			a=c;
			
			
		}
		System.out.println(c);

	}

}
