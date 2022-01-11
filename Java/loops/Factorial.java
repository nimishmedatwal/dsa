package loops;
import java.util.Scanner;
public class Factorial {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the number : ");
		int x= sc.nextInt();
		int a=1;
		
		for (int b=1; b<=x ; b=b+1) { 
			a=a*b;
		
		}
		
		System.out.println("Factorial of the number is : "+a);

}
}