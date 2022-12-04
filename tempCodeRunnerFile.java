/*
Mr. Bob is a Military Encoders. 
Mr. Bob writes a word as shown below and then merges them. 
Help Bob to write the code. 

Mr. Bob will be given a word 'w' and a number 'n' 

Sample Test Case - 1
input = 
ABCDE
2
output = ACEBD


This is How Bob writes the letters of the word 
A    C    E
   B    D

Now concatenate the two rows and ignore spaces in every row. We get ACEBD


Sample Test Case - 2
input = system
3
output = seytms

s         e
  y    t    m
     s

Now concatenate the 3 rows we get seytms
*/
import java.util.*;
class tempCodeRunnerFile{
   public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      String word = sc.next();
      int n = sc.nextInt();
      int len = word.length();
      String arr[][] = new String[n][len];
      boolean flag = true;
      int i = 0;
      for(int k = 0; k < len; k++){
         if(word.charAt(k) >= 'a' && word.charAt(k) <= 'z' || word.charAt(k) >= 'A' && word.charAt(k) <= 'Z' || word.charAt(k) >= '0' && word.charAt(k) <= '9')
         if(flag){
            arr[i][k] = word.charAt(k)+"";
            if(i == n-1){
               flag = false;
               i--;
            }
            else{
               i++;
            }
         }
         else{
            arr[i][k] = word.charAt(k)+"";
            if(i == 0){
               flag = true;
               i++;
            }
            else{
               i--;
            }
         }
      }
      // print(arr);
      String res = "";
      for(int k = 0; k < n; k++){
         for(int l = 0; l < len; l++){
            if(arr[k][l] != null){
               System.out.print(arr[k][l]);
               res += arr[k][l];
            }
            else{
               System.out.print("_");
            }
         }
         System.out.println();
      }
      System.out.println("\n" + res);
   }
}