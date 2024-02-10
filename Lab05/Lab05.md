## Lab 05

- Name: Moses Otuvedo
- Email: Otuvedo.3@wright.edu

## Part 2 - Retrospective

1. Here is how I would likely try to explain `getopts` to a friend:😎

- Let's say you are a chef who needs to prepare a dish for a customer. You have a recipe that tells you what ingredients and steps you need to follow.🤔 However, the customer may have some special requests, such as adding more salt, using less oil, or avoiding certain allergens.🤨 How do you know what the customer wants and how to adjust your recipe accordingly...?🤔 Now let's begin...🫱🏾‍🫲🏼

- One way is to use `getopts.` `Getopts` is a tool that helps you read and process the customer’s requests. It works like this:

- The customer writes their requests on a piece of paper, using a special format. For example, they may write `“-s 2 -o 1 -a nuts”` to indicate that they want 2 teaspoons of salt, 1 tablespoon of oil, and no nuts in their dish...
- You read the paper and use `getopts` to interpret the requests. `Getopts` recognizes the letters that start with a dash, such as `-s`, `-o`, and `-a`, as options. These options tell you what kind of request the customer is making. For example, `-s` means salt, `-o` means oil, and `-a` means allergens...
- `Getopts` also recognizes the words or numbers that follow the options, such as `2`, `1`, and nuts, as arguments. These arguments tell you the specific value or detail of the request. For example, `2` means `2 teaspoons`, `1` means `1 tablespoon`, and `nuts` means `nuts...`
- `Getopts` assigns the options and arguments to variables that you can use in your recipe. For example, you can use the variable `$s` to store the value of the salt option, the variable `$o` to store the value of the oil option, and the variable `$a` to store the value of the allergen option...
- You can then use these variables to modify your recipe according to the customer’s requests. For example, you can add `$s` teaspoons of salt, use `$o` tablespoons of oil, and avoid using `$a` in your dish.
- Finally, that’s how `getopts` works. It helps you read and process the customer’s requests, so you can prepare the dish they want...

2. In all honesty, I encountered no obstacles whatsoever whilst working on this script. 😊 I possess a great deal of expertise and proficiency in writing bash scripts, so I managed to accomplish the task with ease. I also utilised some online resources and examples to validate my syntax and logic. Nevertheless, if I ever come across a problem that I am unable to resolve, I usually attempt to do the following: Decompose the problem into smaller and simpler subproblems. Seek relevant information and solutions online or in other sources. Test and debug my script using various inputs and outputs. Request assistance from someone who is more knowledgeable or experienced in the topic. These are some of the strategies that I employ to surmount challenges and acquire new skills...

3. I think I would add a recursive option to apply the find and replace operation to all the files in a given directory or subdirectory, instead of just one file...🤔

## Part 3 - namechange Usage Guide

THIS SHOULD ALL BE REMOVED AND REPLACED WITH ONLY YOUR USAGE GUIDE TEXT

Examples of script usage and output. This should be enough info that  
you can hand this and the script to someone not in this course and they  
would be able to understand what your script does and how to use it.

Use good markdown so that this documentation is pretty and clean on GitHub.

Bellow is kind of how I would format things

### What it is

Describe your script in plain english, nothing too technical.  Think about this as describing what you made over the dinner table.

### How to run it

If someone wanted to downloaded your script, what steps would they take to have their own copy that they could run
1. Numbers followed by a space
2. Create numeric lists
3. Don't forget `code snips` can go in backticks.

### Examples

```
Two examples using your script to rename an existing file
By using the triple quotes, you can enclose a block of code
And code blocks look very professional
```

## bulkrenamer Usage Guide - Remove if not doing extra credit

Examples of script usage and output. This should be enough info that  
you can hand this and the script to someone not in this course and they  
would be able to understand what your script does and how to use it.

Use good markdown so that this documentation it is pretty and clean on GitHub.