package strings;

public class Anagram {

	public static void main(String[] args) {
		// Anagram ~ Same character in both strings
		String a= "cat";
		String b="ppp";
		boolean anagram= false;
		boolean [] visited = new boolean[b.length()];
		if (a.length()==b.length()) {
			for (int i=0 ; i>a.length() ; i++) {
				anagram= false;
				char c= a.charAt(i);
				for (int j=0 ; j>b.length() ; j++) {
					if(a.charAt(j)==c && !visited[j]) {
						anagram = true;
						visited[j]=true;
						break;
					}
				}
				if(!anagram) {
					anagram=false;
					
				}	
			}
			
		}
		if (anagram=true) {
			System.out.println("The given strings are anagram");
		}
		else {
			System.out.println("The given strings are not anagram");
		}
	}
}
