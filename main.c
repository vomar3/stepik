/*https://stepik.org/lesson/604863/step/3?unit=599967

#include <stdio.h>

int main(){
    int number, count = 0, count_true = 0;
    while(1 == scanf("%d", &number)){
        count += 1;
        if(number > 170){
            count_true += 1;
        }
    }

    printf("%d %d", count, count_true);

    return 0;
}
*/

/*
https://stepik.org/lesson/603569/step/1?unit=598630
#include <stdio.h>

void factorial(int number);

int main(){
    int number;
    scanf("%d", &number);
    factorial(number);
    return 0;
}

void factorial(int number){
    int composition = 1;
    for (int count = 2; count <= number; ++count){
        composition *= count;
    }
    printf("%d", composition);
}
*/

/*
https://stepik.org/lesson/603569/step/2?unit=598630
#include <stdio.h>

int main(){
    int nums, number, mini = 100000000;
    scanf("%d", &nums);

    for (int count = 0; count < nums; ++count){
        scanf("%d", &number);
        if (number < mini){
            mini = number;
        }
    }
    printf("%d", mini);
    return 0;
}
*/

/*
https://stepik.org/lesson/603569/step/3?unit=598630
#include <stdio.h>

int reverse(int number);
int main(){
    int number;
    scanf("%d", &number);
    if(number == reverse(number)){
        printf("YES");
    }else{
        printf("NO");
    }

    return 0;
}

int reverse(int number){
    int reversed = 0;
    while(number > 0){
        reversed = reversed * 10 + number % 10;
        number /= 10;
    }
    return reversed;
}
*/

/*
https://stepik.org/lesson/603569/step/4?unit=598630
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main(){
    int number, degree, answer = 1;
    scanf("%d %d", &number, &degree);

    while(pow(2,degree) <= number) {

        int new_number = number;
        for (int c = 2; c <= (int) (sqrt(number) + 1); ++c) {
            if (number % (int) pow(c, degree) == 0) {
                number /= (int) (pow(c, degree));
                printf("%d %d\n", c, number);
                answer *= c;
                break;
            }
        }
        if (new_number == number) {
            printf("-1");
            exit(0);
        }

    }
    if (number == 1) printf("%d", answer);
    else printf("-1");
    return 0;
}
*/

/*
https://stepik.org/lesson/603569/step/5?unit=598630
#include <stdio.h>

int main(){
    int number, num, count = 0;
    scanf("%d %d", &num, &number);
    int new_num = number;

    while(number > 0){
        if (number % 10 == num){
            count += 1;
        }
        number /= 10;
    }

    printf("%d %d %d", num, new_num, count);
    return 0;
}
*/

/*
https://stepik.org/lesson/603569/step/6?unit=598630
#include <stdio.h>

int main(){
    int c, n, count = 0;
    scanf("%d", &n);
    char b;
    printf("%d", n);
    while ((c = getchar()) != EOF) {

        if (c == n + 48){
            count += 1;
        }
        printf("%c", c);
    }
    printf(" %d", count);
    return 0;
}
*/

/*
https://stepik.org/lesson/603569/step/7?unit=598630
#include <stdio.h>
#include <stdlib.h>

int main(){
    int symbol, left = 0, right = 0;
    while((symbol = getchar()) != EOF){
        if (symbol == '('){
            left += 1;
        }else if(symbol == ')' && left == 0){
            printf("NO");
            exit(0);
        }else if(symbol == ')' && left <= right){
            printf("NO");
            exit(0);
        }else if(symbol == ')' && left > right){
            right += 1;
        }
    }
    if(left == right){
        printf("YES");
    }else{
        printf("NO");
    }

    return 0;
}
*/

/*
https://stepik.org/lesson/606718/step/9?unit=601853
#include <stdio.h>

int main(){
    int a[5];

    for(int i = 0; i < 5; ++i){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < 5; ++i){
        printf("%d ", a[i]);
    }

    return 0;
}
*/

/*
https://stepik.org/lesson/607326/step/1?unit=602467
#include <stdio.h>

int main(){
    int price;
    int count[9] = {};
    int money[9] = {1, 2, 5, 10, 50, 100, 500, 1000, 5000};


    scanf("%d", &price);
    while(price > 0){
        for(int i = 8; i >= 0; --i){
            if (price >= money[i]){
                count[i] += 1;
                price -= money[i];
                break;
            }
        }
    }

    for(int i = 8; i >= 0; --i){
        printf("%d %d\n", money[i], count[i]);
    }

    return 0;
}
*/

/*
https://stepik.org/lesson/607326/step/2?unit=602467
#include <stdio.h>

int sum(int *a, int n){
    for (int i = 0; i < n; ++i) {
        if (a[0] != a[i]){
            return 0;
        }
    }
    return 1;
}

int main(){
    int number, sum_boyar = 0;
    scanf("%d", &number);
    int array[number];

    for(int i = 0; i < number; ++i){
        scanf("%d", &array[i]);
    }

    do {
        for (int count = 0; count < number - 1; ++count) {
            int new = array[count] + array[count + 1];
            if (new % 2 == 0) {
                array[count] = new / 2;
                array[count + 1] = new / 2;
            } else {
                array[count] = new / 2;
                array[count + 1] = new / 2;
                sum_boyar += 1;
            }
        }
        int new = array[0] + array[number - 1];
        if (new % 2 == 0) {
            array[0] = new / 2;
            array[number - 1] = new / 2;
        } else {
            array[0] = new / 2;
            array[number - 1] = new / 2;
            sum_boyar += 1;
        }
    }while(sum(array, number) == 0);

    printf("%d %d", sum_boyar, array[0]);

    return 0;
}

*/

/*
 * https://stepik.org/lesson/621926/step/9?unit=617465
 #include <stdio.h>

#define ROWS 3
#define COLUMNS 3

int main()
{
    int a[ROWS][COLUMNS];

    // чтение массива
    for(int i = 0; i < ROWS; i++) {
        // чтение одной строки a[i]
        for(int j = 0; j < COLUMNS; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    a[1][2] *= 10;

    // печать массива
    for(int i = 0; i < ROWS; i++) {
        // печать одной строки a[i]
        for(int j = 0; j < COLUMNS; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
 */

/*
 * https://stepik.org/lesson/690132/step/1?unit=689662
 * #include <stdio.h>

#define SIZE 3

int main(){
    int array[SIZE][SIZE];
    int summ = 0;

    for (int i = 0; i < SIZE; ++i){
        for (int j = 0; j < SIZE; ++j){
            scanf("%d", &array[i][j]);
            summ += array[i][j];
        }
    }

    printf("%d", summ);

    return 0;
}
 */


/*
 * https://stepik.org/lesson/690132/step/3?unit=689662
 *
 * #include <stdio.h>

#define SIZE 3

int sum_row(int a[3][3], int irow);

int main(){
    int array[SIZE][SIZE];

    for (int i = 0; i < SIZE; ++i){
        for (int j = 0; j < SIZE; ++j){
            scanf("%d", &array[i][j]);
        }
    }

    printf("%d", sum_row(array, 1));

    return 0;
}

int sum_row(int a[3][3], int irow){
    int summ = 0;

    for (int i = 0; i < 3; ++i){
        summ += a[irow][i];
    }

    return summ;
}
 */

/*
 * https://stepik.org/lesson/690132/step/4?unit=689662
 *
 * #include <stdio.h>

#define SIZE 3

int sum_col(int a[3][3], int icol);

int main(){
    int array[SIZE][SIZE];

    for (int i = 0; i < SIZE; ++i){
        for (int j = 0; j < SIZE; ++j){
            scanf("%d", &array[i][j]);
        }
    }

    printf("%d", sum_col(array, 2));

    return 0;
}

int sum_col(int a[3][3], int icow){
    int summ = 0;

    for (int i = 0; i < 3; ++i){
        summ += a[i][icow];
    }

    return summ;
}
 */

/*
 * https://stepik.org/lesson/690132/step/5?unit=689662
 *
 * #include <stdio.h>

#define SIZE 3

int sum_diag(int a[3][3]);

int main(){
    int array[SIZE][SIZE];

    for (int i = 0; i < SIZE; ++i){
        for (int j = 0; j < SIZE; ++j){
            scanf("%d", &array[i][j]);
        }
    }

    printf("%d", sum_diag(array));

    return 0;
}

int sum_diag(int a[3][3]){
    int summ = 0;

    for (int i = 0; i < 3; ++i){
        summ += a[i][i];
    }

    return summ;
}

 */

/*
 * https://stepik.org/lesson/690132/step/6?unit=689662
 *
 * #include <stdio.h>

#define SIZE 3

int sum_diag2(int a[3][3]);

int main(){
    int array[SIZE][SIZE];

    for (int i = 0; i < SIZE; ++i){
        for (int j = 0; j < SIZE; ++j){
            scanf("%d", &array[i][j]);
        }
    }

    printf("%d", sum_diag2(array));

    return 0;
}

int sum_diag2(int a[3][3]){
    int summ = 0;

    for (int i = 0; i < 3; ++i){
        summ += a[2 - i][i];
    }

    return summ;
}
 */

/*
 *https://stepik.org/lesson/621927/step/3?unit=617466

#include <stdio.h>
#include <stdbool.h>

#define SIZE 3

int sum_diag2(int a[3][3]);

int sum_row(int a[3][3], int irow);

int sum_col(int a[3][3], int icow);

int sum_diag(int a[3][3]);

int main() {
    int array[SIZE][SIZE];

    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            scanf("%d", &array[i][j]);
        }
    }

    bool flag = true;
    int element = sum_diag(array);

    for (int i = 0; i < SIZE; ++i) {
        if ((sum_row(array, i) != element) || (sum_col(array, i) != element)) {
            flag = false;
        }
    }

    if (element == sum_diag2(array) && flag == true) {
        printf("MAGIC");
    } else {
        printf("NO");
    }

    return 0;
}

int sum_row(int a[3][3], int irow) {
    int summ = 0;

    for (int i = 0; i < 3; ++i) {
        summ += a[irow][i];
    }

    return summ;
}

int sum_col(int a[3][3], int icow) {
    int summ = 0;

    for (int i = 0; i < 3; ++i) {
        summ += a[i][icow];
    }

    return summ;
}

int sum_diag(int a[3][3]) {
    int summ = 0;

    for (int i = 0; i < 3; ++i) {
        summ += a[i][i];
    }

    return summ;
}

int sum_diag2(int a[3][3]) {
    int summ = 0;

    for (int i = 0; i < 3; ++i) {
        summ += a[2 - i][i];
    }

    return summ;
}
*/

/*
 *https://stepik.org/lesson/621927/step/4?thread=solutions&unit=617466

#include <stdio.h>

void number_mult(int k, int rows, int cols, int a[][cols]);

int main() {
    int rows, columns;
    scanf("%d %d", &rows, &columns);

    int array[rows][columns];

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            scanf("%d", &array[i][j]);
        }
    }

    int number;
    scanf("%d", &number);

    number_mult(number, rows, columns, array);

    return 0;
}

void number_mult(int k, int rows, int cols, int a[][cols]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            a[i][j] *= k;
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
*/

/*
 *https://stepik.org/lesson/621927/step/5?unit=617466

#include <stdio.h>

void add(int rows, int cols, int a[][cols], int b[][cols]);
void write(int rows, int cols, int a[][cols]);

int main() {
    int rows, columns;
    scanf("%d %d", &rows, &columns);

    int array[rows][columns];
    int array2[rows][columns];

    write(rows, columns, array);
    write(rows, columns, array2);
    add(rows, columns, array, array2);

    return 0;
}

void add(int rows, int cols, int a[][cols], int b[][cols]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            a[i][j] += b[i][j];
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void write(int rows, int cols, int a[][cols]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            scanf("%d", &a[i][j]);
        }
    }
}
 */

/*
 * https://stepik.org/lesson/621927/step/6?unit=617466

#include <stdio.h>

#include <stdlib.h>

#define SIZE 9

void write_array(int size, int a[][size]);

int check_square(int a[9][9], int i0, int j0);

int main() {

    int array[SIZE][SIZE];
    write_array(SIZE, array);

    for (int i = 0; i < 9; i += 3) {
        for (int j = 0; j < 9; j += 3) {
            if (check_square(array, i, j) == 0){
                printf("NO");
                exit(0);
            }
        }
    }

    printf("YES");

    return 0;
}

void write_array(int size, int a[][size]) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            scanf("%d", &a[i][j]);
        }
    }
}

int check_square(int a[9][9], int i0, int j0) {
    int check_array[9] = {0};
    int sum = 0;

    for (int i = i0; i < i0 + 3; ++i) {
        for (int j = j0; j < j0 + 3; ++j) {
            sum += a[i][j];

            if (check_array[a[i][j] - 1] == 0){
                check_array[a[i][j] - 1] = a[i][j];
            } else {
              return 0;
            }
        }
    }

    return 1;
}

 */

/*
 * https://stepik.org/lesson/621929/step/1?unit=617468

#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);

    char line[size + 1];

    int sum = 0;
    for (int i = 0; i < size; ++i) {
        scanf("%s", line);
        for (int j = 0; j < size; ++j) {
            if (line[j] == '*') {
                sum += 1;
            }
        }
    }

    printf("%d", sum);

    return 0;
}
  */

// МОДУЛЬ 11 - СТРОКИ

/* https://stepik.org/lesson/275992/step/10?unit=257133
 *

#include <stdio.h>
#include <string.h>

int main(){

    char direction[10];
    int x = 0, y = 0, step;

    while(1 == scanf("%9s", direction)) {
        scanf("%d", &step);

        if (strcmp(direction, "North") == 0) {
            x += step;
        }else if((strcmp(direction, "South") == 0)) {
            x -= step;
        }else if((strcmp(direction, "East") == 0)) {
            y += step;
        }else {
            y -= step;
        }

    }

    printf("%d %d", x, y);

    return 0;
}
 */

/* https://stepik.org/lesson/640234/step/2?unit=636753
 *
 * char * my_strcat (char *dest, const char *src){
    int size_dest = strlen(dest);
    int size_src = strlen(src);

    for (int i = 0; i < size_src; ++i){
        dest[i + size_dest] = src[i];
    }

    dest[size_dest + size_src] = '\0';

    return dest;
}
 */

/* https://stepik.org/lesson/640234/step/3?unit=636753
 *
#include <stdio.h>
#include <string.h>

int main() {
    char word[1001], answer[1001];
    int max_size = 0;

    while(1 == scanf("%1000s", word)) {
        if (strlen(word) > max_size) {
            max_size = strlen(word);

            strcpy(answer, word);
            // в answer копируется word
        }
    }

    printf("%1000s %d", answer, max_size);

    return 0;
}
 */

/* https://stepik.org/lesson/640234/step/4?unit=636753
 *
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char word[1001];

    while(1 == scanf("%1000s", word)) {
        if (strcmp(word, "bomb") == 0){
        // strcmp - проверка на то, что word == bomb
            printf("YES");
            exit(0);
        }
    }

    printf("NO");

    return 0;
}
 */

/* https://stepik.org/lesson/640234/step/5?unit=636753
 *
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char word[1001];

    while(1 == scanf("%1000s", word)) {
        if (strstr(word, "bomb") != NULL){
            printf("YES");
            exit(0);
        }
    }

    printf("NO");

    return 0;
}
 */

/* https://stepik.org/lesson/640234/step/6?unit=636753
 *
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int main() {
    char word[1001];

    while(1 == scanf("%1000s", word)) {

        for (int i = 0; i < strlen(word); ++i){
        // strlen - длина слова
            word[i] = (char)tolower(word[i]);
        }
        // tolower - возвращает букву в нижнем регистре

        if (strstr(word, "bomb") != NULL){
            printf("YES");
            exit(0);
        }
    }

    printf("NO");

    return 0;
}
 */

/* крч решение - подгон по всей видимости, потому что надо прыгать указателем
// а у меня ничего не получается с этим, но это решение дает 10/10
// * https://stepik.org/lesson/640234/step/7?unit=636753
#include <stdio.h>
#include <string.h>


int main() {
    char word[1001];
    int count = 0;

    while(1 == scanf("%1000s", word)) {

        char *p;

        for (p = word; *p != '\0'; ++p) {
            if (strstr(word, "bomb") != NULL){
                // strstr проверяет, что в word есть подслово "bomb"
                // strstr передает указатель на начало слова, которое ищем

                p += 4;
                count += 1;
            }
        }
    }

    printf("%d", count);

    return 0;
}
 */

//# 12 МОДУЛЬ

/* https://stepik.org/lesson/832569/step/1?unit=836145
 *
 * int cmp_int(const void * p1, const void * p2){
    int x = *(int *)p1;
    int y = *(int *)p2;

    if (x > y) {
        return 1;
    } else if (x < y) {
        return -1;
    } else {
        return 0;
    }
}
 */

/* https://stepik.org/lesson/832569/step/3?unit=836145
 *
#include <stdio.h>
#include <stdlib.h>

int check_numbers(const void *p1, const void *p2);

int main() {

    int number;
    int array[1000];
    scanf("%d", &number);

    for (int i = 0; i < number; ++i) {
        scanf("%d", &array[i]);
    }

    qsort(array, number, sizeof(int), check_numbers);

    for (int i = 0; i < number; ++i) {
        printf("%d ", array[i]);
    }

    return 0;
}

int check_numbers(const void *p1, const void *p2){
    int first = *(int *)p1;
    int second = *(int *)p2;

    if (first > second) {
        return 1;
    } else if (first < second) {
        return -1;
    } else {
        return 0;
    }
}
 */

/* https://stepik.org/lesson/832569/step/4?unit=836145
 *

#include <stdio.h>
#include <stdlib.h>

int check_numbers(const void *p1, const void *p2);

int main() {

    int number;
    int array[1000];
    scanf("%d", &number);

    for (int i = 0; i < number; ++i) {
        scanf("%d", &array[i]);
    }

    qsort(array, number, sizeof(int), check_numbers);

    for (int i = 0; i < number; ++i) {
        printf("%d ", array[i]);
    }

    return 0;
}

int check_numbers(const void *p1, const void *p2){
    int first = *(int *)p1;
    int second = *(int *)p2;

    if (first > second) {
        return -1;
    } else if (first < second) {
        return 1;
    } else {
        return 0;
    }
}
 */

/* https://stepik.org/lesson/832569/step/5?unit=836145
 *
 *
#include <stdio.h>
#include <stdlib.h>

int check_numbers(const void *p1, const void *p2);

int main() {

    int number;
    float array[1000];
    scanf("%d", &number);

    for (int i = 0; i < number; ++i) {
        scanf("%f", &array[i]);
    }

    qsort(array, number, sizeof(float), check_numbers);

    for (int i = 0; i < number; ++i) {
        printf("%.2f ", array[i]);
    }

    return 0;
}

int check_numbers(const void *p1, const void *p2){
    float first = *(float *)p1;
    float second = *(float *)p2;

    return (first > second) - (second > first);
}
 */

/* https://stepik.org/lesson/832569/step/6?unit=836145
 *
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 1000

int check_symbols(const void *p1, const void *p2);

int main() {
    char array[N + 1];
    int count = 0;

    for (int i = 0; i < N; ++i) {
        scanf("%c", &array[i]);

        if (array[i] != '.') {
            count += 1;

        } else {
            qsort(array, count, sizeof(char), check_symbols);

            for (int j = 0; j < count + 1; ++j) {
                printf("%c", array[j]);
            }

            exit(0);
        }
    }

    return 0;
}

int check_symbols(const void * p1, const void * p2)
{
    return strcmp(p1, p2);
}
*/

/* https://stepik.org/lesson/832569/step/7?unit=836145

#include <stdio.h>
#include <stdlib.h>

int check_numbers(const void *p1, const void *p2);

int main() {

    int numbers;
    scanf("%d", &numbers);
    int array[numbers];

    for (int i = 0; i < numbers; ++i) {
        scanf("%d", &array[i]);
    }

    qsort(array, numbers, sizeof(int), check_numbers);

    for (int i = 0; i < numbers; ++i) {
        printf("%d ", array[i]);
    }

    return 0;
}

int check_numbers(const void *p1, const void *p2) {
    int first = *(int *)p1;
    int second = *(int *)p2;

    while (first > 0 || second > 0) {
        int first_l = first % 10;
        int second_l = second % 10;

        if (first_l != second_l) {
            return first_l - second_l;
        }

        first /= 10;
        second /= 10;
    }

    return 0;
}
 */

/* https://stepik.org/lesson/832569/step/8?unit=836145
 *
 *
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int check_numbers(const void *p1, const void *p2);

#define inf INT_MAX

int main() {

    int numbers;
    scanf("%d", &numbers);
    int array[numbers], array2[numbers];

    for (int i = 0; i < numbers; ++i) {
        scanf("%d", &array[i]);
        array2[i] = inf;
        if (array[i] % 2 != 0) {
            array2[i] = array[i];
            array[i] = inf;
        }
    }

    qsort(array, numbers, sizeof(int), check_numbers);

    int count = 0;
    for (int i = 0; i < numbers; ++i) {
        if (array2[i] != inf) {
            printf("%d ", array2[i]);
        } else {
            printf("%d ", array[count]);
            ++count;
        }
    }

    return 0;
}

int check_numbers(const void *p1, const void *p2) {
    int first = *(int *)p1;
    int second = *(int *)p2;

    return first - second;
}

 */
/* https://stepik.org/lesson/832569/step/9?unit=836145

#include <stdlib.h>
#include <stdio.h>

struct Point {
    int x;
    int y;
};

int cmp_Point(const void * p1, const void * p2);

int main()
{
    struct Point a, b;
    scanf("%d%d", &a.x, &a.y);
    scanf("%d%d", &b.x, &b.y);

    int res = cmp_Point(&a, &b);

    if (res < 0)
        printf("<\n");
    else if (res > 0)
        printf(">\n");
    else
        printf("=\n");

    return 0;
}

#include <math.h>
int cmp_Point(const void * p1, const void * p2) {
    struct Point *first = (struct Point*)p1;
    struct Point *second = (struct Point*)p2;

    float f_dist = sqrt(pow(first->x, 2) + pow(first->y, 2));
    float s_dist = sqrt(pow(second->x, 2) + pow(second->y, 2));

    return (f_dist > s_dist) - (s_dist > f_dist);
}

 */

/* https://stepik.org/lesson/832569/step/10?unit=836145

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int check_numbers(const void *p1, const void *p2);

typedef struct Point {
    int x;
    int y;
    double distance;
} Point;

int main() {

    int number;
    scanf("%d", &number);
    Point point[number];

    for (int i = 0; i < number; ++i) {
        scanf("%d%d", &point[i].x, &point[i].y);
        point[i].distance = sqrt(pow(point[i].x, 2) + pow(point[i].y, 2));
    }

    qsort(point, number, sizeof(Point), check_numbers);

    for (int i = 0; i < number; ++i) {
        printf("%d %d\n", point[i].x, point[i].y);
    }

    return 0;
}

int check_numbers(const void *p1, const void *p2) {
    Point *point1 = (Point *)p1;
    Point *point2 = (Point *)p2;

    if (point1->distance != point2->distance) {
        return (point1->distance > point2->distance) - (point1->distance < point2->distance);
    } else {
        if (point1->x != point2->x) {
            return point1->x > point2->x;
        } else {
            return point1->y > point2->y;
        }
    }
}

 */

#include <stdlib.h>