// Food for Puppy
// Johnson is an animal lover and he had been petting a puppy named “lucy” 
// since few days. He had to go on an official trip for five days. 
// So he plans to leave lucy in a dog care center for five days. 
// As per the rule of the care center, the owner has to provide 
// the required amount of food (in gms) for the dogs while they leave. 
// Since lucy is in growing stage the food intake increases each day by 
// a constant factor ‘r’. That is if food intake of day 1 is ‘n’ gms and 
// rate of increase is ‘r’ then next day the intake of lucy will 
// consume ‘n+n*r’ gms of food. Given the food intake of lucy on the 
// day on which Johnson starts the trip (Johnson had fed the puppy on 
// the day when he leaves for the trip), write a code to determine the 
// quantity of food to be packed.

// For example, if the intake of lucy is 80 gms of food on the day on 
// which Johnson leaves for the trip and the rate of increase of food 
// intake by lucy is 0.1 then the total quantity of food to be 
// packed is 88 + 96.8 + 106.48 + 117.128 + 128.8408 = 537.25 gms 
// (printing only two decimal places).

// Hint: To print only two decimal places in Python, use format function 
// that works as follows:

// To print two decimal places of a value stored in variable total syntax is:

// print(format(total,"0.2f"))

// Input Format

// First line contains the quantity of food consumed by lucy on the day 
// on which Johnson leaves for a trip, n

// Next line contains the rate of increase of intake by lucy on a daily basis, r

// Output Format

// Print the quantity of food to be packed in gms (only two decimal places)

// Input
// 80
// 0.1

// Expected output
// 537.25
// -----------------
// Input
// 40
// 0.2
// Expected output
// 357.20
// ------------
// Input
// 70
// 0.2
// Expected output
// 625.09

import java.util.*;

public class br {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        float r = sc.nextFloat();
        float total[] = new float[5];
        total[0] = n + n * r;
        for (int i = 1; i < 5; i++) {
            total[i] = total[i - 1] + total[i - 1] * r;
        }
        // sum of array
        float sum = 0;
        for (int i = 0; i < 5; i++) {
            sum = sum + total[i];
        }
        System.out.println(String.format("%.2f", sum));
    }
}
