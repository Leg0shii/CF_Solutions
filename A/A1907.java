package de.legoshi.Codeforces.A;

import java.util.Scanner;

public class A1907 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        in.nextInt();

        while (in.hasNext()) {
            String s = in.next();
            for (int i = 1; i < 9; i++) {
                String part = s.substring(0, 1);
                if (Integer.parseInt(s.substring(1, 2)) != i) {
                    System.out.print(part + i + "\n");
                }
            }
            for (int i = 'a'; i < 'i'; i++) {
                String part = s.substring(1, 2);
                if (!s.substring(0, 1).equals("" + ((char) i))) {
                    System.out.print(((char) i) + part + "\n");
                }
            }
        }
    }
}
