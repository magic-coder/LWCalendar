//
//  DatePickerView.h
//  PriceCalender
//
//  Created by luwei on 2017/1/4.
//  Copyright © 2017年 HarrisHan. All rights reserved.
//

#import <UIKit/UIKit.h> 

@class DatePickerDialog,DateIndicator,ZYCalendarView;

@interface DatePickerView : UIView

@property(nonatomic, weak) DatePickerDialog *dialogDelegate;
@property(nonatomic, strong) ZYCalendarView *calendarView;//月天选择器
@property(nonatomic, strong) UIButton *cancelButton;//取消按钮
@property(nonatomic, strong) UIButton *confirmButton; //确认按钮
@property(nonatomic, strong) DateIndicator *fromIndicator;//开始时间的指示器
@property(nonatomic, strong) DateIndicator *toIndicator;//结束时间的指示器

@property(nonatomic, strong) NSDate *currentDate;
@property(nonatomic, strong) NSDate *startDate;
@property(nonatomic, strong) NSDate *endDate;

@end