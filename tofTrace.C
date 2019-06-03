// tofTrace.C
// Does ray tracing between S3 and S4

void tofTrace (const char* inFile) {
  TFile *in = new TFile(inFile, "read");
  TTree *tree = (TTree*)in->Get("Tree");
  std::vector< std::vector<double> > dtofXYZ;
  std::vector< std::vector<double> > utofXYZ;
  tree->SetBranchAddress("dtofXYZ", &dtofXYZ);
  tree->SetBranchAddress("utofXYZ", &utofXYZ);

  
} // tofTrace
