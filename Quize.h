#pragma once
#include<iostream>
#include<string>
using namespace std;

struct Question {
	string quetionText;
	string trueAnswer;
};

struct Quiz {
	string Title;
	Question questions[5];
};

void init();
void addQuiz();
void showQuizes();
void insertQuiz(Quiz quiz);
void passQuiz();