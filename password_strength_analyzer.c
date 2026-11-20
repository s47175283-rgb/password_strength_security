#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

int has_uppercase(const char *p) {
    for (int i = 0; p[i] != '\0'; i++)
        if (isupper((unsigned char)p[i])) return 1;
    return 0;
}

int has_lowercase(const char *p) {
    for (int i = 0; p[i] != '\0'; i++)
        if (islower((unsigned char)p[i])) return 1;
    return 0;
}

int has_digit(const char *p) {
    for (int i = 0; p[i] != '\0'; i++)
        if (isdigit((unsigned char)p[i])) return 1;
    return 0;
}

int has_special(const char *p) {
    for (int i = 0; p[i] != '\0'; i++)
        if (ispunct((unsigned char)p[i])) return 1;
    return 0;
}

int calculate_score(const char *p) {
    int score = 0;
    int len = (int)strlen(p);

    if (len >= 8) score += 2;
    if (len >= 12) score += 1;
    if (has_uppercase(p)) score += 1;
    if (has_lowercase(p)) score += 1;
    if (has_digit(p)) score += 1;
    if (has_special(p)) score += 1;

    return score;
}

void print_feedback(const char *p) {
    int len = (int)strlen(p);

    printf("\nSecurity checks:\n");
    printf("[%-3s] Length >= 8\n", len >= 8 ? "OK" : "NO");
    printf("[%-3s] Uppercase letter\n", has_uppercase(p) ? "OK" : "NO");
    printf("[%-3s] Lowercase letter\n", has_lowercase(p) ? "OK" : "NO");
    printf("[%-3s] Number\n", has_digit(p) ? "OK" : "NO");
    printf("[%-3s] Special character\n", has_special(p) ? "OK" : "NO");

    printf("\nSuggestions:\n");
    if (len < 8) printf("- Use at least 8 characters.\n");
    if (!has_uppercase(p)) printf("- Add at least one uppercase letter.\n");
    if (!has_lowercase(p)) printf("- Add at least one lowercase letter.\n");
    if (!has_digit(p)) printf("- Add at least one number.\n");
    if (!has_special(p)) printf("- Add at least one special character.\n");
    if (len >= 12 && has_uppercase(p) && has_lowercase(p) &&
        has_digit(p) && has_special(p))
        printf("- Good combination. Use a unique password for every account.\n");
}

int main(void) {
    char password[MAX];

    printf("============================================\n");
    printf("     PASSWORD STRENGTH & SECURITY ANALYZER\n");
    printf("============================================\n");

    printf("Enter password to analyze: ");
    if (scanf("%99s", password) != 1) {
        printf("Input error.\n");
        return 1;
    }

    int score = calculate_score(password);

    printf("\nPassword length : %zu\n", strlen(password));
    printf("Security score  : %d/7\n", score);

    if (score <= 2)
        printf("Strength         : WEAK\n");
    else if (score <= 5)
        printf("Strength         : MEDIUM\n");
    else
        printf("Strength         : STRONG\n");

    print_feedback(password);

    printf("\nNote: This program is an educational password-strength checker.\n");
    printf("It does not store or transmit the password.\n");

    return 0;
}
