package geeksforgeeks;

public class MenralProblem {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		long a[] = {2,3,2};
		long b[]= {1,4,5};
		long n =3;
		long ans1= 0;
		long ans2=0;
		for (int i =0; i<n;i++) {
			if (i%2==0) {
				ans1=ans1+a[i];
			}else {
				ans1=ans1+b[i];
			}
			
		}
		for (int i =0; i<n;i++) {
			if (i%2!=0) {
				ans2=ans2+a[i];
			}else {
				ans2=ans2+b[i];
			}
			
		}
		if (ans1<ans2) {
			return ans1;
		}else {
			return ans2;
		}
		
		
	}

}
