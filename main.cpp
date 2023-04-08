#include <iostream>
using namespace std;
int main(){
    int amount;
    printf("How many tests are you calculating?");
    cin >> amount;
    if(amount == 1){
        int right;
        int wrong;
        printf("How many questions were there? ");
        cin >> wrong;
        printf("How many did you get right? ");
        cin >> right;
        int calc = wrong/right;
        int ans = calc*100;
        cout << "The result is " << ceil(ans) << endl;
        cout << "Here's how you calculate it: 1000(questions correct)/1100(amount of questions)*100 =91%";
        main();
    }
    if(amount == 2){
        int mark1;
        int mark2;
        printf("What is your first mark?");
        cin >> mark1;
        printf("What is your second mark?");
        cin >> mark2;
        int calc = mark1+mark2;
        int result = calc/2;
        cout << "The result is " << result;
        main();
    }
    if(amount == 3){
        int mark;
        int mark2;
        int mark3;
        printf("What is your first mark?");
        cin >> mark;
        printf("What is the second mark?");
        cin >> mark2;
        printf("What is the third mark?");
        cin >> mark3;
        int calc = mark+mark2+mark3;
        int result = calc/3;
        cout << "Your mark is " << result << "%";
        main();
    }
    if(amount == 4){
     int mark1;
     int mark2;
     int mark3;
     int mark4;
     cout <<  "Enter your first mark > ";
     cin >> mark1;
     printf("Enter your second mark > ");
     cin >>  mark2;
     printf("Enter your third mark > ");
     cin >> mark3;
     printf("Enter your fourth mark > ");
     cin >> mark4;
     int calc = mark1+mark2+mark3+mark4;
     int result = calc/4;
     cout << "Your mark is " << result << "%";
     main();
    }
    if(amount ==  5){
        int mark1;
        int mark2;
        int mark3;
        int mark4;
        int mark5;
        printf("What is your first mark? ");
        cin >> mark1;
        printf("What is your second mark? ");
        cin >> mark2;
        printf("What is your third mark? ");
        cin > > mark3;
        printf("What is your fourth mark? ");
        cin >> mark4;
        printf("What is your fifth mark?");
        cin >> mark5;
        int calc = mark1+mark2+mark3+mark4+mark5;
        int result = mark/5
        cout << "Your mark is " <<  result;
        main();
    }
    if(amount == 6){
     
}
