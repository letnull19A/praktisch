#pragma once
#include <string>

using namespace std;

class Students {
public:

    void set_name(string student_name)
    {
        name = student_name;
    }

    string get_name()
    {
        return name;
    }

    void set_last_name(string student_last_name)
    {
        last_name = student_last_name;
    }

    string get_last_name()
    {
        return last_name;
    }

    void set_scores(int student_scores[])
    {
        for (int i = 0; i < 5; ++i) {
            scores[i] = student_scores[i];
        }
    }

    void set_sred_ball(float ball)
    {
        sred_ball = ball;
    }

    float get_sred_ball()
    {
        return sred_ball;
    }

private:
    int scores[5];
    float sred_ball;
    string name;
    string last_name;
};