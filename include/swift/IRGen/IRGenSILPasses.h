//===--- IRGenSILPasses.cpp - The IRGen Prepare SIL Passes ----------------===//
//
// This source file is part of the Swift.org open source project
//
// Copyright (c) 2014 - 2016 Apple Inc. and the Swift project authors
// Licensed under Apache License v2.0 with Runtime Library Exception
//
// See https://swift.org/LICENSE.txt for license information
// See https://swift.org/CONTRIBUTORS.txt for the list of Swift project authors
//
//===----------------------------------------------------------------------===//

namespace swift {

class SILFunctionTransform;

namespace irgen {

/// Create a pass to hoist alloc_stack instructions with non-fixed size.
SILFunctionTransform *createAllocStackHoisting();

} // end namespace irgen
} // end namespace swift
