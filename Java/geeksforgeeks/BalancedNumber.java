package geeksforgeeks;

public class BalancedNumber {
	
	public static void main(String[] args) {
		String N = "1234006";
		int ln=N.length();
		int sum1=0;
		int sum2=0;
		for (int i=0 ;i<ln/2 ;i++) {
			char A=N.charAt(i);
			int F=Character.getNumericValue(A); 
			sum1=sum1+F;
			
		}
		for (int i=ln/2+1 ;i<ln ;i++) {
			char A=N.charAt(i);
			int F=Character.getNumericValue(A); 
			sum2=sum2+F;
		}
		System.out.println(sum1);
		System.out.println(sum2);
	}
}
