#include <array>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    std::vector<int> rounded_scores;
  
    for (double score : student_scores) {
        rounded_scores.push_back(static_cast<int>(score));
    }
    return rounded_scores;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    int count=0;
    for(int i=0;i<student_scores.size();i++){
        if(student_scores[i]<=40){
            count +=1;
        }
    }
    return count;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    int step = (highest_score - 40) / 4;
    

    int d_threshold = 41;
    int c_threshold = 41 + step;
    int b_threshold = 41 + (2 * step);
    int a_threshold = 41 + (3 * step);
    
 
    return {d_threshold, c_threshold, b_threshold, a_threshold};
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(
    std::vector<int> student_scores, std::vector<std::string> student_names) {
    // TODO: Implement student_ranking
    std::vector<std::string> res;
    for(int i=0;i<student_scores.size();i++){
    std::string line = std::to_string(i + 1) + ". " + 
                           student_names[i] + ": " + 
                           std::to_string(student_scores[i]);
                           
      
        res.push_back(line);
    }
    return res;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
    // TODO: Implement perfect_score
    for (int i = 0; i < student_scores.size(); i++) {
        if (student_scores[i] == 100) {
            return student_names[i]; // Return their name immediately
        }
    }
    return "";
}
