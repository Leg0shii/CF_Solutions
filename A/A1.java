package de.legoshi.Codeforces.A;

import java.util.Scanner;

public class A1 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        while (in.hasNext()) {
            double m = in.nextInt();
            double n = in.nextInt();
            double a = in.nextInt();
            System.out.println((long) (Math.ceil(m / a) * Math.ceil(n / a)));
        }
    }

}
