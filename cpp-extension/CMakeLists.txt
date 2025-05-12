function(add_import_test name)
  set(test_target ${name})

  add_test(
    NAME ${name}
    COMMAND ${PYTHON_EXECUTABLE} -c "import ${name}"
    WORKING_DIRECTORY $<TARGET_FILE_DIR:${name}>
  )
endfunction()

aligator_create_python_extension(example_extension WITH_SOABI module.cpp)
add_import_test(example_extension)
