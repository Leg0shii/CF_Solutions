package de.legoshi.Comp;

import java.util.*;
import java.util.stream.Collectors;

public class Task2 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        in.nextLine();

        while (in.hasNext()) {
            in.nextLine();
            List<Long> input = Arrays.stream(in.nextLine().split(" "))
                    .map(Long::parseLong)
                    .collect(Collectors.toList());

            if (input.size() == 1) {
                System.out.println(0);
                continue;
            }

            List<Long> tempList = new ArrayList<>(input);
            Collections.sort(tempList);
            for (long result : input) {
                boolean found = false;
                List<Long> copiedList = new ArrayList<>(tempList);
                copiedList.remove(result);

                for (long toCheck : new ArrayList<>(copiedList)) {
                    if (result >= toCheck) {
                        result = toCheck + result;
                        copiedList.remove(toCheck);
                    }

                    if (result >= tempList.get(tempList.size() - 1)) {
                        found = true;
                        break;
                    }
                }

                if (found) System.out.println(tempList.size()-1);
                else System.out.println(input.size() - (copiedList.size() + 1));
            }
        }

    }
}
