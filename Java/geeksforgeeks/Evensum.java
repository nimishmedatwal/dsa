package geeksforgeeks;

public class Evensum {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		long [] A = {1,4,6,5,6,7,8};
		long sum =0 ;
        for (int i =0 ; i< A.length ; i++){
            sum=sum+A[i];
        }
        for (int i=0 ; i<A.length ; i++) {
        
        }
        if(sum%2==0){
            long min =2;
            for (int i=0 ; i<A.length ; i++){
                if (min>A[i] && A[i]%2==0){
                    min=A[i];
                    System.out.println(33);
                }
            }
            System.out.println(min);
        }else{
            long min =A[0];
            for (int i=0 ; i<A.length ; i++){
                if (min>A[i] && A[i]%2!=0){
                    min=A[i];
                    System.out.println(35);
                }
            }
            System.out.println(min);
	}

}
}
