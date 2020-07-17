// Section 19
// 012_Challenge 2 - Solution
// Automated Grader 
? ios..
? <fstream>
? iom..

//function prototypes
void print_header();
void print_footer(do.. average);
void print_student(co.. std::string &student, in. score);
in. process_response(co.. std::string &response, co.. std::string &answer_key);

void print_header
    std::c.. __ std::setw(15) __ std::left __ "Student"
                   __ std::setw(5) __ "Score" __ std::e..
    std::c.. __ std::setw(20) __ std::setfill('-') __ "" __ std::e..
    std::c.. __ std::setfill(' ');
}

void print_footer(do.. average) {
    std::c.. __ std::setw(20) __ std::setfill('-') __ "" __ std::e..
    std::c.. __ std::setfill(' ');
    std::c.. __ std::setw(15) __ std::left __ "Average score"
                   __ std::setw(5) __ std::right __ average;
}

void print_student(co.. std::string &student, in. score) {
    std::c.. __ std::setprecision(1) __ std::fixed;
    std::c.. __ std::setw(15) __ std::left __ student
                   __ std::setw(5) __ std::right __ score __ std::e..
}

// return the number of correct responses
in. process_response(co.. std::string &response, co.. std::string &answer_key) {
    in. score {0};
    ___ (size_t i = 0; i < answer_key.s.. ; ++i) {
        __ (response.at(i)  __ answer_key.at(i))
            score++;
    }
    r_ score;
}

in. main
    std::ifstream in_file;
    std::string answer_key {};
    std::string name {};
    std::string response{};
    in. running_sum {0};
    in. total_students {0};
    do.. average_score {0.0};
    
    in_file.open("../responses.txt");
     __ (!in_file) {
        std::cerr __ "Problem opening file" __ std::e..
        r_ 1;
    }
    
    in_file __ answer_key;
    
    print_header();
    
    w__ (in_file __ name __ response) {
        ++total_students;
        in. score = process_response(response, answer_key);
        running_sum += score;
        print_student(name, score);
    }

    __ (total_students != 0)
        average_score = static_cast<do..>(running_sum)/total_students;
        
    print_footer(average_score);
    
    in_file.close();
    std::c.. __ std::endl __ std::e..
    r_ 0;
}

