# Copyright (c) 2024, Rockchip Electronics Co., Ltd
# Released under the MIT license (see COPYING.MIT for the terms)

PREFERRED_PROVIDER_virtual/libgl ?= "mesa"
PREFERRED_PROVIDER_virtual/mesa ?= "mesa"

PREFERRED_PROVIDER_virtual/egl ?= "mesa"
PREFERRED_PROVIDER_virtual/libgles1 ?= "mesa"
PREFERRED_PROVIDER_virtual/libgles2 ?= "mesa"
PREFERRED_PROVIDER_virtual/libgles3 ?= "mesa"
PREFERRED_PROVIDER_virtual/libopencl ?= "mesa"
PREFERRED_PROVIDER_virtual/libgbm ?= "mesa"

DEPENDS:append:pn-mesa-gl = " rockchip-libmali"
# DEPENDS:append:pn-mesa-gl = " mesa"
