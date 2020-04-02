#include <iostream>
#include <string>
#include <vector>

using namespace std;

    class Form{
        private:


        public:

        Form();
        ~Form();

        std::string SetCategory(std::string cty);
        std::string SetQuestion(std::string qst);

        void Ask(std::vector<std::string> vec);

    };

    Form::Form(){
    }

    Form::~Form(){
    }

    void Form::Ask(std::vector<std::string> vec){

        int o;

        for(std::string i : vec){

            std::cout<<i<<std::endl;
            std::cout<<std::endl;

            std::cout<<"1- De acuerdo"<<std::endl;
            std::cout<<"2- Neutral"<<std::endl;
            std::cout<<"3- Desacuerdo"<<std::endl;

            cin>>o;

        }
    }