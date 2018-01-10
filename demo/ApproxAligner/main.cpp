#include "generate_approx_timestamp.h"
#include <iostream>
using namespace std;

int main()
{
cout<<"Enter path to the subtitle file: ";

string fileName;
    cin>>filename;

    ApproxAligner * aligner = new ApproxAligner(fileName);	// That's it :) More customization to come!
    aligner->align();

    return 0;
}
