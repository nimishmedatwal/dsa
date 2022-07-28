package loops;
import java.util.Scanner;
public class PrimeNumber {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter the number you want to check : ");
		int num= sc.nextInt();
		int a=3;
		
		for (int i=2 ; i<num ; i++ ) {
			if (num%i== 0) {
//				System.out.println("It is not a prime number!!! ");
				a =1;
				break;
			
			}else {
//				System.out.println("It is a prime Number !!");
				a= 0;
		

	}

}
		if (a==1) {
			System.out.println("It is not a prime number!!!");
		}else {
			System.out.println("It is a prime Number !!");
}
	}
}