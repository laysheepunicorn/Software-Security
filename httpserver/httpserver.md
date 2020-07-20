# httpserver

## 实验目的

- 在不使用Django的情况下，我们可以使用更底层的pyhton的sqlite库来编程操作数据库。在httpserver.py的基础上，继续编写漏洞。写两个页面，一个是教师录入成绩页面，一个是学生查询成绩页面。教师录入成绩页面表单有三个字段，课程id，学生id，成绩。录入提交以后，httpserver调用sqlite库使用sql语句写入数据库。然后是学生查询成绩表单，学生输入学生id，课程id，httpserver使用sql语句查询成绩后返回给用户。

## 实验过程

- 运行sql.py使用sqlite3创建数据库grades.db

   ```python
    #!/usr/bin/python

    import sqlite3

    conn = sqlite3.connect('grades.db')
    cursor = conn.cursor()
    sql = '''CREATE TABLE grades(
            StudentID VARCHAR(20) NOT NULL,
            CourseID VARCHAR(20) NOT NULL,
            grade VARCHAR(20) NOT NULL
            );'''

    cursor.execute(sql)


    cursor.close()
   ```

- 创建两个页面，分别为录入成绩的页面[luru.html](code\luru.html)，查询页面[search.html](code\search.html)
- 更改对应的httpserver.py文件中post函数部分的代码
  - [luru.py](code\luru.py)
  - [search.py](code\search.py)
- 效果展示
![ ](image\录入.JPG)
![ ](image\查询.JPG)
![ ](image\查询结果.JPG)

## 实验注意

- 在更改代码的时候请注意一定要有conn.commit()这句来提交事务,要不然不能真正的插入数据。