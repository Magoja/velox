/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "velox/common/caching/StringIdMap.h"

namespace facebook::velox {

// Returns a process-wide map of file path to id and id to file path.
StringIdMap& fileIds();

// Returns a shared_ptr to fileIds(). Needed to control destruction
// order at end of process, so that caches that pin ids to names keep
// the map alive.
const std::shared_ptr<StringIdMap>& fileIdsShared();

} // namespace facebook::velox
