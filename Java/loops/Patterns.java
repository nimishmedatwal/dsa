package loops;

public class Patterns {
	public static void main(String[] args) {

		int n=0;

		for (int i=5; i>=0;i--) 
		{
			
			for (n=0; n<i ; n++) {
				System.out.print("   ");
				
			}
			
			for (n=0 ; n<=5-i ; n++) {

				System.out.print(" * ");
			}
			
			System.out.println();
			
		}
	}
}
