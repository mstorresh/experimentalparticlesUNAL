#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

void Tracks_Clusters(){

TFile *file = TFile::Open("Tracks_Clusters.root");
TTree *tree = (TTree*) file->Get("JetRecoTree");
tree->Print()
UInt_t npv = -1;
tree->SetBranchAddress("NPV", &npv);
TCanvas *canvas = new TCanvas("Canvas","a first way to plot a variable",800,600);
TH1F *hist_npv = new TH1F("NPV","Example plot: Number of primary vertices; NPV ; Events ",50,1,50);
int nentries, nbytes, i;
nentries = (Int_t)tree->GetEntries();

for (i = 0; i < nentries; i++)
{
    nbytes = tree->GetEntry(i);
    hist_npv->Fill(npv);
}

std::cout << "Done!" << std::endl;
hist_npv->SetFillColor(kRed);
hist_npv->Draw();
canvas->Draw();

}
