inc = include_directories('../api', '../headers')

 src = [
     'Wrapper.cpp'
 ]

src_with_path = []

 foreach i : src
     src_with_path += './' + i
 endforeach

wrapper_sl = static_library(
    'wrapper',
    sources : src_with_path ,
    include_directories : inc
)

wrapper_dep = declare_dependency(
    link_with : wrapper_sl,
    include_directories : inc
)