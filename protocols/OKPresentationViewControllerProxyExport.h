/* Generated by RuntimeBrowser.
 */

@protocol OKPresentationViewControllerProxyExport <JSExport>

@required

- (struct CGPoint { float x1; float x2; })convertLocationInWindow:(struct CGPoint { float x1; float x2; })arg1 toPage:(OKPageViewController *)arg2;
- (struct CGPoint { float x1; float x2; })convertLocationInWindow:(struct CGPoint { float x1; float x2; })arg1 toWidget:(id <OKWidgetProtocol>)arg2;

@optional

- (struct CGPoint { float x1; float x2; })convertLocationInWindow:(struct CGPoint { float x1; float x2; })arg1 toPage:(OKPageViewController *)arg2 __JS_EXPORT_AS__convertLocationInWindowToPage:(id)arg3;
- (struct CGPoint { float x1; float x2; })convertLocationInWindow:(struct CGPoint { float x1; float x2; })arg1 toWidget:(id <OKWidgetProtocol>)arg2 __JS_EXPORT_AS__convertLocationInWindowToWidget:(id)arg3;

@end
