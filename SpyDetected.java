package labwork.A;
import java.util.Scanner;
public class SpyDetected {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        for (int i = 0; i < n; i++){
            int x = sc.nextInt();
            int[] arr = new int[x];
            for (int j = 0; j <x ;j++){
                arr[j] = sc.nextInt();
            }

            int cnt = 1;
            int f = 1;
            for (int k = 1; k <= x-1; k++){
                if(arr[k-1] == arr[k]){
                    cnt = arr[k];
                    break;
                }
            }

            for (int a = 1; a <= x-1; a++){
                if(cnt != arr[a]){
                    f = a + 1;
                    break;
                }
            }
            System.out.println(f);
        }
    }
}
