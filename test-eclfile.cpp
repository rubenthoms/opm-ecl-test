#include "opm/io/eclipse/EclFile.hpp"

int main()
{
    std::string filename = "/home/ruben/repos/webviz-subsurface-testdata/reek_history_match/realization-0/iter-0/eclipse/model/5_R001_REEK-0.INIT";
    Opm::EclIO::EclFile file(filename);
    file.loadData();
    const auto& lh = file.get<bool>("LOGIHEAD");

    return 1;
}