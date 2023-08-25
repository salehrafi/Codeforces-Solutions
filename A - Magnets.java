import java.util.*;
public class Magnet {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine(); 
        String[] str = new String[n];
        int cnt = 1;
        str[0] = sc.nextLine(); 
        for(int i = 1; i < n; i++) {
            str[i] = sc.nextLine();
            if(!str[i].equals(str[i-1])) {
                cnt++;
            }
        }
        System.out.println(cnt);
    }
}
