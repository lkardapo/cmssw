// F.R.
// $Id: CaloJetfwd.h,v 1.6 2006/06/27 23:15:06 fedor Exp $
#ifndef JetReco_CaloJetCollection_h
#define JetReco_CaloJetCollection_h

#include <vector>
#include "DataFormats/Common/interface/Ref.h"
#include "DataFormats/Common/interface/RefVector.h"
#include "DataFormats/Common/interface/RefProd.h"

#include "DataFormats/JetReco/interface/CaloJet.h"

namespace reco {
  /// collection of CaloJet objects 
  typedef std::vector<CaloJet> CaloJetCollection;
  /// edm references
  typedef edm::Ref<CaloJetCollection> CaloJetRef;
  typedef edm::RefVector<CaloJetCollection> CaloJetRefVector;
  typedef edm::RefProd<CaloJetCollection> CaloJetRefProd;
}
#endif
