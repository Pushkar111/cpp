package while_loop;

import java.util.Scanner;

public class AllPatterns {
    public static void main(String args[]) {
        int i, j, k, SIZE = 5;
        int choice;
        int no, flag = 1;
        int l = 2, m, odd = 1, even = 2;

        Scanner sc = new Scanner(System.in);

        System.out.println("-------------------------------------------------------------");
        System.out.println("|				Patterns			                        |");
        System.out.println("-------------------------------------------------------------");

        System.out.println("1. Square Pattern");
        System.out.println("2. Right Half Pyramid");
        System.out.println("3. Left Half Pyramid");
        System.out.println("4. Inverted Right Half Pyramid");
        System.out.println("5. Inverted Left Half Pyramid");
        System.out.println("6. Full Pyramid");
        System.out.println("7. Inverted Full Pyramid");
        System.out.println("8. Daimond Pattern");
        System.out.println("9. Hourglass Pattern");
        System.out.println("10. Rhombus Pattern");
        System.out.println("11. Hollow Square Pattern");
        System.out.println("12. Hollow Rhombus Pattern");
        System.out.println("13. Hollow Full Pyramid");
        System.out.println("14. Odd-Even Numbers");
        System.out.println("15. Unique Prime Diamond");
        System.out.println("16. Unique Odd Diamond");
        System.out.println("17. Unique Even Diamond");
        System.out.println("18. Right Half DIamond Pattern");
        System.out.println("19. Left Half Diamond Pattern");
        System.out.println("20. Palindrome Pattern");
        System.out.println("21. Zig-zag Pattern");
        System.out.println("22. Exit");
        System.out.println("-------------------------------------------------------------");

        System.out.print("\nEnter the choice : ");
        choice = sc.nextInt();

        switch (choice) {
            case 1:
                for (i = 1; i <= SIZE; i++) {
                    for (j = 1; j <= SIZE; j++) {
                        System.out.print("* ");
                    }
                    System.out.print("\n");
                }
                break;

            case 2:
                for (i = 1; i <= SIZE; i++) {
                    for (j = 1; j <= i; j++) {
                        System.out.print("* ");
                    }
                    System.out.print("\n");
                }
                break;

            case 3:
                for (i = 1; i <= SIZE; i++) {
                    for (k = (SIZE - i); k >= 1; k--) {
                        System.out.print(" ");
                    }
                    for (j = 1; j <= i; j++) {
                        System.out.print("*");
                    }
                    System.out.print("\n");
                }
                break;

            case 4:
                for (i = SIZE; i >= 1; i--) {
                    for (j = 1; j <= i; j++) {
                        System.out.print("* ");
                    }
                    System.out.print("\n");
                }
                break;

            case 5:
                for (i = SIZE; i >= 1; i--) {
                    for (k = (SIZE - i); k >= 1; k--) {
                        System.out.print(" ");
                    }

                    for (j = 1; j <= i; j++) {
                        System.out.print("*");
                    }
                    System.out.print("\n");
                }
                break;

            case 6:
                for (i = 1; i <= SIZE; i++) {
                    for (k = (SIZE - i); k >= 1; k--) {
                        System.out.print(" ");
                    }

                    for (j = 1; j <= i; j++) {
                        System.out.print("* ");
                    }
                    System.out.print("\n");
                }
                break;

            case 7:
                for (i = SIZE; i >= 1; i--) {
                    for (k = (SIZE - i); k >= 1; k--) {
                        System.out.print(" ");
                    }

                    for (j = 1; j <= i; j++) {
                        System.out.print("* ");
                    }
                    System.out.print("\n");
                }
                break;

            case 8:
                for (i = 1; i <= SIZE; i++) {
                    for (k = (SIZE - i); k >= 1; k--) {
                        System.out.print(" ");
                    }

                    for (j = 1; j <= i; j++) {
                        System.out.print("* ");
                    }
                    System.out.print("\n");
                }

                for (i = (SIZE - 1); i >= 1; i--) {
                    for (k = (SIZE - i); k >= 1; k--) {
                        System.out.print(" ");
                    }

                    for (j = 1; j <= i; j++) {
                        System.out.print("* ");
                    }
                    System.out.print("\n");
                }
                break;

            case 9:
                for (i = SIZE; i >= 1; i--) {
                    for (k = (SIZE - i); k >= 1; k--) {
                        System.out.print(" ");
                    }

                    for (j = 1; j <= i; j++) {
                        System.out.print("* ");
                    }
                    System.out.print("\n");
                }

                for (i = 2; i <= SIZE; i++) {
                    for (k = (SIZE - i); k >= 1; k--) {
                        System.out.print(" ");
                    }

                    for (j = 1; j <= i; j++) {
                        System.out.print("* ");
                    }
                    System.out.print("\n");
                }
                break;

            case 10:
                for (i = 1; i <= SIZE; i++) {
                    for (k = (SIZE - i); k >= 1; k--) {
                        System.out.print(" ");
                    }

                    for (j = 1; j <= SIZE; j++) {
                        System.out.print("* ");
                    }
                    System.out.print("\n");
                }
                break;

            case 11:
                for (i = 1; i <= SIZE; i++) {

                    for (j = 1; j <= SIZE; j++) {
                        if (i > 1 && i < SIZE && j > 1 && j < SIZE) {
                            System.out.print("  ");
                        } else {
                            System.out.print("* ");
                        }
                    }
                    System.out.print("\n");
                }
                break;

            case 12:
                for (i = 1; i <= SIZE; i++) {
                    for (k = (SIZE - i); k >= 1; k--) {
                        System.out.print(" ");
                    }

                    for (j = 1; j <= SIZE; j++) {
                        if (i > 1 && i < SIZE && j > 1 && j < SIZE) {
                            System.out.print("  ");
                        } else {
                            System.out.print("* ");
                        }
                    }
                    System.out.print("\n");
                }
                break;

            case 13:
                for (i = 0; i < 5; i++) {
                    for (k = 0; k <= 2 * (5 - i) - 1; k++) {
                        System.out.print(" ");
                    }

                    for (j = 0; j < 2 * i + 1; j++) {

                        if (j == 0 || j == 2 * i || i == (5 - 1)) {
                            System.out.print("* ");
                        } else {
                            System.out.print("  ");
                        }
                    }
                    System.out.print("\n");
                }
                break;

            case 14:
                for (i = 1; i <= SIZE; i++) {
                    if (i % 2 == 0) {
                        for (j = 1; j <= i; j++) {
                            System.out.print(j * 2 + " ");
                            ;
                        }
                    } else {
                        for (j = 1; j <= i; j++) {
                            System.out.print((j * 2) - 1 + " ");
                        }
                    }
                    System.out.print("\n");
                }
                break;
            case 15:
                for (i = 1; i <= SIZE; i++) {
                    for (k = (SIZE - i); k >= 1; k--) {
                        System.out.print(" ");
                    }

                    for (j = 1; j <= i;) {
                        no = l;
                        flag = 1;
                        for (m = 2; m < no; m++) {
                            if (no % m == 0) {
                                flag = 0;
                                break;
                            }
                        }
                        if (flag == 1) {
                            System.out.print(no + " ");
                            j++;
                        }
                        l++;
                    }
                    System.out.print("\n");
                }

                for (i = 4; i >= 1; i--) {
                    for (k = (SIZE - i); k >= 1; k--) {
                        System.out.print(" ");
                    }

                    for (j = 1; j <= i;) {
                        no = l;
                        flag = 1;
                        for (m = 2; m < no; m++) {
                            if (no % m == 0) {
                                flag = 0;
                                break;
                            }
                        }
                        if (flag == 1) {
                            System.out.print(no + " ");
                            j++;
                        }
                        l++;
                    }
                    System.out.print("\n");
                }
                break;

            case 16:
                for (i = 1; i <= SIZE; i++) {
                    for (k = (SIZE - i); k >= 1; k--) {
                        System.out.print(" ");
                    }

                    for (j = 1; j <= i;) {
                        no = odd;
                        flag = 1;
                        for (m = 1; m < no; m++) {
                            if (no % 2 == 0) {
                                flag = 0;
                                break;
                            }
                        }
                        if (flag == 1) {
                            System.out.print(no + " ");
                            j++;
                        }
                        odd++;
                    }
                    System.out.print("\n");
                }

                for (i = 4; i >= 1; i--) {
                    for (k = (SIZE - i); k >= 1; k--) {
                        System.out.print(" ");
                    }

                    for (j = 1; j <= i;) {
                        no = odd;
                        flag = 1;
                        for (m = 1; m < no; m++) {
                            if (no % 2 == 0) {
                                flag = 0;
                                break;
                            }
                        }
                        if (flag == 1) {
                            System.out.print(no + " ");
                            j++;
                        }
                        odd++;
                    }
                    System.out.print("\n");
                }
                break;

            case 17:
                for (i = 1; i <= SIZE; i++) {
                    for (k = (SIZE - i); k >= 1; k--) {
                        System.out.print(" ");
                    }

                    for (j = 1; j <= i;) {
                        no = even;
                        flag = 1;
                        for (m = 1; m < no; m++) {
                            if (no % 2 != 0) {
                                flag = 0;
                                break;
                            }
                        }
                        if (flag == 1) {
                            System.out.print(no + " ");
                            j++;
                        }
                        even++;
                    }
                    System.out.print("\n");
                }

                for (i = 4; i >= 1; i--) {
                    for (k = (SIZE - i); k >= 1; k--) {
                        System.out.print(" ");
                    }

                    for (j = 1; j <= i;) {
                        no = even;
                        flag = 1;
                        for (m = 1; m < no; m++) {
                            if (no % 2 == 0) {
                                flag = 0;
                                break;
                            }
                        }
                        if (flag == 1) {
                            System.out.print(no + " ");
                            j++;
                        }
                        even++;
                    }
                    System.out.print("\n");
                }
                break;

            case 18:
                for (i = 1; i <= SIZE; i++) {
                    for (j = 1; j <= i; j++) {
                        System.out.print("*");
                    }
                    System.out.print("\n");
                }
                for (i = SIZE - 1; i >= 1; i--) {
                    for (j = 1; j <= i; j++) {
                        System.out.print("*");
                    }
                    System.out.print("\n");
                }
                break;

            case 19:
                for (i = 1; i <= SIZE; i++) {
                    for (k = (SIZE - i); k >= 1; k--) {
                        System.out.print(" ");
                    }
                    for (j = 1; j <= i; j++) {
                        System.out.print("*");
                    }
                    System.out.print("\n");
                }

                for (i = SIZE - 1; i >= 1; i--) {
                    for (k = (SIZE - i); k >= 1; k--) {
                        System.out.print(" ");
                    }

                    for (j = 1; j <= i; j++) {
                        System.out.print("*");
                    }
                    System.out.print("\n");
                }
                break;

            case 20:
                for (i = 1; i <= SIZE; i++) {
                    k = i;
                    for (j = 1; j <= (SIZE - i); j++) {
                        System.out.print("  ");
                    }
                    for (; j <= SIZE; j++) {
                        System.out.print(k + " ");
                        k--;
                    }
                    k = 1;
                    for (; j < (SIZE + i); j++) {
                        k++;
                        System.out.print(k + " ");
                    }

                    for (; j <= (2 * SIZE - 1); j++) {
                        System.out.print(" ");
                    }
                    System.out.println();
                }
                break;

            case 21:
                for (i = 1; i <= 3; i++) {
                    for (j = 1; j <= 10; j++) {
                        if (((i + j) % 4 == 0) || ((i == 2) && (j % 4 == 0))) {
                            System.out.print("* ");
                        } else {
                            System.out.print(" ");
                        }
                    }
                    System.out.println();
                }
                break;
            case 22:
                exit(0);
        }
    }
}