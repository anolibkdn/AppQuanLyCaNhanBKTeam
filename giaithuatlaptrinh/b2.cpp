/*
        Two arrays are called similar if one can be obtained from another by swapping at most one pair of elements in one of the arrays.

Given two arrays a and b, check whether they are similar.

Example

For a = [1, 2, 3] and b = [1, 2, 3], the output should be
areSimilar(a, b) = true.

The arrays are equal, no need to swap any elements.

For a = [1, 2, 3] and b = [2, 1, 3], the output should be
areSimilar(a, b) = true.

We can obtain b from a by swapping 2 and 1 in b.

For a = [1, 2, 2] and b = [2, 1, 1], the output should be
areSimilar(a, b) = false.

Any swap of any two elements either in a or in b won't make a and b equal.



//=========================

nput:
a: [1, 1, 4]
b: [1, 2, 3]
Output:
false
Expected Output:
false
Console Output:
Empty

//========================

a: [832, 998, 148, 570, 533, 561, 894, 147, 455, 279]
b: [832, 998, 148, 570, 533, 561, 455, 147, 894, 279]
*/

bool areSimilar(std::vector<int> a, std::vector<int> b) {
    if(a.size()!=b.size()) return false;
    
    vector<int> tmp;
    tmp = a;
    int key = 0;
    for(int i =0;i<=a.size()-1;i++){
        for(int j=+1;j<a.size();j++){
            int k = tmp[i];
            tmp[i] = tmp[j];
            tmp[j] = k;
            if(check(tmp,b)) return true;
            else{
                tmp = a;
            }
        }
    }
    return false;
}


bool check(std::vector<int> a, std::vector<int> b){
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i]) return false;
    }
    return true;
}

/*
toi uu hoa code

def areSimilar(a, b):
    if(len(a)!=len(b)):
        return False;
    k = 0
    x1 = [0,0];
    x2 = [0,0];
    for i in range(len(a)):
        if(a[i]!=b[i]): 
            k+=1
            if(k>2):
                break
            x1[k-1] = a[i]
            x2[k-1] = b[i]
            
        
    if(k>2):
        return False;
    
    if((x1[0]==x2[1]) and (x1[1]==x2[0])):
        return True;
    
    return False;





*/