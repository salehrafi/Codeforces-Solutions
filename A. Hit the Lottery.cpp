import java.util.Scanner;
public class Barcode{
    public static void main(String[] args) {
        int n, cnt  = 0;
        Scanner sc  = new Scanner(System.in);
        n = sc.nextInt();
        while(n>=0)
        {
            if(n>=100)
            {
                n = n - 100;
                cnt++;
            }
            else if(n>=20)
            {
                n = n - 20;
                cnt++;
            }
            else if(n>=10)
            {
                n = n - 10;
                cnt++;
            }
            else if(n>=5)
            {
                n = n - 5;
                cnt++;
            }
            else if(n>=1)
            {
                n = n - 1;
                cnt++;
            }

            if (n == 0)
                break;
        }
        System.out.println(cnt);
    }
}
