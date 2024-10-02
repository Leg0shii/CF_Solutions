package de.legoshi.Codeforces.A;

import java.util.Arrays;
import java.util.Scanner;

// https://codeforces.com/problemset/problem/231/A
public class A231 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        in.nextLine();

        int count = 0;
        while (in.hasNext()) {
            int sum = Arrays.stream(in.nextLine().split(" "))
                    .mapToInt(Integer::parseInt)
                    .reduce(0, Integer::sum);
            if (sum >= 2) count++;
        }

        System.out.println(count);
    }

}
