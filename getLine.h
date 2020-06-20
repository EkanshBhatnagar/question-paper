    #include <cstdlib> 
    #include <iostream>
    #include <fstream>
    #include <vector>
    #include <string>
    #include <ctime> 
    class RandomCrap
    {
    public:
       int show(int p)
       {
          srand( ( unsigned )time( 0 ) ); 
          int random_integer; 
        
          random_integer = ( rand ( ) % p ) + 1;
          return random_integer;
        }
    };
    int astroworld() 
    { 
        std::ifstream read ("largeQUestions.txt");
        
        std::string line;
        std::vector < std::string > stuff;
        
        int counter = 0;
        while (getline(read, line, '\n'))
        {
          stuff.push_back( line );
          counter++;
        }
        
        read.close();
        RandomCrap a;
        std::cout << stuff[a.show( counter - 1 )];
        
        std::cin.get(); 
        return 0;
    }