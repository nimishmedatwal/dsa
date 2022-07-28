package Basics1;
import java.util.Scanner;

public class test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc= new Scanner(System.in);
		System.out.println("Enter your age : ");
		int x= sc.nextInt();
		
		
		if(x >= 18 && x<100) {
			System.out.println("Congratulations you are eligible to vote");
		
		}else {
			System.out.println("You are not eligible to vote");
		}
		
		}
		}



