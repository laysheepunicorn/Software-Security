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
