package geeksforgeeks;

public class replace5 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int num  =10020;
	        int ld =0;
	        int temp=num ;        
	        int ans=0;
	        int p=1;
	        while (temp > 0) {
	            ld=temp%10;
	            temp=temp/10;
	            if (ld==0) {
	            	ld=5;
	            	ans=p*ld+ans;
	            }else {
	            	ans=p*ld+ans;
	            }
	            
	            p=p*10;
	            
		}
        System.out.println(ans);
}

}
