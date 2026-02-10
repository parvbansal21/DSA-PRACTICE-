 package practice2;

 import java.util.*;

public class Prime {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();   
        // for(int i=0;i<t;i++){
        //     int n=sc.nextInt();
        //     int count=0;
        //     for (int div=1; div<=n;div++){
        //         if(n%div==0){
        //             count++;
        //         }
        //     }
        //     if(count==2){
        //         System.out.println("prime");
        //     }else{
        //         System.out.println("not prime");
        //     }

        // }



            /*  yha parr isko optimize karne ke liye 
            hum 4 cheez karenge
            1.  div start from 2 
            2.  we will check till for root n  so root ne ki liye div*div 
            3. count =0   agr 2 se lekr square root se koi divide nhi kar rha toh prime 

            lekin itna kaafi nhi aur optimize karna padega  
            4. count++  hote hi break;2 se lekr root n agr ek bhi no ayya toh basically non prime 
            */

        for (int i=0;i<t;i++){
            int n=sc.nextInt();

            int count=0;
            for(int div=1;div*div<=n;div++){
                if(n%div ==0){
                    count++;
                    break;
                }
            }
            if(count==0){
                System.out.println("Prime");
            }else{
                System.out.println("Not Prime");
            }
        }

    }

}

