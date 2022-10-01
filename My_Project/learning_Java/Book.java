/*
 * Author Name: Jaival
 * Date: 01-10-2022
 * Createdd with IntelliJ IDEA Community Editiion
 */
package My_Project.learning_Java;

public class Book {
    private String ISBN_No;
    private String title;
    private String description;
    private double price;

    private Author author;

    public Book() {
    }

    public Book(String ISBN_No, String title, String description, double price, Author author) {
        this.ISBN_No = ISBN_No;
        this.title = title;
        this.description = description;
        this.price = price;
        this.author = author;
    }

    public String getISBN_No() {
        return ISBN_No;
    }

    public void setISBN_No(String ISBN_No) {
        this.ISBN_No = ISBN_No;
    }

    public String getTitle() {
        return title;
    }

    public void setTitle(String title) {
        this.title = title;
    }

    public String getDescription() {
        return description;
    }

    public void setDescription(String description) {
        this.description = description;
    }

    public double getPrice() {
        return price;
    }

    public void setPrice(double price) {
        this.price = price;
    }

    public Author getAuthor() {
        return author;
    }

    public void setAuthor(Author author) {
        this.author = author;
    }
}
