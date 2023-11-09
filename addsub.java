import java.util.Scanner;
public class addsub
{
public static void main(String args[])
{
int a,b,add, subtract;
System.out.println("Enter Two Numbers: ");
Scanner skill = new Scanner(System.in);
a = skill.nextInt();
b = skill.nextInt();
add = a+b;
subtract = a -b;
System.out.println("Addition of two numbers= " +add);
System.out.println("Difference of two numbers = "+subtract);
}
}