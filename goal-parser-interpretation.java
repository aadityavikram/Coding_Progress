// slower method

public String interpret(String command) {
    String result = "";
    for (int i=0; i<command.length()-1; i++) {
        if (command.charAt(i) == 'G') {
            result += 'G';
        } else if (command.charAt(i) == '(' && command.charAt(i+1) == ')') {
            result += 'o';
            i += 1;
        } else {
            result += "al";
            i += 3;
        }
    }
    if (command.charAt(command.length()-1) == 'G') {
        result += 'G';
    }
    return result;
}

// faster method

public String interpret(String command) {
    return command.replace("()", "o").replace("(al)", "al");
}
