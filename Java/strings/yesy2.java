package strings;

public class yesy2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int product=1;
		int[]A= {2,3,4,5,3,2,5};
		for (int i=0 ; i<A.length; i++) {
			product=product*A[i];
			}
		System.out.println(product);
		int temp=product;
		int t =temp%10;
		if (t==0) {
				while(temp%10==0) {
				temp=temp/10;
				
			}
			System.out.println(temp%10);	
			}else {
				System.out.println(t);
		
		}
	}

}
