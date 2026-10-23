#import <Cocoa/Cocoa.h>

void *oracle_create_window_controller(void *window) {
    Class cls = NSClassFromString(@"Paste.PasteStackWindowController");
    NSWindowController *controller = [[cls alloc] initWithWindow:(__bridge NSWindow *)window];
    return (__bridge_retained void *)controller;
}

void *oracle_create_table_controller(void *table) {
    Class cls = NSClassFromString(@"Paste.PasteStackViewController");
    NSViewController *controller = [[cls alloc] initWithNibName:nil bundle:nil];
    [controller setValue:(__bridge NSTableView *)table forKey:@"tableView"];
    return (__bridge_retained void *)controller;
}
