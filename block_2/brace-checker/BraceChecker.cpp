#include <BraceChecker.h>
#include <stack>

bool is_open(char bracket) {
    return (bracket == '(' || bracket == '{' || bracket == '[');
}
bool is_close(char bracket) {
    return (bracket == ')' || bracket == '}' || bracket == ']');
}

bool is_matching (char open, char close) {
    return ((open == '(' && close == ')') || (open == '[' && close == ']') || (open == '{' && close == '}'));
}

bool isBalanced(const std::string &seq) {
    std::stack<char> stack;

    for (char el : seq) {
        if (is_open(el)) {stack.push(el);}
        else if (is_close(el)) {
            if (stack.empty() || !(is_matching(stack.top(), el))) {return false;}
            else {stack.pop();}
        }
    }
   return stack.empty();
}