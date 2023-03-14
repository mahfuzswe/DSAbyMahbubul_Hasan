public class RRC {
    
    public static void printNumb(int n){
        if(n==0) return; // Base Case
        System.out.println(n);
        printNumb(n-1); // Recursive call
    }

    public static void main(String args[]){
        int n = 5;
        printNumb(n); //n=5
    }
}
