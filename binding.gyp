{
    'targets': [{
        'target_name': 'node-clipboard-api-adapter',

        # LINK: https://github.com/nodejs/nan readme
        # Pull in the path to NAN in your binding.gyp so that you can use #include <nan.h> in your .cpp files:
        # "include_dirs" : [
        #     "<!(node -e \"require('nan')\")"
        # ]
        # This works like a -I<path-to-NAN> when compiling your addon.
        'include_dirs': [
            "<!(node -e \"require('nan')\")"
        ],

        #LINK: https://gcc.gnu.org/onlinedocs/gcc-3.4.4/gcc/Warning-Options.html
        'cflags': [
            '-Wall',
            '-Wparentheses',
            '-Winline',
            '-Wdisabled-optimization'
        ],

        'conditions': [
            ['OS == "mac"', {
                'include_dirs': [
                    '/System/Library/Frameworks/AppKit.framework/Headers' #TODO: maybe need more framework Headers(e.g: )
                ],
                'link_settings': {
                    'libraries': [
                        '-framework AppKit'
                    ]
                }
            }]
        ],

        'sources': [
            'src/clipboard.cc'
        ]
    }]
}