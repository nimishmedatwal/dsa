package loops;
import java.util.Scanner;
public class Palindrome {
	public static void main(String[] args) {
		Scanner sc= new Scanner(System.in);
		System.out.print("Enter the number you want to check : ");
		int n = sc.nextInt();
		int temp = n;
		int reversednumber=0;
		while (temp >0) {
			int lastdigit=temp%10;
			temp /= 10;
			reversednumber=reversednumber*10 +lastdigit;
			
			
			
		}
	
//		System.out.println(reversednumber);
		if (reversednumber==n) { 
			System.out.println("Your number is a palindrome");
			
		}else {
			System.out.println("Your number is not a palindrome");
		}
	
	}
}
