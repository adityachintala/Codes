// // // 
// // # Given the n cubes with the lengths of each cube in a row.
// // # Your task is to create a new stack of cubes. 

// // # Rule to create new stack:
// // # if cube-a is on top of cube-b then length-cube-b >= length-cube-a.

// // # When stacking the cubes, you can only pick up either the leftmost or the rightmost cube each time. 
// // # Print "Yes" if it is possible to stack the cubes. Otherwise, print "No".

// // # Input Format:
// // # The first line contains n, the number of cubes.
// // # The second line contains n space separated integers, denoting the sideLengths of each cube in that order.

// // # Output Format:
// // # Print a single line containing either Yes or No.


// // # Input
// // # 6
// // # 4 3 2 1 3 4
// // # Expected Output
// // # Yes
// // # ----------------------
// // # Input
// // # 3
// // # 1 3 2
// // # Expected Output
// // # No
// // # ----------------------
// // # Input
// // # 3
// // # 3 1 2
// // # Expected Output
// // # Yes
// // # ----------------------
// // # Input
// // # 5
// // # 4 1 2 5 3
// // # Expected Output
// // # No
// // # -----------------------------------------

// n=int(input())
// a=list(map(int,input().split()))
// s=0
// e=n-1
// res=[]
// flag=0
// for i in range(n):
//     if a[s]>=a[e]:
//         res.append(a[s])
//         s+=1
//     else:
//         res.append(a[e])
//         e-=1
//     if(len(res)>1):
//         if(res[-1]>res[-2]):
//             flag=1
//             print("No")
//             break
// if(flag==0):
//     print("Yes")

import java.util.*;
class test{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for(int i=0;i<n;i++){
            a[i] = sc.nextInt();
        }
        int s = 0;
        int e = n-1;
        int[] res = new int[n];
        int flag = 0;
        for(int i=0;i<n;i++){
            if(a[s]>=a[e]){
                res[i] = a[s];
                s++;
            }
            else{
                res[i] = a[e];
                e--;
            }
            if(i>0){
                if(res[i]>res[i-1]){
                    flag = 1;
                    System.out.println("No");
                    break;
                }
            }
        }
        if(flag==0){
            System.out.println("Yes");
        }
    }
}