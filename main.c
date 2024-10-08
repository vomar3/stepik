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

/* https://stepik.org/lesson/341699/step/6?unit=325260
 *
#include <stdio.h>
#include <string.h>

void replace(char *dst, const char *src);

int main() {

    char line[1001], new_line[1001];

    while (fgets(line, sizeof line, stdin) != NULL) { // берет всю строчку, надо почитать про функцию
        replace(new_line, line);
        printf("%s", new_line);
    }

    return 0;
}

void replace(char *dst, const char *src) {

    char *bomb = NULL; // Указатель на бомбу, изначально = NULL;
    char *d = dst; // Указатель на новую строчку, изначально просто в начале стоит
    char *s = (char *) src; // Указатель по тому, где мы бегаем по src

    bomb = strstr(s, "bomb"); // Поиск участка "bomb" в строке src
    // Если найдет, то вернет указатель на то, где находится, иначе = NULL

    while (bomb != NULL) {
        size_t n = bomb - s; // Расстояние от начала строчки до найденной бомбы
        strncpy(d, s, n); // Копируем из s в d n элементов

        d += n; // двигаем указатель на д на n элементов (конец строки)
        strcpy(d, "watermelon"); // копируем в конец d "watermelon"

        d += 10; // переход на 10 элементов за арбузом
        s = bomb + 4; // перепрыгивается бомба

        bomb = strstr(s, "bomb");
    }

    strcpy(d, s); // докопировалась ласт часть
    d += '\0'; // конец строчки
}
 */

/* https://stepik.org/lesson/652838/step/10?unit=649753 (УЖАСНЫЙ КОД)
 *
char * replace (const char * src) {
    // Можно хотя бы немного сделать лучше код, посчитав количетство бомб заранее
    // И в маллоке не умножать на 250, а + count * (water - bomb) + 1

    size_t water = strlen("watermelon");
    size_t bomb = strlen("bomb");

    //char *new_line = strdup(src); // Выделение памяти под новую строку и копирование предыдущей

    char *new_line = malloc(250 * (1 + strlen(src)));
    strcpy(new_line, src);
    // Две строчки выше делают то же самое, что и strdup

    char *get_bomb = strstr(new_line, "bomb");

    while (get_bomb != NULL) {
        //new_line = realloc(new_line, strlen(new_line) + (water - bomb) + 1);
        memmove(get_bomb + water, get_bomb + bomb, strlen(get_bomb + bomb) + 1);
        memcpy(get_bomb, "watermelon", water);
        get_bomb = strstr(get_bomb + water, "bomb");
    }

    // new_line += '\0';
    return new_line;
}
*/

/* https://stepik.org/lesson/308217/step/4?unit=290332 (КОД ГОВНА, НУЖНА ОПТИМИЗАЦИЯ ФОРА)

#include <string.h>
void elong_add (const Decimal * a, const Decimal * b, Decimal * res) {
    unsigned int max_n;
    if (b->n > a->n) {
        max_n = b->n;
    } else {
        max_n = a->n;
    }

    res->size = max_n + 2;
    res->a = malloc(res->size);
    memset(res->a, 0, res->size);
    res->n = -1;

    unsigned int plus = 0;
    for (int i = 0; i <= max_n; ++i) {
        if (b->n < i) {
            res->a[i] = (a->a[i] + plus) % 10;
            res->n += 1;

            if (a->a[i] + plus >= 10) {
                plus = 1;
            } else {
                plus = 0;
            }

            if (plus >= 10 && a->n == i) {
                res->a[i + 1] = 1;
                res->n += 1;
            }

        } else if (a->n < i) {
            res->a[i] = (b->a[i] + plus) % 10;
            res->n += 1;

            if (b->a[i] + plus >= 10) {
                plus = 1;
            } else {
                plus = 0;
            }

            if (plus >= 10 && b->n == i) {
                res->a[i + 1] = 1;
                res->n += 1;
            }

        } else {

            res->a[i] = (a->a[i] + b->a[i] + plus) % 10;

            if (a->a[i] + b->a[i] + plus >= 10) {
                plus = 1;
            } else {
                plus = 0;
            }

            res->n += 1;

            if (plus == 1 && a->n == i && b->n == i) {
                res->a[i + 1] = 1;
                res->n += 1;
            }
        }
    }
}

 */

/* https://stepik.org/lesson/308217/step/6?unit=290332 (ТАК ЖЕ ПЛОХО, НО РАБОТАЕТ)

Decimal * elong_add (const Decimal * a, const Decimal * b) {
    Decimal *res = malloc(sizeof(Decimal));

    unsigned int max_n;
    if (b->n > a->n) {
        max_n = b->n;
    } else {
        max_n = a->n;
    }

    res->size = max_n + 2;
    res->a = malloc(res->size);
    memset(res->a, 0, res->size);
    res->n = -1;

    unsigned int plus = 0;
    for (int i = 0; i <= max_n; ++i) {
        if (b->n < i) {
            res->a[i] = (a->a[i] + plus) % 10;
            res->n += 1;

            if (a->a[i] + plus >= 10) {
                plus = 1;
            } else {
                plus = 0;
            }

            if (plus >= 10 && a->n == i) {
                res->a[i + 1] = 1;
                res->n += 1;
            }

        } else if (a->n < i) {
            res->a[i] = (b->a[i] + plus) % 10;
            res->n += 1;

            if (b->a[i] + plus >= 10) {
                plus = 1;
            } else {
                plus = 0;
            }

            if (plus >= 10 && b->n == i) {
                res->a[i + 1] = 1;
                res->n += 1;
            }

        } else {

            res->a[i] = (a->a[i] + b->a[i] + plus) % 10;

            if (a->a[i] + b->a[i] + plus >= 10) {
                plus = 1;
            } else {
                plus = 0;
            }

            res->n += 1;

            if (plus == 1 && a->n == i && b->n == i) {
                res->a[i + 1] = 1;
                res->n += 1;
            }
        }
    }

    return res;
}

 */

/* https://stepik.org/lesson/308217/step/7?unit=290332

#define CHAR_TO_INT(c) (int)(c - '0')

LongN getLongN(char *s) {
    LongN answer;

    answer.sign = s[0];

    if ((answer.sign >= '0' && answer.sign <= '9') || answer.sign == '+') {
        if (answer.sign == '+') {
            s++;
        }
        answer.sign = 0;
    } else {
        answer.sign = 1;
        s++;
    }

    answer.n = (strlen(s) + 1) / 2;
    answer.dig = malloc(sizeof(char) * answer.n);

    for (int i = strlen(s) - 1, j = 0; i >= 0; i -= 2, ++j) {
        if (i == 0) {
            answer.dig[j] = (char)(CHAR_TO_INT(s[i]));
            return answer;
        }
        answer.dig[j] = CHAR_TO_INT(s[i]) + CHAR_TO_INT(s[i - 1]) * 10;
    }


    return answer;
}
 */

/* https://stepik.org/lesson/308217/step/7?unit=290332 (без функции)

LongN getLongN(char *s) {
    LongN answer;

    answer.sign = s[0];

    if ((answer.sign >= '0' && answer.sign <= '9') || answer.sign == '+') {
        if (answer.sign == '+') {
            s++;
        }
        answer.sign = 0;
    } else {
        answer.sign = 1;
        s++;
    }

    answer.n = (strlen(s) + 1) / 2;
    answer.dig = malloc(sizeof(char) * answer.n);

    for (int i = strlen(s) - 1, j = 0; i >= 0; i -= 2, ++j) {
        if (i == 0) {
            answer.dig[j] = (int)(s[i] - '0');
            return answer;
        }
        answer.dig[j] = (int)(s[i] - '0') + (int)(s[i - 1] - '0') * 10;
    }

    return answer;
}

 */

/* Улучшенный стек

#include <stdio.h>

#define N 100

typedef struct Stack {
    int numbers[N];
    unsigned int size;
} Stack;

void stack_init (Stack *st); // Создает стек длины 0, чтобы изначально не было мусора

void stack_push (Stack *st, int number); // Добавляет в верхушку стека (если он не полон) число number

void stack_print(Stack *st); // Вывод стека

int stack_pop(Stack *st); // Удаление из стека верхнего элемента и возвращение его

int stack_is_empty(Stack *st); // Проверка на то, что стек пустой

int stack_is_full(Stack *st); // Проверка на то, что стек полон

void stack_clear(Stack *st); // Возвращение верхнего элемента

int stack_get (Stack * st); // Возвращение верхний элемент стека без удаления

unsigned int stack_size (Stack * st); // Возвращает количество элементов, лежащих в стеке

void try_to_stack_get(Stack *st); // Пытается вызвать функцию stack_get

void try_to_stack_pop(Stack *st); // Пытается вызвать функцию stack_pop

int main() {

    Stack my_stack; // Создание стека
    Stack *st = &my_stack; // Создание указателя st на имеющийся стек my_stack
    stack_init(st); // Создание стека с длиной 0 по умолчанию

    int check, get;
    unsigned int size;

    try_to_stack_get(st); // Попытка вызвать функцию stack_get
    try_to_stack_pop(st); // Попытка вызвать функцию stack_pop
    size = stack_size(st); // Берем размер стека
    printf("The stack size is %d\n", size); // Пишем размер стека

    printf("Stack_is_empty: %d\n", stack_is_empty(st)); // Проверка пуст стек или нет 0 - да, 1 - нет
    printf("Stack_is_full: %d\n", stack_is_full(st)); // Проверка полон ли стек. 0 - да, 1 - нет
    stack_print(st); // Вывод стека (проверка) (пустой стек)

    stack_push(st, 1); // Добавляем в стек 1
    stack_push(st, 10); // Добавляем в стек 10
    stack_print(st); // Вывод стека (проверка)
    size = stack_size(st); // Берем размер стека
    printf("The stack size is %d\n", size); // Пишем размер стека

    try_to_stack_get(st); // Попытка вызвать функцию stack_get

    printf("Stack_is_empty: %d\n", stack_is_empty(st)); // Проверка пуст стек или нет 0 - да, 1 - нет
    printf("Stack_is_full: %d\n", stack_is_full(st)); // Проверка полон ли стек. 0 - да, 1 - нет
    stack_print(st); // Вывод стека (проверка)

    try_to_stack_pop(st); // Попытка вызвать функцию stack_pop

    stack_print(st); // Вывод стека

    try_to_stack_pop(st);

    stack_print(st); // Вывод стека
    printf("Stack_is_empty: %d\n", stack_is_empty(st)); // Проверка пуст стек или нет 0 - да, 1 - нет
    printf("Stack_is_full: %d\n", stack_is_full(st)); // Проверка полон ли стек. 0 - да, 1 - нет
    stack_push(st, 100); // Добавление элемента
    stack_push(st, 82); // Добавление элемента
    try_to_stack_get(st); // Попытка вызвать функцию stack_get
    try_to_stack_pop(st); // Попытка вызвать функцию stack_pop

    try_to_stack_get(st);
    stack_print(st); // Вывод стека

    printf("Stack_is_empty: %d\n", stack_is_empty(st)); // Проверка пуст стек или нет 0 - да, 1 - нет
    printf("Stack_is_full: %d\n", stack_is_full(st)); // Проверка полон ли стек. 0 - да, 1 - нет
    try_to_stack_pop(st);
    stack_print(st); // Вывод стека
    printf("Stack_is_empty: %d\n", stack_is_empty(st)); // Проверка пуст стек или нет 0 - да, 1 - нет
    printf("Stack_is_full: %d\n", stack_is_full(st)); // Проверка полон ли стек. 0 - да, 1 - нет
    try_to_stack_get(st); // Попытка вызвать функцию stack_get
    try_to_stack_pop(st); // Попытка вызвать функцию stack_pop

    stack_push(st, 52); // Добавляем в стек 52
    stack_push(st, 11); // Добавляем в стек 11
    size = stack_size(st); // Берем размер стека
    printf("The stack size is %d\n", size); // Пишем размер стека

    printf("Stack_is_empty: %d\n", stack_is_empty(st)); // Проверка пуст стек или нет 0 - да, 1 - нет
    printf("Stack_is_full: %d\n", stack_is_full(st)); // Проверка полон ли стек. 0 - да, 1 - нет

    stack_print(st); // Вывод стека
    stack_clear(st); // Очистка стека
    stack_print(st); // Вывод стека
    printf("Stack_is_empty: %d\n", stack_is_empty(st)); // Проверка пуст стек или нет 0 - да, 1 - нет
    printf("Stack_is_full: %d\n", stack_is_full(st)); // Проверка полон ли стек. 0 - да, 1 - нет

    return 0;
}

void stack_init (Stack *st) {
    st->size = 0;
}

void stack_push (Stack *st, int number) {
    if (stack_is_full(st) != 0) {
        st->numbers[st->size] = number;
        st->size++;
        printf("The element is %d now on the stack\n", number);
    } else {
        printf("The stack is full\n");
    }
}

void stack_print(Stack *st) {
    printf("My stack: ");
    for (unsigned int i = 0; i < st->size; ++i) {
        printf("%d ", st->numbers[i]);
    }

    printf("\n");
}

int stack_pop(Stack *st) {
    int number = st->numbers[st->size - 1];
    st->size--;
    printf("The item %d is no longer on the stack\n", number);
    return number;
}

int stack_is_empty(Stack *st) {
    if (st->size == 0) {
        return 0;
    } else {
        return 1;
    }
}

int stack_is_full(Stack *st) {
    if (st->size >= (sizeof(st->numbers) / sizeof(st->numbers[0]))) {
        return 0;
    } else {
        return 1;
    }
}

void stack_clear(Stack *st) {
    st->size = 0;
    printf("The stack is being cleared ...\n");
}

int stack_get (Stack * st) {
    return st->numbers[st->size - 1];
}

unsigned int stack_size (Stack * st) {
    return st->size;
}

void try_to_stack_get(Stack *st) {
    if (stack_is_empty(st) != 0) {
        int get = stack_get(st); // Берем число с верхушки
        printf("Number at the top is : %d\n", get); // Пишем число с верхушки стека
    } else {
        printf("The stack is empty... stack_get does not work\n");
    }
}

void try_to_stack_pop(Stack *st) {
    if (stack_is_empty(st) != 0) {
        int check = stack_pop(st); // Удаление Элемента
        printf("My_pop_element: %d\n", check); // Вывод удаляемого элемента
    } else {
        printf("The stack is empty... stack_pop does not work\n");
    }
}

*/