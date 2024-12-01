#include <iostream>
#include <ctime>
using namespace std;

class LibraryDb
{
private:
    static int memberId[5];
    static int books[5];
    static int bookStatus[5];

public:
    int validateMemberEligibility(int memberId)
    {
        for (int i = 0; i < 5; i++)
        {
            if (this->memberId[i] == memberId)
            {
                return 1;
            }
        }
        return 0;
    }
    int validateBookAvailability(int bookId)
    {
        for (int i = 0; i < 5; i++)
        {
            if (books[i] == bookId)
            {
                if (bookStatus[i] == 1)
                {
                    return 1;
                }
            }
        }
        return 0;
    }
    void issueBook(int memberId, int bookId)
    {
        for (int i = 0; i < 5; i++)
        {
            if (books[i] == bookId)
            {
                bookStatus[i] = 0;
                cout << "Book " << bookId << " issued to Member " << memberId << endl;
                return;
            }
        }
    }
} DB;

class Member
{
private:
    int memberId;
    string memberName, memberType;

public:
    Member(int memberId, string memberName, string memberType)
    {
        this->memberId = memberId;
        this->memberName = memberName;
        this->memberType = memberType;
    }
    int getMemberId()
    {
        return memberId;
    }
    string getMemberName()
    {
        return memberName;
    }
    string getMemberType()
    {
        return memberType;
    }
};

class Book
{
private:
    int bookId;
    string bookName, publisher;

public:
    Book() {}
    Book(int bookId, string bookName, string publisher)
    {
        this->bookId = bookId;
        this->bookName = bookName;
        this->publisher = publisher;
    }
    int getBookId()
    {
        return bookId;
    }
    string getBookName()
    {
        return bookName;
    }
    string getPublisher()
    {
        return publisher;
    }
};

class Transaction
{
private:
    int transactionId;
    Member *mObj;
    Book *bObj;
    time_t borrowDate, returnDate;

public:
    Transaction(Member *mObj, Book *bObj)
    {
        this->mObj = mObj;
        this->bObj = bObj;
    }
    void borrowBook()
    {
        bool m = false, b = false;
        if (DB.validateMemberEligibility(mObj->getMemberId()))
        {
            m = true;
        }
        else
        {
            cout << "Member Not Eligible" << endl;
        }
        if (DB.validateBookAvailability(bObj->getBookId()))
        {
            b = true;
        }
        else
        {
            cout << "Book Not Available" << endl;
        }
        if (m && b)
        {
            time_t borrowDate = time(0);
            time_t returnDate = borrowDate + 14 * 24 * 60 * 60;
            DB.issueBook(mObj->getMemberId(), bObj->getBookId());
            cout << "Borrow Date: " << ctime(&borrowDate) << endl;
            cout << "Return Date: " << ctime(&returnDate) << endl;
        }
    }
};

class TextBook : public Book
{
private:
    string author;
    int edition;

public:
    TextBook(string author, int edition)
    {
        this->author = author;
        this->edition = edition;
    }
    string getAuthor()
    {
        return author;
    };
    int getEdition()
    {
        return edition;
    };
};

class Journal : public Book
{
private:
    string editor;
    int volume, issue;

public:
    Journal(string editor, int volume, int issue)
    {
        this->editor = editor;
        this->volume = volume;
        this->issue = issue;
    }
    string getEditor()
    {
        return editor;
    };
    int getVolume()
    {
        return volume;
    };
    int getIssue()
    {
        return issue;
    };
};

int LibraryDb::memberId[5] = {101, 102, 103, 104, 105};
int LibraryDb::books[5] = {3701, 3702, 3703, 3704, 3705};
int LibraryDb::bookStatus[5] = {0, 0, 1, 0, 1};

int main()
{
    Member m1(101, "John", "Student");
    Member m2(102, "Jane", "Faculty");

    Book b1(3701, "C++ Programming", "Pearson");
    Book b2(3703, "Data Structures", "McGraw Hill");

    Transaction t1(&m1, &b1);
    t1.borrowBook();

    Transaction t2(&m2, &b2);
    t2.borrowBook();

    return 0;
}