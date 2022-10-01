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
}
