////////////////////////////////////////////////////////////////////////////////
//
//  JASPER BLUES
//  Copyright 2013 Jasper Blues
//  All Rights Reserved.
//
//  NOTICE: Jasper Blues permits you to use, modify, and distribute this file
//  in accordance with the terms of the license agreement accompanying it.
//
////////////////////////////////////////////////////////////////////////////////

#import <Foundation/Foundation.h>
@class PFWeatherReport;
@protocol PFWeatherReportViewDelegate;


@interface PFWeatherReportView : UIView<UITableViewDelegate, UITableViewDataSource>
{
    UIImageView* _backgroundView;
    UIActivityIndicatorView* _spinner;
    UILabel* _cityNameLabel;
    UILabel* _conditionsDescriptionLabel;
    UIImageView* _conditionsIcon;

    UIView* _temperatureLabelContainer;
    UILabel* _temperatureLabel;

    UIToolbar* _toolbar;
    UILabel* _lastUpdateLabel;
    UITableView* _tableView;

    PFWeatherReport* _weatherReport;

    __weak id<PFWeatherReportViewDelegate> _delegate;

}

- (void)setWeatherReport:(PFWeatherReport*)weatherReport;

- (void)setDelegate:(id<PFWeatherReportViewDelegate>)delegate;

- (void)showSpinner;

- (void)hideSpinner;

@end