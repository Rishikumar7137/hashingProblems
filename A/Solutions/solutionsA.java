import java.util.*;
 
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
 
        while (t-- > 0) {
            int n = scanner.nextInt();
            String s = scanner.next();
            
            int ans = 0;
            int j = 0;
            Map<Character, Integer> mp = new HashMap<>();
 
            for (int i = 0; i < n; i++) {
                char ch = s.charAt(i);
                if (mp.containsKey(ch) && mp.get(ch) > 0) {
                    j = mp.get(ch);
                }
                mp.put(ch, i + 1);
                ans += i - j + 1;
            }
 
            System.out.println(ans);
        }
 
        scanner.close();
    }
}
