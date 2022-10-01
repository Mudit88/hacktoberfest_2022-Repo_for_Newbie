/*
 * Author Name: Jaival
 * Date: 01-10-2022
 * Createdd with IntelliJ IDEA Community Editiion
 */
package My_Project.learning_Java;

public class Author {
    private String author_name;
    private String author_pen_name;

    public Author() {
    }

    public Author(String author_name, String author_pen_name) {
        this.author_name = author_name;
        this.author_pen_name = author_pen_name;
    }

    public String getAuthor_name() {
        return author_name;
    }

    public void setAuthor_name(String author_name) {
        this.author_name = author_name;
    }

    public String getAuthor_pen_name() {
        return author_pen_name;
    }

    public void setAuthor_pen_name(String author_pen_name) {
        this.author_pen_name = author_pen_name;
    }

    @Override
    public String toString() {
        return "Author{" +
                "author_name='" + author_name + '\'' +
                ", author_pen_name='" + author_pen_name + '\'' +
                '}';
    }
}
