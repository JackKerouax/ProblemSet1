Xiexiaomeng(Jack) Hu Problemset1.2

I used the "afplay -h" looking for instructions of playing back the audio file.

Eventually it worked, but there seem to be some errors:
2019-09-16 20:22:51.940 afplay[50892:2935095] Error loading /Library/Audio/Plug-Ins/HAL/JackRouter.plugin/Contents/MacOS/JackRouter:  dlopen(/Library/Audio/Plug-Ins/HAL/JackRouter.plugin/Contents/MacOS/JackRouter, 0x0106): code signature in (/Library/Audio/Plug-Ins/HAL/JackRouter.plugin/Contents/MacOS/JackRouter) not valid for use in process: mapped file has no cdhash, completely unsigned? Code has to be at least ad-hoc signed.
2019-09-16 20:22:51.940 afplay[50892:2935095] Cannot find function pointer New_JackRouterPlugIn for factory 7CB18864-927D-48B5-904C-CCFBCFBC7ADD in CFBundle/CFPlugIn 0x7fd369e053b0 </Library/Audio/Plug-Ins/HAL/JackRouter.plugin> (bundle, not loaded)

I'm not sure how to fix this type of error or should I just ignore it at this point?


