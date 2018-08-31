#include "Environment.h"
#include "OnePy.h"
#include "builtin_module/backtest_stock/StockBroker.h"
#include "builtin_module/backtest_stock/StockRecorder.h"

namespace op {
using std::string;
using std::vector;
using namespace sys;

OnePiece stock(const vector<string> &ticker_list,
               const string &frequency,
               const double initial_cash,
               const string &start,
               const string &end,
               const string &broker_name) {

    StockBroker broker;
    StockRecorder recorder;

    OnePiece go;
    go.env->recorder->set_setting(initial_cash, 0, 0.0016, 0.1);
    go.set_date(start, end, frequency, "A_shares");
    return go;
};

} // namespace op
