/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRXMLNode.h"


@interface BRXMLDocument : BRXMLNode {
@private
	void *_doc;	// 12 = 0xc
}
- (id)initWithData:(id)data options:(unsigned)options error:(id *)error;	// 0x34db5e49
- (id)initWithRootElement:(id)rootElement;	// 0x34db5f3d
- (id)initWithXMLString:(id)xmlstring options:(unsigned)options error:(id *)error;	// 0x34db5fa1
- (id)XMLData;	// 0x34db6059
- (id)XMLDataWithOptions:(unsigned)options;	// 0x34db60a9
- (id)XMLString;	// 0x34db6109
- (void)dealloc;	// 0x34db5fd9
- (id)nodesForXPath:(id)xpath error:(id *)error;	// 0x34db60bd
- (id)rootElement;	// 0x34db6019
@end
