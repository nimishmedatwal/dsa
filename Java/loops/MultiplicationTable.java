package loops;
import java.util.Scanner;
public class MultiplicationTable {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc= new Scanner(System.in);
		System.out.println("Enter the number : ");
		int x=sc.nextInt();
		for (int i=1 ; i<11 ; i=i+1) { 
			int product= x*i;
			System.out.println(x+" X "+i+" = "+product);
		}
		
		
		
		
		
		
	}

}
