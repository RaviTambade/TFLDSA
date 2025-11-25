namespace linkeList.utils;
public class UIManager
{
    public void ShowMenu()
    {
        System.Console.WriteLine("1. Insert Node");
        System.Console.WriteLine("2. Delete Node");
        System.Console.WriteLine("3. Display List");
        System.Console.WriteLine("4. Exit");
    }


    public int GetUserChoice()
    {
        System.Console.Write("Enter your choice: ");
        int choice = int.Parse(System.Console.ReadLine());
        return choice;
    }   
    // This class can be expanded to manage user interface related tasks
}