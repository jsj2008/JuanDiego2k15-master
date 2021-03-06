//
//  StreamViewController.h
//  Juan Diego
//
//  Created by Halston van der Sluys on 6/24/15.
//  Copyright (c) 2015 Halston van der Sluys. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface StreamViewController : UIViewController <UIWebViewDelegate>
@property (weak, nonatomic) IBOutlet UIWebView *webView;
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *activityIndicator;

@end
