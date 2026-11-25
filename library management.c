
#include <stdio.h>
#include <string.h>

#define MAX 500

struct Book {
    int id;
    char name[100];
    char author[100];
    char category[100];
    int available;
};

/* Predefined books stored directly in the structure array */

struct Book books[MAX] = {
    {1, "C Programming", "Dennis Ritchie", "Computer Science", 1},
    {2, "Let Us C", "Yashwant Kanetkar", "Computer Science", 1},
    {3, "Programming in ANSI C", "E Balagurusamy", "Computer Science", 1},
    {4, "The C Programming Language", "Dennis Ritchie", "Computer Science", 1},
    {5, "C in Depth", "S.K. Jain", "Computer Science", 1},
    {6, "Data Structures", "Seymour Lipschutz", "Computer Science", 1},
    {7, "Computer Fundamentals", "P.K. Sinha", "Computer Science", 1},
    {8, "Operating Systems", "Galvin", "Computer Science", 1},
    {9, "Computer Networks", "Andrew Tanenbaum", "Computer Science", 1},
    {10, "Database Systems", "Korth", "Computer Science", 1},

    {11, "Wings of Fire", "A.P.J. Abdul Kalam", "Biography", 1},
    {12, "Ignited Minds", "A.P.J. Abdul Kalam", "Motivation", 1},
    {13, "The Discovery of India", "Jawaharlal Nehru", "History", 1},
    {14, "India After Gandhi", "Ramachandra Guha", "History", 1},
    {15, "The Story of My Experiments", "Mahatma Gandhi", "Biography", 1},

    {16, "Physics", "H.C. Verma", "Science", 1},
    {17, "Concepts of Physics", "H.C. Verma", "Science", 1},
    {18, "Fundamentals of Physics", "Halliday", "Science", 1},
    {19, "Chemistry", "P.C. Pandey", "Science", 1},
    {20, "Organic Chemistry", "Morrison", "Science", 1},

    {21, "Mathematics", "R.S. Aggarwal", "Mathematics", 1},
    {22, "Higher Engineering Mathematics", "B.S. Grewal", "Mathematics", 1},
    {23, "Calculus", "Thomas", "Mathematics", 1},
    {24, "Linear Algebra", "Gilbert Strang", "Mathematics", 1},
    {25, "Discrete Mathematics", "Rosen", "Mathematics", 1},

    {26, "Harry Potter", "J.K. Rowling", "Fantasy", 1},
    {27, "The Hobbit", "J.R.R. Tolkien", "Fantasy", 1},
    {28, "The Lord of the Rings", "J.R.R. Tolkien", "Fantasy", 1},
    {29, "The Alchemist", "Paulo Coelho", "Fiction", 1},
    {30, "Animal Farm", "George Orwell", "Fiction", 1},

    {31, "1984", "George Orwell", "Fiction", 1},
    {32, "Pride and Prejudice", "Jane Austen", "Romance", 1},
    {33, "Romeo and Juliet", "William Shakespeare", "Drama", 1},
    {34, "Hamlet", "William Shakespeare", "Drama", 1},
    {35, "Macbeth", "William Shakespeare", "Drama", 1},

    {36, "The Great Gatsby", "F. Scott Fitzgerald", "Fiction", 1},
    {37, "To Kill a Mockingbird", "Harper Lee", "Fiction", 1},
    {38, "The Catcher in the Rye", "J.D. Salinger", "Fiction", 1},
    {39, "Little Women", "Louisa May Alcott", "Fiction", 1},
    {40, "Oliver Twist", "Charles Dickens", "Fiction", 1},

    {41, "A Brief History of Time", "Stephen Hawking", "Science", 1},
    {42, "The Selfish Gene", "Richard Dawkins", "Science", 1},
    {43, "Cosmos", "Carl Sagan", "Science", 1},
    {44, "The Origin of Species", "Charles Darwin", "Science", 1},
    {45, "Silent Spring", "Rachel Carson", "Science", 1},

    {46, "Rich Dad Poor Dad", "Robert Kiyosaki", "Finance", 1},
    {47, "The Intelligent Investor", "Benjamin Graham", "Finance", 1},
    {48, "Think and Grow Rich", "Napoleon Hill", "Motivation", 1},
    {49, "Atomic Habits", "James Clear", "Self Help", 1},
    {50, "Deep Work", "Cal Newport", "Self Help", 1},

    {51, "The Power of Habit", "Charles Duhigg", "Self Help", 1},
    {52, "How to Win Friends", "Dale Carnegie", "Self Help", 1},
    {53, "The 7 Habits", "Stephen Covey", "Self Help", 1},
    {54, "Mindset", "Carol Dweck", "Self Help", 1},
    {55, "Ikigai", "Hector Garcia", "Self Help", 1},

    {56, "Sapiens", "Yuval Noah Harari", "History", 1},
    {57, "Homo Deus", "Yuval Noah Harari", "History", 1},
    {58, "The Art of War", "Sun Tzu", "Strategy", 1},
    {59, "The Prince", "Niccolo Machiavelli", "Politics", 1},
    {60, "Gitanjali", "Rabindranath Tagore", "Poetry", 1},

    {61, "The God of Small Things", "Arundhati Roy", "Fiction", 1},
    {62, "Train to Pakistan", "Khushwant Singh", "Fiction", 1},
    {63, "Malgudi Days", "R.K. Narayan", "Fiction", 1},
    {64, "The Guide", "R.K. Narayan", "Fiction", 1},
    {65, "Midnight's Children", "Salman Rushdie", "Fiction", 1},

    {66, "The White Tiger", "Aravind Adiga", "Fiction", 1},
    {67, "Five Point Someone", "Chetan Bhagat", "Fiction", 1},
    {68, "2 States", "Chetan Bhagat", "Romance", 1},
    {69, "The Fault in Our Stars", "John Green", "Romance", 1},
    {70, "Paper Towns", "John Green", "Fiction", 1},

    {71, "The Da Vinci Code", "Dan Brown", "Thriller", 1},
    {72, "Angels and Demons", "Dan Brown", "Thriller", 1},
    {73, "Sherlock Holmes", "Arthur Conan Doyle", "Mystery", 1},
    {74, "The Silent Patient", "Alex Michaelides", "Thriller", 1},
    {75, "Gone Girl", "Gillian Flynn", "Thriller", 1},

    {76, "The Blue Umbrella", "Ruskin Bond", "Fiction", 1},
    {77, "Room on the Roof", "Ruskin Bond", "Fiction", 1},
    {78, "The Jungle Book", "Rudyard Kipling", "Adventure", 1},
    {79, "Treasure Island", "Robert Stevenson", "Adventure", 1},
    {80, "Around the World", "Jules Verne", "Adventure", 1},

    {81, "The Diary of a Young Girl", "Anne Frank", "Biography", 1},
    {82, "Steve Jobs", "Walter Isaacson", "Biography", 1},
    {83, "Einstein", "Walter Isaacson", "Biography", 1},
    {84, "Becoming", "Michelle Obama", "Biography", 1},
    {85, "Long Walk to Freedom", "Nelson Mandela", "Biography", 1},

    {86, "Introduction to Algorithms", "Cormen", "Computer Science", 1},
    {87, "Artificial Intelligence", "Stuart Russell", "Computer Science", 1},
    {88, "Machine Learning", "Tom Mitchell", "Computer Science", 1},
    {89, "Clean Code", "Robert Martin", "Computer Science", 1},
    {90, "The Pragmatic Programmer", "Andrew Hunt", "Computer Science", 1},

    {91, "Engineering Mechanics", "R.C. Hibbeler", "Engineering", 1},
    {92, "Basic Electrical Engineering", "V.K. Mehta", "Engineering", 1},
    {93, "Engineering Drawing", "N.D. Bhatt", "Engineering", 1},
    {94, "Thermodynamics", "Yunus Cengel", "Engineering", 1},
    {95, "Strength of Materials", "S.S. Bhavikatti", "Engineering", 1},

    {96, "Economics", "Paul Samuelson", "Economics", 1},
    {97, "Principles of Economics", "N. Gregory Mankiw", "Economics", 1},
    {98, "Psychology", "David Myers", "Psychology", 1},
    {99, "Sociology", "Anthony Giddens", "Sociology", 1},
    {100, "World History", "Norman Lowe", "History", 1}
};

int count = 100;


// Function to add a book
void addBook() {
    int id, i;

    if (count >= MAX) {
        printf("\nLibrary is full!");
        return;
    }

    printf("\nEnter Book ID: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++) {
        if (books[i].id == id) {
            printf("\nBook ID already exists!");
            return;
        }
    }

    books[count].id = id;

    printf("Enter Book Name: ");
    scanf(" %99[^\n]", books[count].name);

    printf("Enter Author Name: ");
    scanf(" %99[^\n]", books[count].author);

    printf("Enter Category: ");
    scanf(" %99[^\n]", books[count].category);

    books[count].available = 1;
    count++;

    printf("\nBook added successfully!");
}


// Function to display all books
void displayBooks() {
    int i;

    if (count == 0) {
        printf("\nNo books in the library!");
        return;
    }

    printf("\n========== BOOK LIST ==========");

    for (i = 0; i < count; i++) {
        printf("\n\nBook ID   : %d", books[i].id);
        printf("\nBook Name : %s", books[i].name);
        printf("\nAuthor    : %s", books[i].author);
        printf("\nCategory  : %s", books[i].category);

        printf("\nStatus    : %s",
        books[i].available ? "Available" : "Issued");

        printf("\n------------------------------");
    }
}


// Function to search books
void searchBook() {
    int choice, id, i, found = 0;
    char search[100];

    printf("\n===== SEARCH BOOK =====");
    printf("\n1. Search by Book ID");
    printf("\n2. Search by Book Name");
    printf("\n3. Search by Author Name");
    printf("\n4. Search by Category");

    printf("\nEnter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("\nEnter Book ID: ");
        scanf("%d", &id);
    }
    else if (choice >= 2 && choice <= 4) {
        printf("\nEnter Search Text: ");
        scanf(" %99[^\n]", search);
    }
    else {
        printf("\nInvalid choice!");
        return;
    }

    for (i = 0; i < count; i++) {

        if ((choice == 1 && books[i].id == id) ||
            (choice == 2 &&
             strcmp(books[i].name, search) == 0) ||
            (choice == 3 &&
             strcmp(books[i].author, search) == 0) ||
            (choice == 4 &&
             strcmp(books[i].category, search) == 0)) {

            printf("\n----- BOOK FOUND -----");
            printf("\nBook ID   : %d", books[i].id);
            printf("\nBook Name : %s", books[i].name);
            printf("\nAuthor    : %s", books[i].author);
            printf("\nCategory  : %s", books[i].category);

            printf("\nStatus    : %s",
            books[i].available ? "Available" : "Issued");

            found = 1;
        }
    }

    if (found == 0) {
        printf("\nBook not found!");
    }
}


// Function to issue a book
void issueBook() {
    int id, i;

    printf("\nEnter Book ID to issue: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++) {
        if (books[i].id == id) {

            if (books[i].available == 1) {
                books[i].available = 0;
                printf("\nBook issued successfully!");
            }
            else {
                printf("\nBook is already issued!");
            }
            return;
        }
    }
    
    printf("\nBook not found!");
}


// Function to return a book
void returnBook() {
    int id, i;

    printf("\nEnter Book ID to return: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++) {
        if (books[i].id == id) {

            if (books[i].available == 0) {
                books[i].available = 1;
                printf("\nBook returned successfully!");
            }
            else {
                printf("\nBook was not issued!");
            }

            return;
        }
    }
        printf("\nBook not found!");
    
}


// Function to delete a book
void deleteBook() {
    int id, i, j;

    printf("\nEnter Book ID to delete: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++) {
        if (books[i].id == id) {

            if (books[i].available == 0) {
                printf("\nReturn the book before deleting it!");
                return;
            }

            for (j = i; j < count - 1; j++) {
                books[j] = books[j + 1];
            }

            count--;

            printf("\nBook deleted successfully!");
            return;
        }
    }
        printf("\nBook not found!");
}


// Main function
int main() {
    int choice;

    do {
        printf("\n\n================================");
        printf("\n   LIBRARY MANAGEMENT SYSTEM");
        printf("\n================================");
        printf("\nTotal books stored: %d / %d", count, MAX);
        printf("\n1. Add Book");
        printf("\n2. Display Books");
        printf("\n3. Search Book");
        printf("\n4. Issue Book");
        printf("\n5. Return Book");
        printf("\n6. Delete Book");
        printf("\n7. Exit");
        printf("\n================================");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook();
                break;

            case 2:
                displayBooks();
                break;

            case 3:
                searchBook();
                break;

            case 4:
                issueBook();
                break;

            case 5:
                returnBook();
                break;

            case 6:
                deleteBook();
                break;

            case 7:
                printf("\nThank you for using Library Management System!");
                break;

            default:
                printf("\nInvalid choice! Try again.");
        }

    } while (choice != 7);

    return 0;
}
