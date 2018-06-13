/****************************************************************
/****************************************************************
/*   FILE NAME: monte.h
/*
/*    AUTHOR: Andy Estes
/*
/*   DESCRIPTION: Setup for three card monte
/*
/****************************************************************/
#ifndef monte_h
#define monte_h

#include "card.h"
#include "marble.h"
#include <iostream>
#include <string>

using namespace std;

template <typename R>
class Monte
{
    private:
      int win;
      int fake;
      int counter;

    public:
    int object[3] ;
    int rank ;
    Suit suit ;
    Monte() ;
    void set1() ;
    void set2() ;
    void set3(string test) ;
    void Shuffle() ;
    R Pick() ;
};



/****************************************************************
/*  FUNCTION NAME: Monte()
/*  Description:  default constructor to setup values
/*
/****************************************************************/
template <typename R>
Monte<R>::Monte()
  {
    win = 1 ;
    fake = 0 ;
    counter = 0 ;
    object[counter] ;

    set1();
    set2();
    set3("Cyan");
  }


/****************************************************************
/*  FUNCTION NAME: set1()
/*  Description:  sets the first item
/*
/****************************************************************/
template <typename R>
void Monte<R>::set1()
  {
    object[counter] = fake;
    counter = 1 ;
  }

/****************************************************************
/*  FUNCTION NAME: set2()
/*  Description:  sets the second item
/*
/****************************************************************/
template <typename R>
void Monte<R>::set2()
  {
    object[counter] = fake;
    counter = 2 ;
  }

/****************************************************************
/*  FUNCTION NAME: set3()
/*  Description:  sets the third item
/*
/****************************************************************/
template <typename R>
void Monte<R>::set3(string test)
  {
    object[counter] = fake;
  }

/****************************************************************
/*  FUNCTION NAME: Shuffle()
/*  Description:  shuffles the array
/*
/****************************************************************/
template <typename R>
void Monte<R>::Shuffle()
  {

    int r = (rand() % 3) ;
    object[r] = win ;
  }


  /****************************************************************
  /*  FUNCTION NAME: Pick()
  /*  Description:  User input to select a point in the array
  /****************************************************************/
template <typename R>
R Monte<R>::Pick()
  {

    int select , x ;
/*   for( int i = 0 ; i < 3 ; i++) //Testing to make sure all values are passed in
      {
        cout << object[i] << endl ;
      }
*/
      cout << "Select a position from 1-3"<<endl;
      cin >> select ;

    while (select < 1 || select > 3)
    {
      cout<<"Not a valid choice. Please Re-Enter."<<endl;
      cin.clear();
      cin.ignore(100, '\n');
      cin>>select;
    }

    if(select == 1)
      {
        return object[0] ;
      }
    else if(select == 2)
      {

        return object[1] ;

      }
    else if(select == 3)
      {
        return object[2] ;
      }

}
#endif
