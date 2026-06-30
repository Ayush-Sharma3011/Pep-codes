// import java.util.*;
public class q4 {

    public static void doubletheNumber(int num){
            num *= 2;
            System.out.println(num);
        }
    public static void main(String[] args) {
        // char grade = 'A';
        // switch (grade) {
        //     case 'A':
        //         System.out.println("Excellent");
        //         break;
        //     case 'B':
        //         System.out.println("Good");
        //         break;
        //     case 'C':
        //         System.out.println("Average");
        //         break;
        //     case 'D':
        //         System.out.println("Below Average");
        //         break;
        //     case 'F':
        //         System.out.println("Fail");
        //         break;
        //     default:
        //         System.out.println("Invalid grade");
        // }

        // int x=10 , y=20;

        // System.out.println((x>y)?x:y);

        int num =10;
        int *ptr = &num;
        // doubletheNumber(num);
        System.out.println(*(ptr+1));

        
        // derefrencing a pointer when we put * two time it givews us the value of the pointer and when we put * one time it gives us the address of the pointer
    }
}
