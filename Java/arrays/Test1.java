package arrays;

public class Test1 {
	public static void main(String[] args) {
	int [] A = {3, 2300, 37, 42};
	int product=1;
	for (int i=0 ; i<A.length; i++) {
		product=product*A[i];
		}
	System.out.println(product);
    
	String num = Integer.toString(product);
	
	for (int i=0;i<num.length()-1;i++) {
		if (num.charAt(num.length()-i-1) !='0')
		{
			char val = num.charAt(num.length()-i-1);
			int a= Character.getNumericValue(val);
			System.out.println(a);
			break;
		}
		


    }
}
	
	
	}
