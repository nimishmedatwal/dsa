package geeksforgeeks;

public class Replace5with0 {
    public static void main(String[] args){
        int num  =10020;
        int ld =0;
        int temp=num ;
        
        while (temp > 0) {
            ld=temp%10;
            temp=temp/10;
            System.out.println(ld);
        }


    }
}
