#include <iostream>
#include <std::string>

using namespace std;

class Prepositons {
private:
  string m_p_word,m_p_mean_of_word, m_p_example;

public:
  Prepositons (string = "", string = "", string = "");
  virtual ~Prepositons ();
};


Prepositons::Prepositons(string word, string mean, string example){
  m_p_word = word;
  m_p_mean_of_word = word;
  m_p_example = example;
}
