//
//  ViewController.h
//  TMap-OP_libSample
//
//  Created by heungguk on 2015. 10. 19..
//  Copyright © 2015년 SKP. All rights reserved.
//

#import <UIKit/UIKit.h>

void Alert(NSString* message) {
    UIAlertView* alert = [[[UIAlertView alloc] initWithTitle:nil
                                                     message:message
                                                    delegate:nil
                                           cancelButtonTitle:@"확인"
                                           otherButtonTitles:nil] autorelease];
    [alert show];
}

@interface ViewController : UIViewController


@end

