package conditionalStatements;
import java.util.Scanner;
public class Calculator {

	public static void main(String[] args) {

		Scanner sc= new Scanner(System.in);
		System.out.println("Enter the first number : ");
		int a=sc.nextInt();
		System.out.println("Enter the second number : ");
		int b=sc.nextInt();
		sc.nextLine();
		System.out.println("Enter the operator");
		char operator=sc.nextLine().charAt(0);
		System.out.println("Answer to your calculation is :");
		switch (operator) {
		case '+':
			System.out.println(a+b);
			break;
		case '-':
			System.out.println(a-b);
			break;
		case '*':
			System.out.println(a*b);
			break;
		case '/':
			System.out.println(a/b);
			break;
			

	}

}
}