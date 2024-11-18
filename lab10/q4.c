#include <stdio.h>
#include <string.h>  

typedef struct {
    char title[20];
    char author[20];
    int publication_year;
    float price;
} book;

void display(book books[], int n);
void search(book books[], int n, char title[]);
void list(book books[], int n, char author[]);

int main() {
    book library[5] = {
        {"The Great Gatsby", "F. Scott Fitzgerald", 1925, 10.99},
        {"1984", "George Orwell", 1949, 8.99},
        {"To Kill a Mockingbird", "Harper Lee", 1960, 7.99},
        {"Moby kick", "Herman Melville", 1851, 12.99},  
        {"Pride and Prejudice", "Jane Austen", 1813, 9.99}
    };
    
    int n = 5;
    
 
    printf("All Books in the Library:\n");
    display(library, n);
  

    char title[100];
    printf("\nEnter the title to search for: ");
    fgets(title, 100, stdin);
    title[strcspn(title, "\n")] = 0;  
    search(library, n, title);
    
   
    char author[100];
    printf("\nEnter the author to list books by: ");
    fgets(author, 100, stdin);
    author[strcspn(author, "\n")] = 0; 
  
    list(library, n, author);
    
    return 0;
}

void display(book books[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nTitle: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Publication Year: %d\n", books[i].publication_year);
        printf("Price: %.2f\n", books[i].price);
    }
}

void search(book books[], int n, char title[]) {
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(books[i].title, title) == 0) {
            printf("\nBook found:\n");
            printf("Title: %s\n", books[i].title);
            printf("Author: %s\n", books[i].author);
            printf("Publication Year: %d\n", books[i].publication_year);
            printf("Price: %.2f\n", books[i].price);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("\nBook with title '%s' not found.\n", title);
    }
}

void list(book books[], int n, char author[]) {
    int found = 0;
    printf("\nBooks by %s:\n", author);
    for (int i = 0; i < n; i++) {
        if (strcmp(books[i].author, author) == 0) {
            printf("Title: %s\n", books[i].title);
            printf("Publication Year: %d\n", books[i].publication_year);
            printf("Price: %.2f\n", books[i].price);
            found = 1;
        }
    }
    if (!found) {
        printf("No books found by %s.\n", author);
    }
}
