package arrays;

public class FindingtheLargestarray {

	public static void main(String[] args) {
		
		int [] A= {1,4,64,8,6,4};
		int N=A.length;
		int max = A[0];
		for(int i=0 ; i<N ; i++) {
				if (A[i]>max) {
					max=A[i];
					
			}
		
		}
		System.out.println(max);
		String S="sgf";
		S=S.concat("sd");
		System.out.println(S.charAt(2));
	}  
}

