// Online C compiler to run C program online
#include <stdio.h>
#include <stdint.h>
#pragma pack(1)

struct store {
    double price;
        union {
                struct {
                            char *Titel;
                            char *author;
                            int num_pages;
                }book;
                struct {
                            char *color;
                            char *size;
                            char *design;
                }shirt;
    }iteam;
};
int main() {
    // Write C code here
 struct store s;
 s.price = 205;
 s.iteam.book.Titel="In To The Wild";
 s.iteam.book.author = "Unknow";
 s.iteam.book.num_pages=280;
 //s.iteam.shirt.color="Blue";
 //s.iteam.shirt.size="XL";
 //s.iteam.shirt.design="Formal Shirt";
 s.price = 20;
 
 printf("Title of the Book :\t%s\nAuthor :\t%s\nPrice :\t$%ld.00\nPage :\t%d\n",s.iteam.book.Titel,s.iteam.book.author,s.price,s.iteam.book.num_pages);
 
  
    
    return 0;
}



