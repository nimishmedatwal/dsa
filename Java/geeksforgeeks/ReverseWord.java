package geeksforgeeks;

public class ReverseWord {

	public static void main(String[] args) {
		
	        String S = "hello.my.name.is.nimish";
	        String[] arr = S.split("\\.");
	        String P= new String();
	        String [] j=new String[arr.length]; 
	        for (int i=0 ; i<arr.length ; i++) {
	        	j[i]=arr[arr.length-i-1];
	        }
	        for (int i=0 ; i<arr.length ; i++) {
	        	if (i<arr.length-1) {
	        	P=P.concat(j[i]+".");
	        }else {
	        	P=P.concat(j[i]);
	        }
	        }
	        System.out.println(P);
	        
	}

}
