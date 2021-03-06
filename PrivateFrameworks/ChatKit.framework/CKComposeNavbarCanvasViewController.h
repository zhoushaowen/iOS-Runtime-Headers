/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKComposeNavbarCanvasViewController : UIViewController {
    UIButton * _cancelButton;
    CKNavigationBarCanvasView * _canvasView;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIButton *cancelButton;
@property (nonatomic, retain) CKNavigationBarCanvasView *canvasView;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (void)_initializeForTraitCollection:(id)arg1;
- (float)_preferredHeightForTraitCollection:(id)arg1;
- (void)_setupDefaultCanvasView;
- (BOOL)_shouldUseRTL;
- (id)_windowTraitCollection;
- (id)cancelButton;
- (id)canvasView;
- (void)loadView;
- (void)setCancelButton:(id)arg1;
- (void)setCanvasView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)titleLabel;
- (void)updateTitle:(id)arg1 animated:(BOOL)arg2;
- (void)viewDidLoad;

@end
