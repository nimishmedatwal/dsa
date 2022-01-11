package loops;
import java.util.Scanner;
public class WhileDo {

	public static void main(String[] args) {
//		To find sum of digits of a number
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter a number : ");
		int num= sc.nextInt();
		int sum =0;
		int temp= num;
		while(temp >0) {
			int lastdigit = temp%10;
			temp = temp/10;
			sum +=lastdigit;
		}
		System.out.println(sum);

	}
		
	}
