package de.legoshi.Codeforces.A;

import java.util.Scanner;

public class A71 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        in.nextInt();

        while (in.hasNext()) {
            String s = in.next();
            if (s.length() <= 10) System.out.println(s);
            else {
                String newString = s.charAt(0) + "" + (s.length()-2) + "" + s.charAt(s.length()-1);
                System.out.println(newString);
            }
        }
    }

}
