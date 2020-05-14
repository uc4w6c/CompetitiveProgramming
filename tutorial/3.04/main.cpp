#include <bits/stdc++.h>
using namespace std;
 
struct Book {
    string name;
    int price;
};

int main() {
  vector<Book> books;
  books.push_back({ "アルゴリズムとデータ構造", 4000 });
  books.push_back({ "リーダブルコード", 2000 });

  for (Book book: books) {
      cout << book.name << ", " << book.price << endl;
  }
}
