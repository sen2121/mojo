// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SHELL_APPLICATION_MANAGER_QUERY_UTIL_H_
#define SHELL_APPLICATION_MANAGER_QUERY_UTIL_H_

#include <utility>

#include "url/gurl.h"

namespace shell {

// Returns the base URL (without the query string). If |query| is not nullptr,
// set |*query| to the query string.  If the url doesn't have a query string,
// |*query| is set to the empty string.
GURL GetBaseURLAndQuery(const GURL& url, std::string* query);

}  // namespace shell

#endif  // SHELL_APPLICATION_MANAGER_QUERY_UTIL_H_
