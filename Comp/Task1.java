package de.legoshi.Comp;

import java.util.*;

public class Task1 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        in.nextLine();

        while (in.hasNext()) {
            int[] ab = Arrays.stream(in.nextLine().split(" ")).mapToInt(Integer::parseInt).toArray();
            int[] kPos = Arrays.stream(in.nextLine().split(" ")).mapToInt(Integer::parseInt).toArray();
            int[] qPos = Arrays.stream(in.nextLine().split(" ")).mapToInt(Integer::parseInt).toArray();

            Set<Point> points = new HashSet<>();
            for (int i = -1; i <= 1; i++) {
                for (int j = -1; j <= 1; j++) {
                    if (i == 0 || j == 0) continue;
                    points.add(new Point(ab[0] * i, ab[1] * j));
                    points.add(new Point(ab[1] * i, ab[0] * j));
                }
            }

            int count = 0;
            for (Point backwards : points) {
                for (Point forwards : points) {
                    if (backwards.x == forwards.x && backwards.y == forwards.y) continue;
                    Point kingP = new Point(kPos[0], kPos[1]).subtract(backwards).add(forwards);
                    Point queenP = new Point(qPos[0], qPos[1]);
                    if (kingP.x == queenP.x && kingP.y == queenP.y) count++;
                }
            }
            System.out.println(count);
        }
    }

    public static class Point {
        int x;
        int y;

        public Point(int x, int y) {
            this.x = x;
            this.y = y;
        }

        public Point subtract(Point other) {
            return new Point(x - other.x, y - other.y);
        }

        public Point add(Point other) {
            return new Point(x + other.x, y + other.y);
        }

        @Override
        public String toString() {
            return x + " " + y;
        }

        public Point clone() {
            return new Point(x, y);
        }

        @Override
        public boolean equals(Object o) {
            if (this == o) return true;
            if (o == null || getClass() != o.getClass()) return false;
            Point point = (Point) o;
            return x == point.x && y == point.y;
        }

        @Override
        public int hashCode() {
            return Objects.hash(x, y);
        }
    }

}
