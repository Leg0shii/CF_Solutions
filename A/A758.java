package de.legoshi.Codeforces.A;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class A758 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        in.nextInt();

        List<Integer> list = new ArrayList<>();
        while (in.hasNext()) {
            list.add(in.nextInt());
        }

        int result = 0;

        if (list.isEmpty()) {
            System.out.println("0");
        }

        int maxVal = list.stream().max(Integer::compareTo).get();

        for (int i : list) {
            result += maxVal - i;
        }

        System.out.println(result);
    }

}
