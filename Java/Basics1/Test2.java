package Basics1;
import java.util.Scanner; 

public class Test2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc= new Scanner(System.in);
		System.out.println("Enter total weight of men  :");
		int weightofmen=sc.nextInt();
		
		System.out.println("Enter Max weight of elevator");
		int elevator=sc.nextInt();
		boolean y= weightofmen< elevator;
		if (y==true)
		{
			System.out.println("elevator can withstand the weight");
			
		}
		else
		{
			System.out.println("elevator will not move");
			
		};
}
}