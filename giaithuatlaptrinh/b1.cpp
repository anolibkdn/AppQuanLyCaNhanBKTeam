/*
        picture = ["abc",
                    "ded"]
the output should be

addBorder(picture) = ["*****",
                      "*abc*",
                      "*ded*",
                      "*****"]
*/

std::vector<std::string> addBorder(std::vector<std::string> picture) {
    
    vector<std::string> result;
    int nx = picture[0].length();
    string cover = "";
    for(int i =0;i<= nx+ 1;i++){
        cover += '*';
    }
    
    result.push_back(cover);
    for(int i=0;i<picture.size();i++){
        string tmp = "*";
        tmp += picture[i];
        tmp+="*";
        result.push_back(tmp);
    }
    result.push_back(cover);

    return result;
}
