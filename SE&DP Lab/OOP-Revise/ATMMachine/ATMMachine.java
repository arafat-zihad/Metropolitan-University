
import java.util.Scanner;

class ATM{
    int PIN = 4321;
    float Balance;

    public void checkPin(){
        System.out.println("Enter the your pin: ");
        Scanner sc = new Scanner(System.in);
        int enteredPin = sc.nextInt();
        if(PIN == enteredPin){
            menu();
        } else{
            System.out.println("Enter a valid pin.");
        }
    }

    public void menu(){
        System.out.println("What you want to do?");
        System.out.println("1. Check A/C Balance");
        System.out.println("2. Withdraw money");
        System.out.println("3. Deposit Money");
        System.out.println("4. Exit");

        Scanner sc = new Scanner(System.in);
        int opt = sc.nextInt();

        if(opt == 1){
            checkBalance();
        } else if(opt == 2){
            withdrawMoney();
        } else if(opt == 3){
            depositMoney();
        } else if( opt == 4){
            return;
        } else {
            System.out.println("Enter a valid choice!");
        }
    }

    public void checkBalance(){
        System.out.println("Balance: " + Balance);
        menu();
    }

    public void withdrawMoney(){
        System.out.println("Enter the amount: ");
        Scanner sc = new Scanner(System.in);
        float amt = sc.nextFloat();
        if(amt > Balance){
            System.out.println("In sufficiant Balance.");
        } else {
            Balance = Balance - amt;
            System.out.println("Money withdrawl successful");
        }
        menu();
    }

    public void depositMoney(){
        System.out.println("Enter the amount: ");
        Scanner sc = new Scanner(System.in);
        float amount = sc.nextFloat();
        Balance = Balance + amount;
        System.out.println("Money deposited successfully!");
        menu();

    }

}


public class ATMMachine{
    public static void main(String[] args) {
        ATM user1 = new ATM();
        user1.checkPin();
    }
}