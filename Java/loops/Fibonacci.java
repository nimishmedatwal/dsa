package loops;

public class Fibonacci {

	public static void main(String[] args) {
		int a =0 ;
		int b = 1 ;
		System.out.print(a+ "  ");
		System.out.print(b+"  ");
		
		
		for (int i=0; i<200;i=i+1) {
			int c = a+b;
			System.out.print(c+"  ");
			
			a=b;
			b=c;
			
			
		}

	}

}
