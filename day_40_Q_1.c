public class Main {
    public static void diagonalTraversal(int[][] matrix) {
        int rows = matrix.length;
        int cols = matrix[0].length;

        // Start diagonals from the first row
        for (int col = 0; col < cols; col++) {
            int r = 0;
            int c = col;

            while (r < rows && c >= 0) {
                System.out.print(matrix[r][c] + " ");
                r++;
                c--;
            }
        }

        // Start remaining diagonals from the first column
        for (int row = 1; row < rows; row++) {
            int r = row;
            int c = cols - 1;

            while (r < rows && c >= 0) {
                System.out.print(matrix[r][c] + " ");
                r++;
                c--;
            }
        }
    }

    public static void main(String[] args) {
        int[][] matrix = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        };

        diagonalTraversal(matrix);
    }
}
