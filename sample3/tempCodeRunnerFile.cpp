    // int before_all_second = (hour * 3600) + (minute * 60) + second;
    // int after_all_second;
    // if(diff_second < 0) {
    //   after_all_second = before_all_second - diff_second;
    //   hour = after_all_second / 3600;
    //   minute = (after_all_second - hour) / 60;
    //   second = (after_all_second - hour - minute);
    // } else {
    //   after_all_second = before_all_second + diff_second;
    //   if(after_all_second / 3600 == 24) {
    //     hour = 0;
    //   } else {
    //     hour = after_all_second / 3600;
    //   }
    //   if(after_all_second - (hour * 3600) == 60) {
    //     minute = 0;
    //   } else {
    //     minute = (after_all_second - hour) / 60;
    //   }
    //   if(after_all_second - (hour * 3600) - (minute * 60) == 60) {
    //     second = 0;
    //   } else {
    //     second = (after_all_second - hour - minute);
    //   }
    // }