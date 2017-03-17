// Copyright (C) 2017 The LineageOS Project
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
package slim;

import (
  "android/soong/android"
  "android/soong/cc"
  "bytes"
  "github.com/google/blueprint"
)

func init() {
  android.RegisterModuleType("forced_shims_defaults", forcedShimsFactory)
}

func forcedShimsFactory() (blueprint.Module, []interface{}) {
  module, props := cc.DefaultsFactory()
  android.AddLoadHook(module, forcedShims)

  return module, props
}

func forcedShims(ctx android.LoadHookContext) {
  type props struct {
    Cppflags []string
  }

  p := &props{}
  p.Cppflags = globalDefaults(ctx)

  ctx.AppendProperties(p)
}

func globalDefaults(ctx android.BaseContext) ([]string) {
  var cppFlags []string
  var buffer bytes.Buffer

  device_forced_shim_libs := ctx.DeviceConfig().ForcedShimLibs()

  if (len(device_forced_shim_libs) > 0) {
    buffer.WriteString("-DFORCED_SHIM_LIBS=")
    buffer.WriteString(device_forced_shim_libs)
    cppFlags = append(cppFlags, buffer.String())
  }

  return cppFlags
}
