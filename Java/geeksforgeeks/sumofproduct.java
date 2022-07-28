package geeksforgeeks;

import java.math.*;
public class sumofproduct{
    public static void main(String[] args){
        int n=5;
        int sum =0;
        int x=1;
        int y=1;
        for (x=1; x<=n; x++){
            for (y=1 ; y<=n ; y++){
            if (Math.floor(n/x)==y){
                sum=sum+x*y;
            }
        }
        }
        System.out.println(sum);
    }
}