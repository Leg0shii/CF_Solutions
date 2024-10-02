package de.legoshi.Codeforces.A;

import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;
import java.util.stream.Collectors;

// https://codeforces.com/contest/158/problem/A
public class A158 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int kth = Integer.parseInt(in.nextLine().split(" ")[1]);

        int count = 0;
        while (in.hasNext()) {
            List<Integer> list = Arrays.stream(in.nextLine().split(" "))
                    .map(Integer::parseInt)
                    .sorted(Collections.reverseOrder())
                    .collect(Collectors.toList());
            
            kth = list.get(kth - 1);

            for (Integer integer : list) {
                if (integer >= kth && integer > 0) {
                    count++;
                }
            }
            System.out.println(count);
        }
    }

}
