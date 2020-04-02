# Terminal-Form

This is a simple header file that simplifies making forms with c++ through the terminal.

# Getting started

First add the file and the dependencies to your project.

```
#include <vector>
#include <string>
#include "form.h"
```
Then create an instance of the class **"Form"**.

```
Form test;
```

Then create a vector with all the questions that the form will have.

```
std::vector <std::string> exampleForm ={
    "How's it going?",
    "Do you like programming"
};
```
And finally invoke the method **"Ask"**. This method takes as parameter a vector.

```
test.Ask(exampleForm);
```
The final code should look like this.

```
#include <string>
#include <vector>
#include "form.h"

int main(){

  Form test;

  std::vector <std::string> exampleform ={
    "Hey, How's it going?",
    "Do you like programming?"
}

  test.Ask(exampleForm);

  return 0;
}
```




# To Do

This project is not even close to be finish, so here are somethings that I want to add in a future:

-Add a System that counts every answer
-Add a category system per question

# Context

This project is in development and if you want to contribute with your help I would be grateful, I'm learning to code so if you see something that I could do better, tell me.

