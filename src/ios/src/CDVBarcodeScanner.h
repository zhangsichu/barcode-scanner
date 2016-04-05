//
//  CDVBarcodeScanner.h
//  HelloCordova
//
//  Created by Liam Chen on 3/18/16.
//
//

#import <Cordova/CDV.h>
#import "BarcodeScannerViewController.h"

@interface CDVBarcodeScanner : CDVPlugin<BarcodeScannerDelegate>

@property (nonatomic, strong) NSString *currentCallbackId;
- (void)startScan:(CDVInvokedUrlCommand *)command;
@end
