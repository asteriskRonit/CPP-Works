import java.util.Scanner;
public class Bes
{
    static boolean converter()
    {
        int option;
        Scanner scb=new Scanner(System.in);
        System.out.println("a.INR TO USD");
        System.out.println("a.INR TO EURO");
        System.out.println("a.INR TO POUND");
        System.out.println("a.INR TO YEN");
        System.out.println("a.INR TO MARK");
        option=scb.nextInt();
        double number;
        switch (option) {
            case 1: 
                System.out.print("ENTER THE INR VALUE::");
                number=scb.nextInt();
                System.out.println("USD::"+(number/74));
                return true;  
            case 2:
                System.out.print("ENTER THE INR VALUE::");
                number=scb.nextInt();
                System.out.println("USD::"+(number/86));
            case 3:
                System.out.print("ENTER THE INR VALUE::");
                number=scb.nextInt();
                System.out.println("USD::"+(number/102));   
            case 4:
                System.out.print("ENTER THE INR VALUE::");
                number=scb.nextInt();
                System.out.println("USD::"+(number*1.48));     
                   
            default:
                return false;
        }

    }
    public static void main(String[] args) {


        if(converter())
        {
            System.out.println("operation sucessfull");
        }
        else
            System.out.println("Operation not sucessfull");
        
    }
}