package geeksforgeeks;

public class Rearrangethearray {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		long[] arr = {1,4,7,0};
		int n=arr.length;
		for (int i = 0; i < n; i++){
            arr[i] += (arr[(int) arr[i]] % n) * n;
        }
      
        for (int i = 0; i < n; i++){
            arr[i] /= n;
        }
	}

}
