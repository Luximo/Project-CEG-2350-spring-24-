## Lab 04

- Name: Moses Otuvedo
- Email: Otuvedo.3@wright.edu

## Part 1 

Make sure the following files are in your GitHub repository
- validator (with commits for each step complete)

1. ![Step 1 completed](image-5.png)
step one completed

2. ![Step 2 completed](image-3.png)
step two completed

3. ![Step 3 completed](image-6.png)

4. ![Step 4 completed](image-7.png)

- `clean1.txt` through `clean4.txt`

## Part 2 Answers

1. `sed -e 's/<[/][^>]*>//g' sedfile.html > sedfile.md`
![part 1 completed](image-8.png)

2. `sed -i -e 's/<li>/- /g' sedfile.md`
![step 2 completed](image-10.png)

3. `sed -i -e 's/<h1>/# /g' sedfile.md`
![step 3 completed](image-11.png)

4. `sed -i -e 's/<h2>/## /g' sedfile.md`
![Step 4 completed](image-12.png)

5. `sed -i -e '/<[^>]*>/d' sedfile.md`
![Step 5 completed](image-13.png)

6. `sed -i -e 's/Batches/Matches/g' sedfile.md`
![Step 6 completed](image-14.png)

## Part 3 Answers

1. `awk '/Bil/ {print $1}' records.txt`


2. ` `

3. ` `

4. ` `

5. ` `


## Extra Credit - Remove this if not doing

1. Source: 
    - Regular Expression Pattern: 
2. Pattern explanation:
3. Verify `validator2` is in your GitHub repository