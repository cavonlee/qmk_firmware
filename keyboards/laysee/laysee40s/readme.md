# Laysee 40 Split 利是·肆拾·离 键盘

![laysee40s](imgur.com image replace me!)

*A short description of the keyboard/project*

* Keyboard Maintainer: [George](https://github.com/cavonlee)
* Hardware Supported: *The PCBs, controllers supported*
* Hardware Availability: *Links to where you can find this hardware*

Set Split keyboard left:

    qmk flash -kb laysee/laysee40s -km via -bl uf2-split-left

Set Split keyboard right:

    qmk flash -kb laysee/laysee40s -km via -bl uf2-split-right

Make example for this keyboard (after setting up your build environment):

    make laysee40s:default

Flashing example for this keyboard:

    make laysee40s:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
