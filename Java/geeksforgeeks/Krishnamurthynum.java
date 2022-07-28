package geeksforgeeks;

public class Krishnamurthynum {
	public static void main(String[] args) {
		int N=145;
		int temp=N;
		int sum=0;
		while (temp>0) {
			int lastdigit=temp%10;
			temp=temp/10;
			int a=1;
		
			for (int b=1; b<=lastdigit ; b=b+1) { 
				a=a*b;
	
		}
			sum=sum+a;
	}
//		if (sum==N) {
//			return "YES";
//		}
//		else {
//			return "NO";
		}
}
	

